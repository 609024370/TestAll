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
	int      nPenNo;			//Ҫ���õıʺ�(0-255)
	int      nMarkLoop;			//�ӹ�����
	double   dMarkSpeed;		//����ٶ�mm/s
	double   dPowerRatio;		//���ʰٷֱ�(0-100%)
	double   dCurrent;			//����A
	int      nFreq;				//Ƶ��HZ
	double	 dQPulseWidth;		//Q������us
	int      nStartTC;			//��ʼ��ʱus
	int      nLaserOffTC;		//����ر���ʱus
	int      nEndTC;			//������ʱus
	int      nPolyTC;			//�ս���ʱus   //
	double   dJumpSpeed;	    //��ת�ٶ�mm/s
	int      nJumpPosTC;		//��תλ����ʱus
	int      nJumpDistTC;		//��ת������ʱus
	double   dEndComp;			//ĩ�㲹��mm
	double   dAccDist;			//���پ���mm
	double   dPointTime;		//�����ʱ ms
	BOOL     bPulsePointMode;	//�����ģʽ
	int      nPulseNum;			//�������Ŀ
	double   dFlySpeed;			//��ˮ���ٶ�
}PenPara, *LPPENPARA;

typedef std::vector<PenPara> PenParaVector;

class AFX_EXT_CLASS CJCZMark
{
public:
	PenParaVector m_penParaVector;   //�ʺŲ�����
	int nEntityCount;   //��������
	BOOL m_bRedLight;  //����Ƿ�ֹͣ

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
	BOOL JCZInitial(HWND hWnd, bool testmode); //�����ģ���ʼ��(�����ڵľ��)
	void ShowErrReason(int nErr);  //��ʾ�����ģ����ô���ԭ��
	CBitmap* GetPrevBitmap(HWND hwnd, int nBMPWIDTH, int nBMPHEIGHT); //�õ�Ԥ��ͼ��
//	void RotateEntity(TCHAR* pEntityName,double dangle);  //��ת���ĵ�x,y���꣬��ת�Ƕ�
//	BOOL MoveEntity(TCHAR* pEntityName,double dOffsetX,double dOffsetY); //�ƶ�ָ������,ƫ�ƾ���x&y
	BOOL MoveEntity(char* pEntityName, double dOffsetX, double dOffsetY); //�ƶ�ָ������,ƫ�ƾ���x&y
	BOOL LoadMarkFile(char* pFilePath);  //��ָ��.ezd�ļ��������ԭ������
	BOOL SaveMarkFile(char* pFilePath);  //����ָ��.ezd�ļ�
	BOOL CloseJCZModule();  //�˳�ʱ�ر�JCZģ��
	BOOL Mark(BOOL bFlyMark, float fAngle, float fCenterX, float fCenterY); //���ģ������������, TRUE:���� FALSE:��̬
	BOOL MarkEntity(char* pEntityName);  //���ָ�����ƵĶ���
	BOOL ChangeTextByEntityName(char* pEntityName, char* pTextNew);//���ݶ������Ƹı��������
	BOOL SetDeviceConfig(); //����lmc1_SetDevCfg���Զ������豸�������öԻ����û����������豸����
	BOOL GetPenParam(int pen); //�õ��ʺ�pen�Ĳ���
	BOOL SetPenParam(int iPen); //���ñʺ�iPen����
	BOOL SaveFiles(char* pFile);//���浱ǰ�ļ�
	BOOL GetAllPens(char* pEzdfilePath);//�ڵ�ȡezd�ļ����ȡ���ļ������õ����бʺ�(ͨ���������򣺾���-0Ϊ�ʺ�0)
	void MarkCross(float fLength);//���ʮ��  ʮ���߳���
	BOOL GetTextByEntityName(char* pEntityName, char* pEntityValue); //���ݶ������Ƶõ���������

	void RotateAllEntitys(float fangle);  //ÿ����������Լ���������תangle
	void RotateAllEntitys(float fangle, float fRotateCenterX, float fRotateCenterY);
	void RotateEntityByName(char* pEntityName, float fangle);  //ָ��������ת�Ƕ�
	void RotateEntityByName(char* pEntityName, float fangle, float fRotateCenterX, float fRotateCenterY);
	void ScaleEntity(char* pEntName,//�ַ�����������
		double dCenx,
		double dCeny,
		double dScaleX,
		double dScaleY);
	void StopMark();
	void AddCurve(double ptBuf[][2], int pts, CString pEntityName, int nPenNo, int bHatch);

	//	BOOL SetHatchParam(); //���õ�ǰ������
	//	BOOL SetFontParam(); //���õ�ǰĬ���������

	void ChangeEntPenNo(char* pEntityName, int nNewPen);

	// ��ȡָ���������������
	BOOL GetEntityCenter(char* pEntName, double& dCenterX, double& dCenterY);
	// ��ȡ���ж������������
	BOOL GetAllEntityCenter(double& dCenterX, double& dCenterY);

	// 201705,��ȡָ�������λ�����꣬
	// λ������: 5Ϊ����λ��
	// 1,2,3
	// 4,5,6
	// 7,8,9
	BOOL GetEntityPos(char* pEntName, int iPosType, double& dPosX, double& dPosY, int& iRetCode);
	// ��ȡ����ĳߴ�:
	BOOL GetEntitySize(char* pEntName, double& dMinX, double& dMinY, double& dMaxX, double& dMaxY);

	// ��ȡ���������
	BOOL GetEntityName(int iIndex, char* cpEntName);
	BOOL SetEntityName(int iIndex, char* cpEntName);

	void TCHAR2pchar(TCHAR* temp_tchar, char* temp_char);
	void pchar2TCHAR(char* temp_char, TCHAR* temp_tchar);

	//�����ļ������ݿ���
	void AddFileToLib(char* pFileName,	//�ļ�����
		char* pEntName,//�ַ�����������
		double dPosX, //�ļ����½ǻ���x����
		double dPosY, //�ļ����½ǻ���y����
		double dPosZ, //�ļ�z����
		int    nAlign,//���뷽ʽ0��8
		double dRatio,//�ļ����ű���
		int nPenNo,//����ʹ�õļӹ�����
		BOOL bHatchFile);//�Ƿ�����ļ����� �����ezd�ļ���λͼ�ļ��˲�����Ч

	//�������ı������ݿ���
	void AddTextToLib(char* pStr, char* pEntName,
		double dPosX, double dPosY, double dPosZ,
		int nAlign, double dTextRotateAngle,
		int nPenNo, int bHatchText);

	//�������뵽���ݿ���
	void AddBarCodeToLib(char* pStr,	//�ַ���
		char* pEntName,//�ַ�����������
		double dPosX, //�ַ����½ǻ���x����
		double dPosY, //�ַ����½ǻ���y����
		double dPosZ, //�ַ�z����
		int    nAlign,//���뷽ʽ0��8
		int    nPenNo,
		int    bHatchText,
		int    nBarcodeType,//��������
		WORD   wBarCodeAttrib,//��������
		double dHeight,//��������ĸ�
		double dNarrowWidth,//��խģ���
		double dBarWidthScale[4],//�������	(����խģ������)
		double dSpaceWidthScale[4],//�տ����(����խģ������)
		double dMidCharSpaceScale,//�ַ��������(����խģ������)
		double dQuietLeftScale,//������հ׿�ȱ���(����խģ������)
		double dQuietMidScale,//�����пհ׿�ȱ���(����խģ������)
		double dQuietRightScale,//�����ҿհ׿�ȱ���(����խģ������)
		double dQuietTopScale,//�����Ͽհ׿�ȱ���(����խģ������)
		double dQuietBottomScale,//�����¿հ׿�ȱ���(����խģ������)
		int    nRow,//��ά������
		int    nCol,//��ά������
		int    nCheckLevel,//pdf417�����������0-8
		int    nSizeMode,//DataMatrix�ߴ�ģʽ0-30
		double dTextHeight,//��ʶ���ַ�����߶�
		double dTextWidth,//��ʶ���ַ�������
		double dTextOffsetX,//��ʶ���ַ�X����ƫ��
		double dTextOffsetY,//��ʶ���ַ�Y����ƫ��
		double dTextSpace,//��ʶ���ַ����
		double dDiameter,
		char* pTextFontName);//�ı���������

	//��������ɾ��ָ������
	BOOL DeleteEnt(char* pEName);

	//����ָ�����󣬾�����������(dCenx��dCeny)  bMirrorX=TRUE X ������  bMirrorY=TRUE Y������
	void MirrorEntity();

	//�õ���ǰϵͳ֧�ֵ������������
	lmc1_FontRecord GetAllFontRecord(int& nFontNum);
	int GetFontRecord(int& nFontIndex, char szFontName[256], DWORD&  dwFontAttrib);

	//���õ�ǰ�������������Ҫ�����ݿ�������¶���ʱʹ�����ʱ����ʹ�ô˲������
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

	//���õ�ǰ��������������Ҫ�����ݿ���������ı�����ʱ��ʹ�ô��������
	void SetFontParam();

	HINSTANCE m_hEzdDLL;//DLL���þ��
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
	// ��չ�ắ��
	LMC1_AXISMOVETO        lmc1_AxisMoveTo;
	LMC1_AXISCORRECTORIGIN lmc1_AxisCorrectOrigin;
	LMC1_GETAXISCOOR       lmc1_GetAxisCoor;
	// ʹ����չ��
	LMC1_RESET             lmc1_Reset;

private:
	CWnd* m_pParent;
	CString m_strPath;
};

#endif // !defined(AFX_JCZMARK_H__6D24BDDE_A0C1_4625_B7CA_AD7C0A3372F6__INCLUDED_)
