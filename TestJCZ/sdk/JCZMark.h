// JCZMark.h: interface for the CJCZMark class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_JCZMARK_H__6D24BDDE_A0C1_4625_B7CA_AD7C0A3372F6__INCLUDED_)
#define AFX_JCZMARK_H__6D24BDDE_A0C1_4625_B7CA_AD7C0A3372F6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "MarkEzdDll.h"
#include <vector>
using namespace std;

typedef struct
{
	int      nPenNo;			//要设置的笔号(0-255)
	int      nMarkLoop;			//加工次数
	double   dMarkSpeed;		//打标速度mm/s
	double   dPowerRatio;		//功率百分比(0-100%)
	double   dCurrent;			//电流A
	int      nFreq;				//频率HZ
	double	 dQPulseWidth;		//Q脉冲宽度us
	int      nStartTC;			//开始延时us
	int      nLaserOffTC;		//激光关闭延时us
	int      nEndTC;			//结束延时us
	int      nPolyTC;			//拐角延时us   //
	double   dJumpSpeed;	    //跳转速度mm/s
	int      nJumpPosTC;		//跳转位置延时us
	int      nJumpDistTC;		//跳转距离延时us
	double   dEndComp;			//末点补偿mm
	double   dAccDist;			//加速距离mm
	double   dPointTime;		//打点延时 ms
	BOOL     bPulsePointMode;	//脉冲点模式
	int      nPulseNum;			//脉冲点数目
	double   dFlySpeed;			//流水线速度
}PenPara, *LPPENPARA;

typedef std::vector<PenPara> PenParaVector;

class AFX_EXT_CLASS CJCZMark
{
public:
	PenParaVector m_penParaVector;   //笔号参数库
	int nEntityCount;   //对象总数
	BOOL m_bRedLight;  //红光是否停止

	int GetEntityCount();
	int GetPenCount();
	LPPENPARA GetPenParmByArrayNo(int nSel);
	LPPENPARA AddIndexPenParm(int nIndex);
	LPPENPARA ModOrAddIndexPenParm(int nIndex);
	LPPENPARA GetIndexPenParm(int nIndex);
	BOOL  SetIndexPenParm(LPPENPARA pPenPara);
	void DeleteAllPen();
	void DeleteTailPen(int nNum);

	CString MultiByteToStr(TCHAR* TChar, int nLen);
private:
	LPPENPARA HaveIndexPenParm(int nIndex);
	void AddJCZFunction();

	CPtrArray m_aPenParaArray;

public:
	//	CJCZMark(CWnd* pParent,CString strPath);
	CJCZMark(CWnd* pParent, char* strPath);
	virtual ~CJCZMark();
	BOOL JCZInitial(HWND hWnd, bool testmode); //金橙子模块初始化(父窗口的句柄)
	void ShowErrReason(int nErr);  //提示金橙子模块调用错误原因
	CBitmap* GetPrevBitmap(HWND hwnd, int nBMPWIDTH, int nBMPHEIGHT); //得到预览图像
//	void RotateEntity(TCHAR* pEntityName,double dangle);  //旋转中心点x,y坐标，旋转角度
//	BOOL MoveEntity(TCHAR* pEntityName,double dOffsetX,double dOffsetY); //移动指定对象,偏移距离x&y
	BOOL MoveEntity(char* pEntityName, double dOffsetX, double dOffsetY); //移动指定对象,偏移距离x&y
	BOOL LoadMarkFile(char* pFilePath);  //打开指定.ezd文件，并清除原有内容
	BOOL SaveMarkFile(char* pFilePath);  //保存指定.ezd文件
	BOOL CloseJCZModule();  //退出时关闭JCZ模块
	BOOL Mark(BOOL bFlyMark, float fAngle, float fCenterX, float fCenterY); //打标模板中所有内容, TRUE:飞行 FALSE:静态
	BOOL MarkEntity(char* pEntityName);  //标刻指定名称的对象
	BOOL ChangeTextByEntityName(char* pEntityName, char* pTextNew);//根据对象名称改变对象内容
	BOOL SetDeviceConfig(); //调用lmc1_SetDevCfg会自动弹出设备参数设置对话框，用户可以设置设备参数
	BOOL GetPenParam(int pen); //得到笔号pen的参数
	BOOL SetPenParam(int iPen); //设置笔号iPen参数
	BOOL SaveFiles(char* pFile);//保存当前文件
	BOOL GetAllPens(char* pEzdfilePath);//在调取ezd文件后读取该文件内所用的所有笔号(通过命名规则：矩形-0为笔号0)
	void MarkCross(float fLength);//打标十字  十字线长度
	BOOL GetTextByEntityName(char* pEntityName, char* pEntityValue); //根据对象名称得到对象内容

	void RotateAllEntitys(float fangle);  //每个对象根据自己的中心旋转angle
	void RotateAllEntitys(float fangle, float fRotateCenterX, float fRotateCenterY);
	void RotateEntityByName(char* pEntityName, float fangle);  //指定对象旋转角度
	void RotateEntityByName(char* pEntityName, float fangle, float fRotateCenterX, float fRotateCenterY);
	void ScaleEntity(char* pEntName,//字符串对象名称
		double dCenx,
		double dCeny,
		double dScaleX,
		double dScaleY);
	void StopMark();
	void AddCurve(double ptBuf[][2], int pts, CString pEntityName, int nPenNo, int bHatch);

	//	BOOL SetHatchParam(); //设置当前填充参数
	//	BOOL SetFontParam(); //设置当前默认字体参数

	void ChangeEntPenNo(char* pEntityName, int nNewPen);

	// 获取指定对象的中心坐标
	BOOL GetEntityCenter(char* pEntName, double& dCenterX, double& dCenterY);
	// 获取所有对象的中心坐标
	BOOL GetAllEntityCenter(double& dCenterX, double& dCenterY);

	// 201705,获取指定对象的位置坐标，
	// 位置类型: 5为中心位置
	// 1,2,3
	// 4,5,6
	// 7,8,9
	BOOL GetEntityPos(char* pEntName, int iPosType, double& dPosX, double& dPosY, int& iRetCode);
	// 获取对象的尺寸:
	BOOL GetEntitySize(char* pEntName, double& dMinX, double& dMinY, double& dMaxX, double& dMaxY);

	// 获取对象的名称
	BOOL GetEntityName(int iIndex, char* cpEntName);
	BOOL SetEntityName(int iIndex, char* cpEntName);

	void TCHAR2pchar(TCHAR* temp_tchar, char* temp_char);
	void pchar2TCHAR(char* temp_char, TCHAR* temp_tchar);

	//加入文件到数据库中
	void AddFileToLib(char* pFileName,	//文件名称
		char* pEntName,//字符串对象名称
		double dPosX, //文件左下角基点x坐标
		double dPosY, //文件左下角基点y坐标
		double dPosZ, //文件z坐标
		int    nAlign,//对齐方式0－8
		double dRatio,//文件缩放比例
		int nPenNo,//对象使用的加工参数
		BOOL bHatchFile);//是否填充文件对象 如果是ezd文件或位图文件此参数无效

	//加入新文本到数据库中
	void AddTextToLib(char* pStr, char* pEntName,
		double dPosX, double dPosY, double dPosZ,
		int nAlign, double dTextRotateAngle,
		int nPenNo, int bHatchText);

	//加入条码到数据库中
	void AddBarCodeToLib(char* pStr,	//字符串
		char* pEntName,//字符串对象名称
		double dPosX, //字符左下角基点x坐标
		double dPosY, //字符左下角基点y坐标
		double dPosZ, //字符z坐标
		int    nAlign,//对齐方式0－8
		int    nPenNo,
		int    bHatchText,
		int    nBarcodeType,//条码类型
		WORD   wBarCodeAttrib,//条码属性
		double dHeight,//整个条码的高
		double dNarrowWidth,//最窄模块宽
		double dBarWidthScale[4],//条宽比例	(与最窄模块宽相比)
		double dSpaceWidthScale[4],//空宽比例(与最窄模块宽相比)
		double dMidCharSpaceScale,//字符间隔比例(与最窄模块宽相比)
		double dQuietLeftScale,//条码左空白宽度比例(与最窄模块宽相比)
		double dQuietMidScale,//条码中空白宽度比例(与最窄模块宽相比)
		double dQuietRightScale,//条码右空白宽度比例(与最窄模块宽相比)
		double dQuietTopScale,//条码上空白宽度比例(与最窄模块宽相比)
		double dQuietBottomScale,//条码下空白宽度比例(与最窄模块宽相比)
		int    nRow,//二维码行数
		int    nCol,//二维码列数
		int    nCheckLevel,//pdf417错误纠正级别0-8
		int    nSizeMode,//DataMatrix尺寸模式0-30
		double dTextHeight,//人识别字符字体高度
		double dTextWidth,//人识别字符字体宽度
		double dTextOffsetX,//人识别字符X方向偏移
		double dTextOffsetY,//人识别字符Y方向偏移
		double dTextSpace,//人识别字符间距
		double dDiameter,
		char* pTextFontName);//文本字体名称

	//根据名称删除指定对象
	BOOL DeleteEnt(char* pEName);

	//镜像指定对象，镜像中心坐标(dCenx，dCeny)  bMirrorX=TRUE X 方向镜像  bMirrorY=TRUE Y方向镜像
	void MirrorEntity();

	//得到当前系统支持的所有字体参数
	lmc1_FontRecord GetAllFontRecord(int& nFontNum);
	int GetFontRecord(int& nFontIndex, char szFontName[256], DWORD&  dwFontAttrib);

	//设置当前的填充参数，如果要向数据库里添加新对象时使能填充时，会使用此参数填充
	void GetHatchParam(char* pHatchName,
		BOOL& bEnableContour,
		int nParamIndex,
		int& bEnableHatch,
		BOOL& bContourFirst,
		int& nPenNo,
		int& nHatchType,
		BOOL& bHatchAllCalc,
		BOOL& bHatchEdge,
		BOOL& bHatchAverageLine,
		double& dHatchAngle,
		double& dHatchLineDist,
		double& dHatchEdgeDist,
		double& dHatchStartOffset,
		double& dHatchEndOffset,
		double& dHatchLineReduction,
		double& dHatchLoopDist,
		int& nEdgeLoop,
		BOOL& nHatchLoopRev,
		BOOL& bHatchAutoRotate,
		double& dHatchRotateAngle,
		BOOL& bHatchCrossMode,
		int& dCycCount);

	void SetHatchParam(char* pHatchName,
		BOOL& bEnableContour,
		int nParamIndex,
		int& bEnableHatch,
		BOOL& bContourFirst,
		int& nPenNo,
		int& nHatchType,
		BOOL& bHatchAllCalc,
		BOOL& bHatchEdge,
		BOOL& bHatchAverageLine,
		double& dHatchAngle,
		double& dHatchLineDist,
		double& dHatchEdgeDist,
		double& dHatchStartOffset,
		double& dHatchEndOffset,
		double& dHatchLineReduction,
		double& dHatchLoopDist,
		int& nEdgeLoop,
		BOOL& nHatchLoopRev,
		BOOL& bHatchAutoRotate,
		double& dHatchRotateAngle,
		BOOL& bHatchCrossMode,
		int& dCycCount);

	void DeleteHatch(char* pHatchEntName);

	//设置当前的字体参数，如果要向数据库里添加新文本对象时会使用此字体参数
	void SetFontParam();

	HINSTANCE m_hEzdDLL;//DLL调用句柄
	CBitmap* m_pBitmap;

	LMC1_INITIAL           lmc1_Initial;
	LMC1_CLOSE             lmc1_Close;
	LMC1_LOADEZDFILE       lmc1_LoadEzdFile;
	LMC1_MARK              lmc1_Mark;
	LMC1_MARKENTITY        lmc1_MarkEntity;
	LMC1_GETPREVBITMAP     lmc1_GetPrevBitmap;
	LMC1_READPORT          lmc1_ReadPort;
	LMC1_WRITEPORT         lmc1_WritePort;
	LMC1_SETDEVCFG         lmc1_SetDevCfg;
	LMC1_SETHATCHPARAM     lmc1_SetHatchParam;
	LMC1_SETFONTPARAM      lmc1_SetFontParam;
	LMC1_GETPENPARAM       lmc1_GetPenParam;
	LMC1_SETROTATEPARAM    lmc1_SetRotateParam;
	LMC1_MOVEENT           lmc1_MoveEnt;
	LMC1_SETPENPARAM       lmc1_SetPenParam;
	LMC1_CLEARENTLIB       lmc1_ClearEntLib;
	LMC1_ADDCURVETOLIB	   lmc1_AddCurveToLib;
	LMC1_ADDTEXTTOLIB      lmc1_AddTextToLib;
	LMC1_ADDFILETOLIB      lmc1_AddFileToLib;
	LMC1_ADDBARCODETOLIB   lmc1_AddBarCodeToLib;
	LMC1_CHANGETEXTBYNAME  lmc1_ChangeTextByName;
	LMC1_GETFONTRECORD     lmc1_GetFontRecord;
	LMC1_GETALLFONTRECORD  lmc1_GetAllFontRecord;
	LMC1_SAVEENTLIBTOFILE  lmc1_SaveEntLibToFile;
	//	LMC1_GETPENNUMBERFROMNAME lmc1_GetPenNumberFromName;
	LMC1_GETENTITYCOUNT    lmc1_GetEntityCount;
	LMC1_GETENTITYNAME     lmc1_GetEntityName;
	LMC1_SETENTITYNAME     lmc1_SetEntityName;
	//	LMC1_GETPENCOLOR       lmc1_GetPenColor;
	LMC1_REDLIGHTMARK	   lmc1_RedLightMark;
	LMC1_MARKLINE          lmc1_MarkLine;
	LMC1_GETTEXTBYNAME     lmc1_GetTextByName;
	LMC1_ROTATEENT         lmc1_RotateEnt;
	LMC1_GETENTSIZE        lmc1_GetEntSize;
	LMC1_SCALEENT          lmc1_ScaleEnt;
	LMC1_STOPMARK          lmc1_StopMark;
	LMC1_MARKPOINT         lmc1_MarkPoint;
	LMC1_DELETEENT         lmc1_DeleteEnt;

	LMC1_MIRRORENT		   lmc1_MirrorEnt;
	LMC1_GETHATCHENTPARAM2 lmc1_GetHatchEntParam2;
	LMC1_SETHATCHENTPARAM2 lmc1_SetHatchEntParam2;
	LMC1_UNHATCHENT		   lmc1_UnHatchEnt;
	// 扩展轴函数
	LMC1_AXISMOVETO        lmc1_AxisMoveTo;
	LMC1_AXISCORRECTORIGIN lmc1_AxisCorrectOrigin;
	LMC1_GETAXISCOOR       lmc1_GetAxisCoor;
	// 使能扩展轴
	LMC1_RESET             lmc1_Reset;

private:
	CWnd* m_pParent;
	CString m_strPath;
};

#endif // !defined(AFX_JCZMARK_H__6D24BDDE_A0C1_4625_B7CA_AD7C0A3372F6__INCLUDED_)
