/****************************************
* ģ  ��  ���� ImageMatchDll.h
* ����ļ��� eVision ����ļ�
* ���������� ���ڽ���ģ��ƥ�䣬find������ƥ��ȣ��Լ�����ͼ����ʾ
* ��       �ߣ� �״���
* ����ʱ�䣺 2015/11/12 9:25:00
* ��       ����  V1.000
* ��Ȩ���У� ������뼤��ɷ����޹�˾
* �޸ļ�¼���״ο���
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
	* Function:��ȡ��ģ��İ汾��������
	* param[out] strName ��ģ�������
	* param[out] strVersion ��ģ��İ汾��
	*****************************/
	void fnGetVersion(CString &strName, CString &strVersion);

	/****************************************
	* FunctionName��fnGetImageSize
	*
	* Function����ȡ��ǰӰ��Ĵ�С
	* param[in] nImageSizeX X�����С
	* param[in] nImageSizeY Y�����С
	* param[in] nIndex Defaults to 0.ͨ����
	* return[BOOL ]
	****************************************/
	BOOL fnGetImageSize(UINT& nImageSizeX, UINT& nImageSizeY, UINT nIndex = 0);

	/****************************************
	* FunctionName��fnImageDisplay
	*
	* Function�����÷Ŵ����������ʾ
	* param[in] hDC ��ˢ�����һ����OnDraw�е��øýӿ�
	* param[in] f32ZoomX Defaults to 1.f. X����Ŵ����
	* param[in] f32ZoomY Defaults to 1.f. Y����Ŵ����
	* return[BOOL ]
	****************************************/
	BOOL fnImageDisplay(HDC hDC, float f32ZoomX = 1.f, float f32ZoomY = 1.f, BOOL bThreshold = FALSE);

	/****************************************
	* FunctionName��fnSetImageMirror
	*
	* Function������ͼ���Ƿ���
	* param[in] bHor Defaults to FALSE.�����Ƿ���Ҫ����
	* param[in] bVer Defaults to FALSE.�����Ƿ���Ҫ����
	* return[BOOL ]
	****************************************/
	BOOL fnSetImageMirror(BOOL bHor = FALSE, BOOL bVer = FALSE);

	/****************************************
	* FunctionName��fnSetConnector
	*
	* Function��������������ַ�����һ��ʹ��ģ�����ʱ���õ�
	* param[in] strConnector �����ַ�����"VID1"/"VID2"....
	* return[BOOL ]
	****************************************/
	BOOL fnSetConnector(CString strConnector);

	/****************************************
	* FunctionName��fnLoadImage
	*
	* Function����ͣͼ����ʾ��Ȼ��̬����һ��ͼƬ���˴��ᵯ���򿪶Ի������û�ѡ��
	* return[BOOL ]
	****************************************/
	BOOL fnLoadImage();

	/****************************************
	* FunctionName��fnSaveImage
	*
	* Function�����浱ǰͼ����ʾ�е�ͼƬ���ļ��У��˴��ᵯ������Ի������û�ѡ��
	* return[BOOL ]
	****************************************/
	BOOL fnSaveImage();

	/****************************************
	* FunctionName��fnSetROISize
	*
	* Function������ROI�ߴ��С
	* param[in] nOrgx X����ߴ�
	* param[in] nOrgy Y����ߴ�
	* param[in] nWidth ���
	* param[in] nHeight �߶�
	* return[BOOL ]
	****************************************/
	BOOL fnSetROISize(int nOrgx, int nOrgy, int nWidth, int nHeight);

	/****************************************
	* FunctionName��fnGetROISize
	*
	* Function����ȡROI�ߴ�
	* param[in] nWidth ���
	* param[in] nHigh �߶�
	* return[BOOL ]
	****************************************/
	BOOL fnGetROISize(int& nWidth, int& nHigh, int& nLTx, int& nLTy);

	/****************************************
	* FunctionName��fnROIDrag
	*
	* Function��ROI�϶��ӿڣ�һ���ڴ�����������Ϣʱʹ��
	* param[in] eHandle ���
	* param[in] n32X �϶�λ��X����
	* param[in] n32Y �϶�λ��Y����
	* param[in] f32ZoomX Defaults to 1.f. X���Ŵ�С
	* param[in] f32ZoomY Defaults to 0.f. Y���Ŵ�С
	* return[BOOL ]
	****************************************/
	BOOL fnROIDrag(EDragHandle eHandle, int n32X, int n32Y, float f32ZoomX = 1.f, float f32ZoomY = 0.f);

	/****************************************
	* FunctionName��fnROIHitTest
	*
	* Function��ȷ���϶���һ���ڴ�����������Ϣʱʹ��
	* param[in] n32X �϶�λ��X����
	* param[in] n32Y �϶�λ��Y����
	* param[in] f32ZoomX Defaults to 1.f. X���Ŵ�С
	* param[in] f32ZoomY Defaults to 0.f. Y���Ŵ�С
	* return[E_HANDLES ] ���ؾ��
	****************************************/
	EDragHandle fnROIHitTest(int n32X, int n32Y, float f32ZoomX = 1.f, float f32ZoomY = 0.f);

	/****************************************
	* FunctionName��fnROIDrawFrame
	*
	* Function����ʾROI���ο�һ����OnDraw��ʹ��
	* param[in] hDC ��ˢ
	* param[in] f32ZoomX Defaults to 1.f.X���Ŵ�С
	* param[in] f32ZoomY Defaults to 0.f.Y���Ŵ�С
	* param[in] bHandles Defaults to TRUE.���
	* param[in] eFramePosition Defaults to E_FRAME_ON.
	* return[BOOL ]
	****************************************/
	BOOL fnROIDrawFrame(HDC hDC, float f32ZoomX = 1.f, float f32ZoomY = 0.f, BOOL bHandles = TRUE, EFramePosition eFramePosition = EFramePosition_On);

	//EasyMatch
	/****************************************
	* FunctionName��fnMatchGetPatternSize
	*
	* Function����ȡģ��ߴ�
	* param[in] nWidth ���
	* param[in] nHigh �߶�
	* return[BOOL ]
	****************************************/
	BOOL fnMatchGetPatternSize(int& nWidth, int& nHigh);

	/****************************************
	* FunctionName��fnMatchPatternSave
	*
	* Function������ƥ��ģ��
	* param[in] strSaveFileName �洢�ļ�����·��
	* return[BOOL ]
	****************************************/
	BOOL fnMatchPatternSave(CString strSaveFileName);

	/****************************************
	* FunctionName��fnMatchPatternLoad
	*
	* Function������ƥ��ģ��
	* param[in] strPatternFileName ģ��ľ���·��
	* return[BOOL ]
	****************************************/
	BOOL fnMatchPatternLoad(CString strPatternFileName);

	/****************************************
	* FunctionName��fnMatchSetParam
	*
	* Function������ģ��ƥ�����
	* param[in] dbAngleTor ���ĽǶ��ݲΧ������dbAngleTor
	* param[in] dbScaleTor ���ķ�Χ�ݲΧ������dbScaleTor
	* return[BOOL ]
	****************************************/
	BOOL fnMatchSetParam(double dbAngleTor, double dbScaleTor);

	/****************************************
	* FunctionName��fnMatchImage
	*
	* Function������ͼ��ƥ�䣬ֻ��ģ��ƥ��
	* param[in] dbScore ƥ��õ������ƶ�
	* param[in] dbCx ��һ��ƥ�䵽������X
	* param[in] dbCy ��һ��ƥ�䵽������Y
	* param[in] dbAngle ��ת�Ƕ�
	* param[in] dbScale ��Χ��С
	* return[BOOL ]
	****************************************/
	BOOL fnMatchImage(double& dbScore, double& dbCx, double& dbCy, double& dbAngle, double& dbScale);

	/****************************************
	* FunctionName��fnMatchImage
	*
	* Function������ͼ��ƥ�䣬ֻ��ģ��ƥ��
	* param[in] dbScore ƥ��õ������ƶ�
	* param[in] dbCx ��һ��ƥ�䵽������X
	* param[in] dbCy ��һ��ƥ�䵽������Y
	* param[in] dbAngle ��ת�Ƕ�
	* param[in] dbScale ��Χ��С
	* return[BOOL ]
	****************************************/
	BOOL fnMutilMatchImage(int nMaxPostion, float fScore, int& num);

	BOOL fnGetMatchResult(int nPostion, double& dbScore, double& dbCx, double& dbCy, double& dbAngle, double& dbScale);

	/****************************************
	* FunctionName��fnMatchDrawRes
	*
	* Function����ʾģ��ƥ����ο�һ����OnDraw��ʹ��
	* param[in] hDC ��ˢ
	* param[in] f32ZoomX Defaults to 1.f.X���Ŵ�С
	* param[in] f32ZoomY Defaults to 0.f.Y���Ŵ�С
	* param[in] u32Index Defaults to 0.ͨ����
	* param[in] bCorner Defaults to FALSE.
	* return[BOOL ]
	****************************************/
	BOOL fnMatchDrawRes(HDC hDC, float f32ZoomX = 1.f, float f32ZoomY = 0.f, UINT u32Index = 0, BOOL bCorner = FALSE);

	//EasyFind
	/****************************************
	* FunctionName��fnFindSetLearnParam
	*
	* Function������ѧϰģ������
	* param[in] nPatternType ����
	* return[BOOL ]
	****************************************/
	BOOL fnFindSetLearnParam(int nPatternType);

	/****************************************
	* FunctionName��fnFindSetFindParam
	*
	* Function������find����
	* param[in] dbAngleTor �Ƕ��ݲ�
	* param[in] dbScaleTor ��Χ�ݲ�
	* param[in] nExtend Defaults to 0.
	* param[in] nContrastMode Defaults to 0.
	* return[BOOL ]
	****************************************/
	BOOL fnFindSetFindParam(double dbAngleTor, double dbScaleTor, double dbScore, int nExtend = 0, int nContrastMode = 0);

	/****************************************
	* FunctionName��fnFindLoadPattern
	*
	* Function������findģ��
	* param[in] strPatternFile ģ���ļ�����·��
	* return[BOOL ]
	****************************************/
	BOOL fnFindLoadPattern(CString strPatternFile);

	/****************************************
	* FunctionName��fnFindSavePattern
	*
	* Function������findģ��
	* param[in] strPatternFile ģ���ļ�����·��
	* return[BOOL ]
	****************************************/
	BOOL fnFindSavePattern(CString strPatternFile);

	/****************************************
	* FunctionName��fnFindImage
	*
	* Function��ͼ��findƥ��
	* param[in] dbScore ���ƶ�
	* param[in] dbCx ����X
	* param[in] dbCy ����Y
	* param[in] dbAngle �Ƕ�
	* param[in] dbScale ��Χ
	* return[BOOL ]
	****************************************/
	BOOL fnFindImage(double& dbScore, double& dbCx, double& dbCy, double& dbAngle, double& dbScale);

	/****************************************
	* FunctionName��fnFindImage
	*
	* Function��ͼ��findƥ��
	* param[in] dbScore ���ƶ�
	* param[in] dbCx ����X
	* param[in] dbCy ����Y
	* param[in] dbAngle �Ƕ�
	* param[in] dbScale ��Χ
	* return[BOOL ]
	****************************************/
	BOOL fnMutilFindImage(int nMaxPostion, float fScore, int& num);

	BOOL fnGetFindResult(int nPostion, double& dbScore, double& dbCx, double& dbCy, double& dbAngle, double& dbScale);

	/****************************************
	* FunctionName��fnFindDrawRes
	*
	* Function��findƥ��ʱ����ʾ���
	* param[in] hdc ��ˢ
	* param[in] f32ZoomX Defaults to 1.f. X���Ŵ�С
	* param[in] f32ZoomY Defaults to 1.f. Y���Ŵ�С
	* return[BOOL ]
	****************************************/
	BOOL fnFindDrawRes(HDC hdc, float f32ZoomX = 1.f, float f32ZoomY = 1.f);

	/**************************************************************************
	* FunctionName: fnSetImagePtr
	*
	* FunctionName:�����������ָ�봫��match
	* param[in] pImagePrt
	* return[BOOL] TRUE:�ɹ� FALSE:ʧ��
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
	* FunctionName��fnGetLastErr
	*
	* Function����ȡ��ģ����ֵĴ�����Ϣ
	* return[CString ]
	****************************************/
	CString fnGetLastErr();

	/**************************************************************************
	 * FunctionName: fnThresholding
	 *
	 * FunctionName:��ֵ��
	 * param[in] pImagePrt
	 * return[BOOL] TRUE:�ɹ� FALSE:ʧ��
	 *****************************/
	BOOL fnThresholding(int threshold);

	BOOL fnImageGainAndOffset(float fImageGain, float fImageOffset);

	//����gauge����
	BOOL fnSetRectGaugeParam(int eTransitionType = 0, int eTransitionChoice = 0);
	//
	BOOL fnSetLineGaugeParam(IMAGE_GAUGE_PARAM nGaugeParam);

	BOOL fnGetLineGaugeParam(IMAGE_GAUGE_PARAM& nGaugeParam);

	BOOL fnDrawLineGauge(HDC hdc, float fScaleX, float fScaleY, BOOL bShowResult = FALSE);
	//�����gauge�������λ��
	EDragHandle fnPointInRect(CPoint point);

	BOOL fnLoadGauge(CString strPath = _T(""), BOOL bAuto = FALSE);

	BOOL fnSaveGauge();

	BOOL fnCreateGauge();
	//
	BOOL fnSetLineGaugePos(IMAGE_GAUGE_POS GaugePos);

	BOOL fnGetLineGaugePos(IMAGE_GAUGE_POS& GaugePos);
	//gauge����
	BOOL fnLineGauge(IMAGE_GAUGE_RESULT& GaugeResult, BOOL bThreshold = FALSE, int nThreshold = 0);
	BOOL fnGetLine(DPOINT& startPoint, DPOINT& endPoint);

	BOOL fnLineGauge(float& SampleX, float& SampleY, int num);

	int fnGetNumValidSamples();

	BOOL fnSetGaugeSampleStep(float fStep);

	BOOL fnGetGaugeSampleStep(int& nStep);

	//	BOOL fnDrawLineGauge(HDC hdc,float fScaleX,float fScaleY);
	//
	BOOL fnRectAngleGauge(DPOINT& measureCenter, DPOINT& measureSize, float& measureAngle);

	//����gaugeλ��
	BOOL fnSetRectGaugePos(DPOINT pointCenter, DPOINT pointSize, float fTolerance);

private:
	//find����
	EPatternFinder m_Finder;
	//find��ʾ���
	std::vector<EFoundPattern> m_FinderRes;

	//ͼ�������
	EImageBW8 m_Image;
	//ͼ�������ĸ���
	EImageBW8 m_ImageCpy;
	EImageBW8 m_ImageCpy1;
	EImageBW8 m_ImagePtr;
	EImageBW8 m_MatchTemp;
	EImageBW8 m_MatchFind;
	//ģ��ƥ��
	EMatcher m_Match;
	//ģ������
	EROIBW8	m_Roi;
	//�����һЩ���ò���
	CAMERA_PARAM m_cParam;
	//������Ϣ
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
	ELineGauge			m_ELineGauge; // ʵ�ʹ���
	ELineGauge			m_ELineGaugeS; // ��ʾ����
	ELine				m_MeasuredLine; //�������
	ERectangleGauge		m_ERectangleGauge;
	ERectangle			m_MeasureRect;//�������
	EDragHandle			m_dragHandle;
	DPOINT				m_pointStart;
	DPOINT				m_pointEnd;
public:
	std::vector<EFoundPattern> foundPattern;
};

#endif // !defined(AFX_OPENEVISION_H__11E9B8DF_3CF5_449B_A528_87C01CEB92E6__INCLUDED_)
