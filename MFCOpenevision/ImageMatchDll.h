/****************************************
* 模  块  名： ImageMatchDll.h
* 相关文件： eVision 相关文件
* 功能描述： 用于进行模板匹配，find，区域匹配等，以及进行图像显示
* 作       者： 雷春翔
* 开发时间： 2015/11/12 9:25:00
* 版       本：  V1.000
* 版权所有： 苏州天弘激光股份有限公司
* 修改记录：首次开发
****************************************/

#if !defined(AFX_OPENEVISION_H__11E9B8DF_3CF5_449B_A528_87C01CEB92E6__INCLUDED_)
#define AFX_OPENEVISION_H__11E9B8DF_3CF5_449B_A528_87C01CEB92E6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
//#pragma once

#include "opinclude/Open_eVision_1_2.h"
#include "CommonDefine.h"
using namespace Euresys::Open_eVision_1_2;

class CImageMatchDll :public CObject
{
public:
	CImageMatchDll(void);
	~CImageMatchDll(void);

	/*****************************
	* FunctionName: fnGetVersion
	*
	* Function:获取该模块的版本号与名称
	* param[out] strName 该模块的名称
	* param[out] strVersion 该模块的版本号
	*****************************/
	void fnGetVersion(CString &strName, CString &strVersion);

	/****************************************
	* FunctionName：fnGetImageSize
	*
	* Function：获取当前影像的大小
	* param[in] nImageSizeX X方向大小
	* param[in] nImageSizeY Y方向大小
	* param[in] nIndex Defaults to 0.通道号
	* return[BOOL ]
	****************************************/
	BOOL fnGetImageSize(UINT& nImageSizeX, UINT& nImageSizeY, UINT nIndex = 0);

	/****************************************
	* FunctionName：fnImageDisplay
	*
	* Function：设置放大比例，并显示
	* param[in] hDC 画刷句柄，一般在OnDraw中调用该接口
	* param[in] f32ZoomX Defaults to 1.f. X方向放大比例
	* param[in] f32ZoomY Defaults to 1.f. Y方向放大比例
	* return[BOOL ]
	****************************************/
	BOOL fnImageDisplay(HDC hDC, float f32ZoomX = 1.f, float f32ZoomY = 1.f, BOOL bThreshold = FALSE);

	/****************************************
	* FunctionName：fnSetImageMirror
	*
	* Function：设置图像是否镜像
	* param[in] bHor Defaults to FALSE.横向是否需要镜像
	* param[in] bVer Defaults to FALSE.纵向是否需要镜像
	* return[BOOL ]
	****************************************/
	BOOL fnSetImageMirror(BOOL bHor = FALSE, BOOL bVer = FALSE);

	/****************************************
	* FunctionName：fnSetConnector
	*
	* Function：设置相机连接字符串，一般使用模拟相机时才用到
	* param[in] strConnector 连接字符串，"VID1"/"VID2"....
	* return[BOOL ]
	****************************************/
	BOOL fnSetConnector(CString strConnector);

	/****************************************
	* FunctionName：fnLoadImage
	*
	* Function：暂停图像显示，然后静态加载一副图片，此处会弹出打开对话框，让用户选择
	* return[BOOL ]
	****************************************/
	BOOL fnLoadImage();

	/****************************************
	* FunctionName：fnSaveImage
	*
	* Function：保存当前图像显示中的图片到文件中，此处会弹出保存对话框，让用户选择
	* return[BOOL ]
	****************************************/
	BOOL fnSaveImage();

	/****************************************
	* FunctionName：fnSetROISize
	*
	* Function：设置ROI尺寸大小
	* param[in] nOrgx X方向尺寸
	* param[in] nOrgy Y方向尺寸
	* param[in] nWidth 宽度
	* param[in] nHeight 高度
	* return[BOOL ]
	****************************************/
	BOOL fnSetROISize(int nOrgx, int nOrgy, int nWidth, int nHeight);

	/****************************************
	* FunctionName：fnGetROISize
	*
	* Function：获取ROI尺寸
	* param[in] nWidth 宽度
	* param[in] nHigh 高度
	* return[BOOL ]
	****************************************/
	BOOL fnGetROISize(int& nWidth, int& nHigh, int& nLTx, int& nLTy);

	/****************************************
	* FunctionName：fnROIDrag
	*
	* Function：ROI拖动接口，一般在处理鼠标左键消息时使用
	* param[in] eHandle 句柄
	* param[in] n32X 拖动位置X坐标
	* param[in] n32Y 拖动位置Y坐标
	* param[in] f32ZoomX Defaults to 1.f. X缩放大小
	* param[in] f32ZoomY Defaults to 0.f. Y缩放大小
	* return[BOOL ]
	****************************************/
	BOOL fnROIDrag(EDragHandle eHandle, int n32X, int n32Y, float f32ZoomX = 1.f, float f32ZoomY = 0.f);

	/****************************************
	* FunctionName：fnROIHitTest
	*
	* Function：确认拖动，一般在处理鼠标左键消息时使用
	* param[in] n32X 拖动位置X坐标
	* param[in] n32Y 拖动位置Y坐标
	* param[in] f32ZoomX Defaults to 1.f. X缩放大小
	* param[in] f32ZoomY Defaults to 0.f. Y缩放大小
	* return[E_HANDLES ] 返回句柄
	****************************************/
	EDragHandle fnROIHitTest(int n32X, int n32Y, float f32ZoomX = 1.f, float f32ZoomY = 0.f);

	/****************************************
	* FunctionName：fnROIDrawFrame
	*
	* Function：显示ROI矩形框，一般在OnDraw中使用
	* param[in] hDC 画刷
	* param[in] f32ZoomX Defaults to 1.f.X缩放大小
	* param[in] f32ZoomY Defaults to 0.f.Y缩放大小
	* param[in] bHandles Defaults to TRUE.句柄
	* param[in] eFramePosition Defaults to E_FRAME_ON.
	* return[BOOL ]
	****************************************/
	BOOL fnROIDrawFrame(HDC hDC, float f32ZoomX = 1.f, float f32ZoomY = 0.f, BOOL bHandles = TRUE, EFramePosition eFramePosition = EFramePosition_On);

	//EasyMatch
	/****************************************
	* FunctionName：fnMatchGetPatternSize
	*
	* Function：获取模板尺寸
	* param[in] nWidth 宽度
	* param[in] nHigh 高度
	* return[BOOL ]
	****************************************/
	BOOL fnMatchGetPatternSize(int& nWidth, int& nHigh);

	/****************************************
	* FunctionName：fnMatchPatternSave
	*
	* Function：保存匹配模板
	* param[in] strSaveFileName 存储文件绝对路径
	* return[BOOL ]
	****************************************/
	BOOL fnMatchPatternSave(CString strSaveFileName);

	/****************************************
	* FunctionName：fnMatchPatternLoad
	*
	* Function：加载匹配模板
	* param[in] strPatternFileName 模板的绝对路径
	* return[BOOL ]
	****************************************/
	BOOL fnMatchPatternLoad(CString strPatternFileName);

	/****************************************
	* FunctionName：fnMatchSetParam
	*
	* Function：设置模板匹配参数
	* param[in] dbAngleTor 最大的角度容差范围，正负dbAngleTor
	* param[in] dbScaleTor 最大的范围容差范围，正负dbScaleTor
	* return[BOOL ]
	****************************************/
	BOOL fnMatchSetParam(double dbAngleTor, double dbScaleTor);

	/****************************************
	* FunctionName：fnMatchImage
	*
	* Function：进行图像匹配，只做模板匹配
	* param[in] dbScore 匹配得到的相似度
	* param[in] dbCx 第一个匹配到的中心X
	* param[in] dbCy 第一个匹配到的中心Y
	* param[in] dbAngle 旋转角度
	* param[in] dbScale 范围大小
	* return[BOOL ]
	****************************************/
	BOOL fnMatchImage(double& dbScore, double& dbCx, double& dbCy, double& dbAngle, double& dbScale);

	/****************************************
	* FunctionName：fnMatchImage
	*
	* Function：进行图像匹配，只做模板匹配
	* param[in] dbScore 匹配得到的相似度
	* param[in] dbCx 第一个匹配到的中心X
	* param[in] dbCy 第一个匹配到的中心Y
	* param[in] dbAngle 旋转角度
	* param[in] dbScale 范围大小
	* return[BOOL ]
	****************************************/
	BOOL fnMutilMatchImage(int nMaxPostion, float fScore, int& num);

	BOOL fnGetMatchResult(int nPostion, double& dbScore, double& dbCx, double& dbCy, double& dbAngle, double& dbScale);

	/****************************************
	* FunctionName：fnMatchDrawRes
	*
	* Function：显示模板匹配矩形框，一般在OnDraw中使用
	* param[in] hDC 画刷
	* param[in] f32ZoomX Defaults to 1.f.X缩放大小
	* param[in] f32ZoomY Defaults to 0.f.Y缩放大小
	* param[in] u32Index Defaults to 0.通道号
	* param[in] bCorner Defaults to FALSE.
	* return[BOOL ]
	****************************************/
	BOOL fnMatchDrawRes(HDC hDC, float f32ZoomX = 1.f, float f32ZoomY = 0.f, UINT u32Index = 0, BOOL bCorner = FALSE);

	//EasyFind
	/****************************************
	* FunctionName：fnFindSetLearnParam
	*
	* Function：设置学习模板类型
	* param[in] nPatternType 类型
	* return[BOOL ]
	****************************************/
	BOOL fnFindSetLearnParam(int nPatternType);

	/****************************************
	* FunctionName：fnFindSetFindParam
	*
	* Function：设置find参数
	* param[in] dbAngleTor 角度容差
	* param[in] dbScaleTor 范围容差
	* param[in] nExtend Defaults to 0.
	* param[in] nContrastMode Defaults to 0.
	* return[BOOL ]
	****************************************/
	BOOL fnFindSetFindParam(double dbAngleTor, double dbScaleTor, double dbScore, int nExtend = 0, int nContrastMode = 0);

	/****************************************
	* FunctionName：fnFindLoadPattern
	*
	* Function：加载find模板
	* param[in] strPatternFile 模板文件绝对路径
	* return[BOOL ]
	****************************************/
	BOOL fnFindLoadPattern(CString strPatternFile);

	/****************************************
	* FunctionName：fnFindSavePattern
	*
	* Function：保存find模板
	* param[in] strPatternFile 模板文件绝对路径
	* return[BOOL ]
	****************************************/
	BOOL fnFindSavePattern(CString strPatternFile);

	/****************************************
	* FunctionName：fnFindImage
	*
	* Function：图像find匹配
	* param[in] dbScore 相似度
	* param[in] dbCx 中心X
	* param[in] dbCy 中心Y
	* param[in] dbAngle 角度
	* param[in] dbScale 范围
	* return[BOOL ]
	****************************************/
	BOOL fnFindImage(double& dbScore, double& dbCx, double& dbCy, double& dbAngle, double& dbScale);

	/****************************************
	* FunctionName：fnFindImage
	*
	* Function：图像find匹配
	* param[in] dbScore 相似度
	* param[in] dbCx 中心X
	* param[in] dbCy 中心Y
	* param[in] dbAngle 角度
	* param[in] dbScale 范围
	* return[BOOL ]
	****************************************/
	BOOL fnMutilFindImage(int nMaxPostion, float fScore, int& num);

	BOOL fnGetFindResult(int nPostion, double& dbScore, double& dbCx, double& dbCy, double& dbAngle, double& dbScale);

	/****************************************
	* FunctionName：fnFindDrawRes
	*
	* Function：find匹配时，显示外框
	* param[in] hdc 画刷
	* param[in] f32ZoomX Defaults to 1.f. X缩放大小
	* param[in] f32ZoomY Defaults to 1.f. Y缩放大小
	* return[BOOL ]
	****************************************/
	BOOL fnFindDrawRes(HDC hdc, float f32ZoomX = 1.f, float f32ZoomY = 1.f);

	/**************************************************************************
	* FunctionName: fnSetImagePtr
	*
	* FunctionName:将相机的数据指针传给match
	* param[in] pImagePrt
	* return[BOOL] TRUE:成功 FALSE:失败
	*****************************/
	BOOL fnSetImagePtr(int nWidth, int nHeight, void* pImagePrt, BOOL bThreshold = FALSE, int nThreshold = 0);

	/**************************************************************************
	* FunctionName: fnGetImage
	*
	*****************************/
	EImageBW8 fnGetImage();
	/**************************************************************************
	* FunctionName: fnSetImage
	*
	*****************************/
	BOOL fnSetImage(EImageBW8 image);
	/****************************************
	* FunctionName：fnGetLastErr
	*
	* Function：获取本模块出现的错误信息
	* return[CString ]
	****************************************/
	CString fnGetLastErr();

	/**************************************************************************
	 * FunctionName: fnThresholding
	 *
	 * FunctionName:二值化
	 * param[in] pImagePrt
	 * return[BOOL] TRUE:成功 FALSE:失败
	 *****************************/
	BOOL fnThresholding(int threshold);

	BOOL fnImageGainAndOffset(float fImageGain, float fImageOffset);

	//设置gauge参数
	BOOL fnSetRectGaugeParam(int eTransitionType = 0, int eTransitionChoice = 0);
	//
	BOOL fnSetLineGaugeParam(IMAGE_GAUGE_PARAM nGaugeParam);

	BOOL fnGetLineGaugeParam(IMAGE_GAUGE_PARAM& nGaugeParam);

	BOOL fnDrawLineGauge(HDC hdc, float fScaleX, float fScaleY, BOOL bShowResult = FALSE);
	//鼠标在gauge工具里的位置
	EDragHandle fnPointInRect(CPoint point);

	BOOL fnLoadGauge(CString strPath = _T(""), BOOL bAuto = FALSE);

	BOOL fnSaveGauge();

	BOOL fnCreateGauge();
	//
	BOOL fnSetLineGaugePos(IMAGE_GAUGE_POS GaugePos);

	BOOL fnGetLineGaugePos(IMAGE_GAUGE_POS& GaugePos);
	//gauge测量
	BOOL fnLineGauge(IMAGE_GAUGE_RESULT& GaugeResult, BOOL bThreshold = FALSE, int nThreshold = 0);
	BOOL fnGetLine(DPOINT& startPoint, DPOINT& endPoint);

	BOOL fnLineGauge(float& SampleX, float& SampleY, int num);

	int fnGetNumValidSamples();

	BOOL fnSetGaugeSampleStep(float fStep);

	BOOL fnGetGaugeSampleStep(int& nStep);

	//	BOOL fnDrawLineGauge(HDC hdc,float fScaleX,float fScaleY);
	//
	BOOL fnRectAngleGauge(DPOINT& measureCenter, DPOINT& measureSize, float& measureAngle);

	//设置gauge位置
	BOOL fnSetRectGaugePos(DPOINT pointCenter, DPOINT pointSize, float fTolerance);

private:
	//find对象
	EPatternFinder m_Finder;
	//find显示外框
	std::vector<EFoundPattern> m_FinderRes;

	//图像处理对象
	EImageBW8 m_Image;
	//图像处理对象的副本
	EImageBW8 m_ImageCpy;
	EImageBW8 m_ImageCpy1;
	EImageBW8 m_ImagePtr;
	EImageBW8 m_MatchTemp;
	EImageBW8 m_MatchFind;
	//模板匹配
	EMatcher m_Match;
	//模板制作
	EROIBW8	m_Roi;
	//相机的一些配置参数
	CAMERA_PARAM m_cParam;
	//错误信息
	CString	m_strErrInfo;
	double m_dbAngleTor;
	double m_dbScaleTor;
	double m_dbScore;
	int m_nExtend;
	int m_nContrastMode;
	BOOL m_bFind;
	BOOL m_bMatch;
	BYTE*	m_pImageBuffer;
	int m_nImageSizeX;
	int m_nImageSizeY;
	BOOL m_bFirstSize;
	BOOL m_bGauge;
	int m_nSample;
	CDC* dc;
private:
	EWorldShape			m_EWorldShape; // EWorldShape instance
	ELineGauge			m_ELineGauge; // 实际工具
	ELineGauge			m_ELineGaugeS; // 显示工具
	ELine				m_MeasuredLine; //测量结果
	ERectangleGauge		m_ERectangleGauge;
	ERectangle			m_MeasureRect;//测量结果
	EDragHandle			m_dragHandle;
	DPOINT				m_pointStart;
	DPOINT				m_pointEnd;
public:
	std::vector<EFoundPattern> foundPattern;
};

#endif // !defined(AFX_OPENEVISION_H__11E9B8DF_3CF5_449B_A528_87C01CEB92E6__INCLUDED_)
