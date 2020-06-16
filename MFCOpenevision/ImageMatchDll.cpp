#include "pch.h"
#include "ImageMatchDll.h"

//������ָ���
CRITICAL_SECTION m_gMatch;
CImageMatchDll::CImageMatchDll(void)
{
	m_dbAngleTor = 10;
	m_dbScaleTor = 0.7;
	m_dbScore = 0.6;
	m_nExtend = 10;
	m_nContrastMode = 0;
	m_bFind = FALSE;
	m_bMatch = FALSE;
	m_bFirstSize = FALSE;
	dc = NULL;
	InitializeCriticalSection(&m_gMatch);
}

CImageMatchDll::~CImageMatchDll(void)
{
}

/*****************************
* FunctionName: fnGetVersion
*
* Function:��ȡ��ģ��İ汾��������
* param[out] cName ��ģ�������
* param[out] cVersion ��ģ��İ汾��
*****************************/
void CImageMatchDll::fnGetVersion(CString &strName, CString &strVersion)
{
	// 	TCHAR szFile[8192];
	// 	TCHAR szVersionBuffer[8192] = _T("");
	// 	DWORD dwVerSize;
	// 	DWORD dwHandle;
	//
	// 	//��ǰģ������
	// 	strName = _T("ImageMatch.dll");
	// 	strcpy_s(szFile,strName);
	//
	// 	//��ȡ�汾��Ϣ��С
	// 	dwVerSize = GetFileVersionInfoSize(szFile, &dwHandle);
	// 	if (dwVerSize == 0)
	// 	{
	// 		strVersion = "1.000";
	// 		return;
	// 	}
	//
	// 	//��ȡ�汾��Ϣ
	// 	if (GetFileVersionInfo(szFile, 0, dwVerSize, szVersionBuffer))
	// 	{
	// 		VS_FIXEDFILEINFO * pInfo;
	// 		unsigned int nInfoLen;
	//
	// 		//�����汾��Ϣ
	// 		if (VerQueryValue(szVersionBuffer, _T("\\"), (void**)&pInfo, &nInfoLen))
	// 		{
	// 			strVersion.Format(_T("%d.%d%d%d"),
	// 				HIWORD(pInfo->dwFileVersionMS), LOWORD(pInfo->dwFileVersionMS),
	// 				HIWORD(pInfo->dwFileVersionLS), LOWORD(pInfo->dwFileVersionLS));
	// 		}
	// 	}
}

/****************************************
* FunctionName��fnGetImageSize
*
* Function����ȡ��ǰӰ��Ĵ�С
* param[in] nImageSizeX X�����С
* param[in] nImageSizeY Y�����С
* param[in] nIndex Defaults to 0.ͨ����
* return[BOOL ]
****************************************/
BOOL CImageMatchDll::fnGetImageSize(UINT& nImageSizeX, UINT& nImageSizeY, UINT nIndex)
{
	nImageSizeX = m_cParam.nImageSizeX;
	nImageSizeY = m_cParam.nImageSizeY;
	return TRUE;
}

/****************************************
* FunctionName��fnImageDisplay
*
* Function�����÷Ŵ����������ʾ
* param[in] hDC ��ˢ�����һ����OnDraw�е��øýӿ�
* param[in] f32ZoomX Defaults to 1.f. X����Ŵ����
* param[in] f32ZoomY Defaults to 1.f. Y����Ŵ����
* return[BOOL ]
****************************************/
BOOL CImageMatchDll::fnImageDisplay(HDC hDC, float f32ZoomX, float f32ZoomY, BOOL bThreshold)
{
	try
	{
		//���ű�������С��0
		if ((0 < f32ZoomX) && (0 < f32ZoomY))
		{
			if (m_cParam.bHorMirror)
			{
				EasyImage::HorizontalMirror(&m_ImageCpy);
			}

			if (m_cParam.bVerMirror)
			{
				EasyImage::VerticalMirror(&m_ImageCpy);
			}
			//		m_MatchFind = m_ImageCpy;

//			m_ImageCpy.Draw(hDC,f32ZoomX,f32ZoomY);
			if (bThreshold)
			{
				m_ImageCpy.Draw(hDC, f32ZoomX, f32ZoomY);
			}
			else
			{
				m_ImageCpy1.Draw(hDC, f32ZoomX, f32ZoomY);
			}
		}
		else
		{
			m_strErrInfo = "Zoom rate can not less than zero";
			return FALSE;
		}
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}

	return TRUE;
}

/****************************************
* FunctionName��fnSetImageMirror
*
* Function������ͼ���Ƿ���
* param[in] bHor Defaults to FALSE.�����Ƿ���Ҫ����
* param[in] bVer Defaults to FALSE.�����Ƿ���Ҫ����
* return[BOOL ]
****************************************/
BOOL CImageMatchDll::fnSetImageMirror(BOOL bHor, BOOL bVer)
{
	m_cParam.bHorMirror = bHor;
	m_cParam.bVerMirror = bVer;

	return TRUE;
}

/****************************************
* FunctionName��fnSetConnector
*
* Function��������������ַ�����һ��ʹ��ģ�����ʱ���õ�
* param[in] strConnector �����ַ�����"VID1"/"VID2"....
* return[BOOL ]
****************************************/
BOOL CImageMatchDll::fnSetConnector(CString strConnector)
{
	//m_cParam.strConnect = strConnector;
	return TRUE;
}

/****************************************
* FunctionName��fnLoadImage
*
* Function����ͣͼ����ʾ��Ȼ��̬����һ��ͼƬ���˴��ᵯ���򿪶Ի������û�ѡ��
* return[BOOL ]
****************************************/
BOOL CImageMatchDll::fnLoadImage()
{
	try
	{
		CString	strTemp;
		CFileDialog fileopen(TRUE, "*.jpg|", "", OFN_HIDEREADONLY | OFN_FILEMUSTEXIST,
			"JPG(*.jpg)|*.jpg|BMP(*.bmp)|*.bmp|TIF(*.tif)|*.tif||", NULL);

		//���ļ�
		if (IDOK == fileopen.DoModal())
		{
			strTemp = fileopen.GetPathName();
			m_Image.Load(strTemp.GetBuffer(strTemp.GetLength()));
		}
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}

	return TRUE;
}

/****************************************
* FunctionName��fnSaveImage
*
* Function�����浱ǰͼ����ʾ�е�ͼƬ���ļ��У��˴��ᵯ������Ի������û�ѡ��
* return[BOOL ]
****************************************/
BOOL CImageMatchDll::fnSaveImage()
{
	try
	{
		CString	strTemp;
		CFileDialog filesave(FALSE, "*.jpg|", "", OFN_HIDEREADONLY | OFN_FILEMUSTEXIST,
			"JPG(*.jpg)|*.jpg|BMP(*.bmp)|*.bmp|TIF(*.tif)|*.tif||", NULL);

		//����Ի���
		if (IDOK == filesave.DoModal())
		{
			strTemp = filesave.GetPathName();
			m_Image.Save(strTemp.GetBuffer(strTemp.GetLength()));
		}
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}

	return TRUE;
}

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
BOOL CImageMatchDll::fnSetROISize(int nOrgx, int nOrgy, int nWidth, int nHeight)
{
	if ((0 > nOrgx) || (0 > nOrgy) || (0 > nWidth) || (0 > nHeight))
	{
		m_strErrInfo = "ROI param error!";
		return FALSE;
	}
	else
	{
		try
		{
			//����ROI����
			m_Roi.SetOrgX(nOrgx);
			m_Roi.SetOrgY(nOrgy);
			m_Roi.SetWidth(nWidth);
			m_Roi.SetHeight(nHeight);

			m_Roi.Detach();
			//m_Roi.Attach(&m_Image);
			m_Roi.Attach(&m_ImageCpy);
			m_Roi.SetPlacement(nOrgx, nOrgy, nWidth, nHeight);
		}
		catch (EException e)
		{
			m_strErrInfo = e.What().c_str();
			return FALSE;
		}
	}

	return TRUE;
}

/****************************************
* FunctionName��fnGetROISize
*
* Function����ȡROI�ߴ�
* param[in] nWidth ���
* param[in] nHigh �߶�
* return[BOOL ]
****************************************/
BOOL CImageMatchDll::fnGetROISize(int& nWidth, int& nHigh, int& nLTx, int& nLTy)
{
	try
	{
		nLTx = m_Roi.GetOrgX();
		nLTy = m_Roi.GetOrgY();
		nWidth = m_Roi.GetWidth();
		nHigh = m_Roi.GetHeight();
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}

	return TRUE;
}

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
BOOL CImageMatchDll::fnROIDrag(EDragHandle eHandle, int n32X, int n32Y, float f32ZoomX, float f32ZoomY)
{
	try
	{
		m_Roi.Drag(eHandle, n32X, n32Y, f32ZoomX, f32ZoomY);
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}

	return TRUE;
}

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
EDragHandle CImageMatchDll::fnROIHitTest(int n32X, int n32Y, float f32ZoomX, float f32ZoomY)
{
	return	m_Roi.HitTest(n32X, n32Y, f32ZoomX, f32ZoomY);
}

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
BOOL CImageMatchDll::fnROIDrawFrame(HDC hDC, float f32ZoomX, float f32ZoomY, BOOL bHandles, EFramePosition eFramePosition)
{
	try
	{
		m_Roi.DrawFrame(hDC, eFramePosition, bHandles, f32ZoomX, f32ZoomY);
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}

	return TRUE;
}

/****************************************
* FunctionName��fnMatchGetPatternSize
*
* Function����ȡģ��ߴ�
* param[in] nWidth ���
* param[in] nHigh �߶�
* return[BOOL ]
****************************************/
BOOL CImageMatchDll::fnMatchGetPatternSize(int& nWidth, int& nHigh)
{
	try
	{
		nWidth = m_Match.GetPatternWidth();
		nHigh = m_Match.GetPatternHeight();
		return TRUE;
	}
	catch (EException e)
	{
		m_strErrInfo = "Get match pattern size error";
		return FALSE;
	}

	return TRUE;
}

/****************************************
* FunctionName��fnMatchPatternSave
*
* Function������ƥ��ģ��
* param[in] strSaveFileName �洢�ļ�����·��
* return[BOOL ]
****************************************/
BOOL CImageMatchDll::fnMatchPatternSave(CString strSaveFileName)
{
	//�ļ�������Ϊ��
	if (strSaveFileName.IsEmpty())
	{
		m_strErrInfo = "Match pattern file name can not be empty!";
		return FALSE;
	}

	try
	{
		//ģ��ѧϰ
		m_Match.LearnPattern(&m_Roi);

		//��ͼ�񱣴�Ϊģ���ļ�
		m_Match.Save(strSaveFileName.GetBuffer(strSaveFileName.GetLength()));

		//�ļ����ƣ���ģ���ļ�ͬ����ֻ�Ǻ�׺��һ��
		CString bmpFile = strSaveFileName.Left(strSaveFileName.GetLength() - 4) + ".bmp";

		//��ROIͼ�񱣴�Ϊbmp���ӻ�ͼƬ
		m_Roi.Save(bmpFile.GetBuffer(strSaveFileName.GetLength()), EImageFileType_Bmp);
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}

	return TRUE;
}

/****************************************
* FunctionName��fnMatchPatternLoad
*
* Function������ƥ��ģ��
* param[in] strPatternFileName ģ��ľ���·��
* return[BOOL ]
****************************************/
BOOL CImageMatchDll::fnMatchPatternLoad(CString strPatternFileName)
{
	try
	{
		if (strPatternFileName.IsEmpty())
		{
			m_strErrInfo = "Match file name can not be empty!";
			return FALSE;
		}
		//װ��ģ��
		m_Match.Load(strPatternFileName.GetBuffer(strPatternFileName.GetLength()));

		// 		m_Match.SetMaxAngle(20);
		// 		m_Match.SetMinAngle(-20);
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}

	return TRUE;
}

/****************************************
* FunctionName��fnMatchSetParam
*
* Function������ģ��ƥ�����
* param[in] dbAngleTor ���ĽǶ��ݲΧ������dbAngleTor
* param[in] dbScaleTor ���ķ�Χ�ݲΧ������dbScaleTor
* return[BOOL ]
****************************************/
BOOL CImageMatchDll::fnMatchSetParam(double dbAngleTor, double dbScaleTor)
{
	try
	{
		//���ò���
		m_Match.SetMaxAngle(dbAngleTor);
		m_Match.SetMinAngle(-1 * dbAngleTor);
		m_Match.SetMaxScale(1 + dbScaleTor / 100);
		m_Match.SetMinScale(1 - dbScaleTor / 100);
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}

	return TRUE;
}

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
BOOL CImageMatchDll::fnMatchImage(double& dbScore, double& dbCx, double& dbCy, double& dbAngle, double& dbScale)
{
	try
	{
		EROIBW8 Roi;
		//ƥ��ǰ�Ѿ����ģ����أ������޷�ƥ��
		m_Image = m_ImageCpy;
		if (m_Image.IsVoid())
		{
			m_strErrInfo = _T("The image is invalid!");
			return FALSE;
		}
		// 		m_Image.Save("C:\\Program Files\\th.bmp");
		// 		m_MatchTemp.Load("C:\\Program Files\\th.bmp");
		m_Match.Match(&m_Image);
		//�Ե�һ��ƥ��Ľ��Ϊ��
		int num = m_Match.GetNumPositions();
		if (num == 0)
		{
			dbCx = 0;
			dbCy = 0;
			dbAngle = 0;
			dbScore = 0;
			dbScale = 1;
		}
		else
		{
			dbScore = 100 * (double)(m_Match.GetPosition(0).Score);
			dbCx = (double)(m_Match.GetPosition(0).CenterX);
			dbCy = (double)(m_Match.GetPosition(0).CenterY);
			dbAngle = (double)(m_Match.GetPosition(0).Angle);
			dbScale = (double)(m_Match.GetPosition(0).Scale);
			m_bMatch = TRUE;
		}
	}
	catch (EException e)
	{
		double ss;
		ss = dbScore;
		dbCx = 0;
		dbCy = 0;
		dbAngle = 0;
		dbScore = 0;
		dbScale = 1;

		m_strErrInfo = e.What().c_str();
		return FALSE;
	}

	return TRUE;
}

BOOL CImageMatchDll::fnMutilMatchImage(int nMaxPostion, float fScore, int& num)
{
	try
	{
		EROIBW8 Roi;
		//ƥ��ǰ�Ѿ����ģ����أ������޷�ƥ��
		m_Image = m_ImageCpy;
		if (m_Image.IsVoid())
		{
			m_strErrInfo = _T("The image is invalid!");
			return FALSE;
		}

		//		m_Image.Save("C:\\Program Files\\th.bmp");
		m_Match.SetMaxPositions(nMaxPostion);
		m_Match.SetMinScore(fScore / 100);
		m_Match.Match(&m_Image);
		num = m_Match.GetNumPositions();
		if (0 == num)
		{
			return FALSE;
		}
		m_bMatch = TRUE;
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}

	return TRUE;
}

BOOL CImageMatchDll::fnGetMatchResult(int nPostion, double& dbScore, double& dbCx, double& dbCy, double& dbAngle, double& dbScale)
{
	try
	{
		dbScore = 100 * (double)(m_Match.GetPosition(nPostion).Score);
		dbCx = (double)(m_Match.GetPosition(nPostion).CenterX);
		dbCy = (double)(m_Match.GetPosition(nPostion).CenterY);
		dbAngle = (double)(m_Match.GetPosition(nPostion).Angle);
		dbScale = (double)(m_Match.GetPosition(nPostion).Scale);
	}
	catch (EException e)
	{
		dbCx = 0;
		dbCy = 0;
		dbAngle = 0;
		dbScore = 0;
		dbScale = 1;

		m_strErrInfo = e.What().c_str();
		return FALSE;
	}

	return TRUE;
}
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
BOOL CImageMatchDll::fnMatchDrawRes(HDC hDC, float f32ZoomX, float f32ZoomY, UINT u32Index, BOOL bCorner)
{
	try
	{
		if (m_bMatch)
		{
			int num = m_Match.GetNumPositions();
			for (int i = 0; i < num; i++)
			{
				EMatchPosition pos = m_Match.GetPosition(i);
				m_nImageSizeX = m_Image.GetWidth();
				m_nImageSizeY = m_Image.GetHeight();
				// 				int RoiSizeX = m_Match.GetPatternWidth();
				// 				int RoiSizeY = m_Match.GetPatternHeight();
				//
				if (((pos.CenterX + 50) < m_nImageSizeX) && ((pos.CenterX - 50) > 0) && ((pos.CenterY + 50) < m_nImageSizeY) && ((pos.CenterY - 50) > 0))
				{
					m_Match.DrawPosition(hDC, i, bCorner, f32ZoomX, f32ZoomY);
				}
			}
			m_bMatch = FALSE;
		}
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}

	return TRUE;
}

/****************************************
* FunctionName��fnFindSetLearnParam
*
* Function������ѧϰģ������
* param[in] nPatternType ����
* return[BOOL ]
****************************************/
BOOL CImageMatchDll::fnFindSetLearnParam(int nPatternType)
{
	try
	{
		if (0 == nPatternType)
		{
			m_Finder.SetPatternType(EPatternType_ConsistentEdges);
		}

		if (1 == nPatternType)
		{
			m_Finder.SetPatternType(EPatternType_ThinStructure);
		}

		if (2 == nPatternType)
		{
			m_Finder.SetPatternType(EPatternType_ContrastingRegions);
		}
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}
	return TRUE;
}

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
BOOL CImageMatchDll::fnFindSetFindParam(double dbAngleTor, double dbScaleTor, double dbScore, int nExtend, int nContrastMode)
{
	try
	{
		switch (nExtend)
		{
		case 0:
			m_Finder.SetLocalSearchMode(ELocalSearchMode_Basic);
			break;
		case 1:
			m_Finder.SetLocalSearchMode(ELocalSearchMode_ExtendedTranslation);
			break;
		case 2:
			m_Finder.SetLocalSearchMode(ELocalSearchMode_ExtendedAll);
			break;
		case 3:
			m_Finder.SetLocalSearchMode(ELocalSearchMode_ExtendedMore);
			break;
		}

		m_dbAngleTor = dbAngleTor;
		m_dbScaleTor = dbScaleTor / 100;
		m_dbScore = dbScore / 100;
		m_nExtend = nExtend;
		m_nContrastMode = 0;
		m_Finder.SetMaxInstances(1);
		m_Finder.SetScaleTolerance((float)m_dbScaleTor);
		m_Finder.SetAngleTolerance((float)m_dbAngleTor);
		Sleep(50);
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}

	return TRUE;
}

/****************************************
* FunctionName��fnFindLoadPattern
*
* Function������findģ��
* param[in] strPatternFile ģ���ļ�����·��
* return[BOOL ]
****************************************/
BOOL CImageMatchDll::fnFindLoadPattern(CString strPatternFile)
{
	try
	{
		std::string str = strPatternFile;
		m_Finder.Load(str);
		m_Finder.SetAngleTolerance((float)m_dbAngleTor);
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}

	return TRUE;
}

/****************************************
* FunctionName��fnFindSavePattern
*
* Function������findģ��
* param[in] strPatternFile ģ���ļ�����·��
* return[BOOL ]
****************************************/
BOOL CImageMatchDll::fnFindSavePattern(CString strPatternFile)
{
	//ѧϰRoi������
	try
	{
		fnFindSetLearnParam(m_nContrastMode);

		m_Finder.SetAngleTolerance((float)m_dbAngleTor);
		m_Finder.SetScaleTolerance((float)m_dbScaleTor);
		m_Finder.SetMaxInstances(1);
		m_Finder.SetMinScore(m_dbScore);

		m_Finder.Learn(&m_Roi);
		if (!m_Finder.GetLearningDone())
		{
			return FALSE;
		}

		std::string str = strPatternFile;

		//����ģ����
		m_Finder.Save(str);

		//����ͼƬ
		CString strBmpFile;
		strBmpFile = strPatternFile.Left(strPatternFile.GetLength() - 4) + ".bmp";

		//��ͼ�񱣴�Ϊģ���ļ�
		m_Roi.Save(strBmpFile.GetBuffer(strBmpFile.GetLength()), EImageFileType_Bmp);
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}
	return TRUE;
}

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
BOOL CImageMatchDll::fnFindImage(double& dbScore, double& dbCx, double& dbCy, double& dbAngle, double& dbScale)
{
	try
	{
		m_Image = m_ImageCpy;
		if (m_Image.IsVoid())
		{
			m_strErrInfo = _T("The image is invalid!");
			return FALSE;
		}
		foundPattern = m_Finder.Find(&m_Image);

		int numInstances = foundPattern.size();
		//
		if (0 == numInstances)
		{
			m_strErrInfo = _T("failed find!");
			dbCx = 0;
			dbCy = 0;
			dbScore = 0;
			dbScale = 0;
			dbAngle = 0;
			return FALSE;
		}

		dbCx = foundPattern[0].GetCenter().GetX()*1.0;
		dbCy = foundPattern[0].GetCenter().GetY()*1.0;
		dbScore = 100 * foundPattern[0].GetScore()*1.0;
		dbScale = foundPattern[0].GetScale()*1.0;
		dbAngle = foundPattern[0].GetAngle()*1.0;
		//		g_bShowFindRes =TRUE;
		m_bFind = TRUE;
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str(); //ֱ����ʾ���û�������Ϣ��
		m_strErrInfo += _T("   Exception occured when finding the instance!");
		return FALSE;
	}

	return TRUE;
}

BOOL CImageMatchDll::fnMutilFindImage(int nMaxPostion, float fScore, int& num)
{
	try
	{
		Sleep(200);
		EROIBW8 Roi;
		//ƥ��ǰ�Ѿ����ģ����أ������޷�ƥ��
//		m_Image.Load("C:\\Program Files\\th.bmp");
		m_Image = m_ImageCpy;
		if (m_Image.IsVoid())
		{
			m_strErrInfo = _T("The image is invalid!");
			return FALSE;
		}

		m_Finder.SetMaxInstances(nMaxPostion);
		m_Finder.SetMinScore(fScore / 100);
		Roi.Attach(&m_Image);
		Roi.SetPlacement(0, 0, m_Image.GetWidth(), m_Image.GetHeight());
		foundPattern = m_Finder.Find(&Roi);
		m_Image.SaveJpeg("D://1.bmp");
		Roi.SaveJpeg("D:/2.jpg");
		num = foundPattern.size();

		if (0 == num)
		{
			return FALSE;
		}
		else
		{
			//			g_bShowFindRes =TRUE;
			m_bFind = TRUE;
		}
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}

	return TRUE;
}

BOOL CImageMatchDll::fnGetFindResult(int nPostion, double& dbScore, double& dbCx, double& dbCy, double& dbAngle, double& dbScale)
{
	try
	{
		dbCx = foundPattern[nPostion].GetCenter().GetX()*1.0;
		dbCy = foundPattern[nPostion].GetCenter().GetY()*1.0;
		dbScore = 100 * foundPattern[nPostion].GetScore()*1.0;
		dbScale = foundPattern[nPostion].GetScale()*1.0;
		dbAngle = foundPattern[nPostion].GetAngle()*1.0;
	}
	catch (EException e)
	{
		dbCx = 0;
		dbCy = 0;
		dbAngle = 0;
		dbScore = 0;
		dbScale = 1;

		m_strErrInfo = e.What().c_str();
		return FALSE;
	}

	return TRUE;
}

/****************************************
* FunctionName��fnFindDrawRes
*
* Function��findƥ��ʱ����ʾ���
* param[in] hdc ��ˢ
* param[in] f32ZoomX Defaults to 1.f. X���Ŵ�С
* param[in] f32ZoomY Defaults to 1.f. Y���Ŵ�С
* return[BOOL ]
****************************************/
BOOL CImageMatchDll::fnFindDrawRes(HDC hdc, float f32ZoomX, float f32ZoomY)
{
	try
	{
		//m_Finder.DrawModel(hdc,f32ZoomX,f32ZoomY);
//		foundPattern[0].Draw(hdc,f32ZoomX,f32ZoomY);
		if (m_bFind)
		{
			for (int i = 0; i < foundPattern.size(); i++)
			{
				//m_Finder.DrawModel(hdc,f32ZoomX,f32ZoomY);
				EPoint pos = foundPattern[i].GetCenter();
				m_nImageSizeX = m_Image.GetWidth();
				m_nImageSizeY = m_Image.GetHeight();
				// 				int RoiSizeX = foundPattern[i];
				// 				int RoiSizeY = m_Match.GetPatternHeight();
				//
				if (((pos.GetX() + 50) < m_nImageSizeX) && ((pos.GetX() - 50) > 0) && ((pos.GetY() + 50) < m_nImageSizeY) && ((pos.GetY() - 50) > 0))
				{
					foundPattern[i].SetDrawBoundingBox(TRUE);
					ERGBColor color(255, 0, 0);
					foundPattern[i].SetDrawCenter(TRUE);
					foundPattern[i].SetDrawFeaturePoints(TRUE);
					foundPattern[i].Draw(hdc, color, f32ZoomX, f32ZoomY);
				}
			}
			m_bFind = FALSE;
		}
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}
	return TRUE;
}

/**************************************************************************
* FunctionName: fnSetImagePtr
*
* FunctionName:�����������ָ�봫��match
* param[in] pImagePrt
* return[BOOL] TRUE:�ɹ� FALSE:ʧ��
*****************************/
BOOL CImageMatchDll::fnSetImagePtr(int nWidth, int nHeight, void* pImagePrt, BOOL bThreshold, int nThreshold)
{
	try
	{
		//		m_ImageCpy.SetImagePtr(nWidth,nHeight,pImagePrt);
		m_ImagePtr.SetImagePtr(nWidth, nHeight, pImagePrt);
		m_ImagePtr.Save(_T("D:\\WaferScribingSystem\\th.bmp"));
		m_ImageCpy1.Load("D:\\WaferScribingSystem\\th.bmp");

		if (bThreshold)
		{
			if (m_ImageCpy.IsVoid())
			{
				m_ImageCpy.Load(_T("D:\\WaferScribingSystem\\th.bmp"));
			}
			EasyImage::Threshold(&m_ImagePtr, &m_ImageCpy, nThreshold);
		}
		else
		{
			m_ImageCpy.SetImagePtr(nWidth, nHeight, pImagePrt);
		}
		m_ImageCpy.Save(_T("D:\\WaferScribingSystem\\th1.bmp"));
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}

	return TRUE;
}
/**************************************************************************
* FunctionName: fnGetImage
*
*****************************/
EImageBW8 CImageMatchDll::fnGetImage()
{
	Sleep(100);
	m_ImageCpy.Load("D:\\WaferScribingSystem\\learn.bmp");
	return m_ImageCpy;
}

/**************************************************************************
* FunctionName: fnSetImage
*
*****************************/
BOOL CImageMatchDll::fnSetImage(EImageBW8 image)
{
	try
	{
		m_ImageCpy = image;
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}
	return TRUE;
}
/****************************************
* FunctionName��fnGetLastErr
*
* Function����ȡ��ģ����ֵĴ�����Ϣ
* return[CString ]
****************************************/
CString CImageMatchDll::fnGetLastErr()
{
	return m_strErrInfo;
}

BOOL CImageMatchDll::fnThresholding(int threshold)
{
	//	EasyImage::Threshold(&m_ImageCpy,&m_ImageCpy,EThresholdMode_Relative,0,255,threshold);
	EasyImage::Threshold(&m_ImageCpy, &m_ImageCpy, threshold);

	return TRUE;
}

/****************************************
* FunctionName��fnLoadGauge
*
* Function������GAUGE����
* return[BOOL ]
****************************************/
BOOL CImageMatchDll::fnLoadGauge(CString strPath, BOOL bAuto)
{
	try
	{
		if (!bAuto)
		{
			CFileDialog fileopen(TRUE, _T("*.GGE|"), _T(""), OFN_HIDEREADONLY | OFN_FILEMUSTEXIST, _T("GGE(*.GGE)|*.GGE||"), NULL);
			//���ļ�
			if (IDOK == fileopen.DoModal())
			{
				strPath = fileopen.GetPathName();
			}
			else
			{
				return FALSE;
			}
		}
		m_ELineGauge.Load(strPath.GetBuffer(0));
		m_ELineGauge.SetActive(TRUE);
		m_ELineGauge.SetDragable(true);
		m_ELineGauge.SetResizable(true);
		m_ELineGauge.SetRotatable(true);
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}

	return TRUE;
}
/****************************************
* FunctionName��fnSaveGauge
*
* Function������GAUGE����
* return[BOOL ]
****************************************/
BOOL CImageMatchDll::fnSaveGauge()
{
	try
	{
		CString	strTemp;
		CFileDialog fileopen(FALSE, _T("*.GGE|"), _T(""), OFN_HIDEREADONLY | OFN_FILEMUSTEXIST, _T("GGE(*.GGE)|*.GGE||"), NULL);

		//���ļ�
		if (IDOK == fileopen.DoModal())
		{
			strTemp = fileopen.GetPathName();
			m_ELineGauge.Save(strTemp.GetBuffer(0));
		}
		else
		{
			return FALSE;
		}
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}

	return TRUE;
}
/****************************************
* FunctionName��fnSaveGauge
*
* Function������GAUGE����
* return[BOOL ]
****************************************/
BOOL CImageMatchDll::fnCreateGauge()
{
	try
	{
		ELineGauge	LineGauge;
		LineGauge.SetCenterXY(200, 200);
		LineGauge.SetTolerance(20);
		LineGauge.SetLength(80);
		m_EWorldShape.SetSensorSize(m_Image.GetWidth(), m_Image.GetHeight());
		m_EWorldShape.Process(&m_Image, TRUE);
		m_ELineGauge.Attach(&m_EWorldShape);
		m_ELineGauge.SetActive(TRUE);
		m_ELineGauge.SetDragable(true);
		m_ELineGauge.SetResizable(true);
		m_ELineGauge.SetRotatable(true);
		m_ELineGauge = LineGauge;
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}

	return TRUE;
}

//����gauge����
BOOL CImageMatchDll::fnSetRectGaugeParam(int eTransitionType, int eTransitionChoice)
{
	try
	{
		m_EWorldShape.SetSensorSize(m_Image.GetWidth(), m_Image.GetHeight());
		m_EWorldShape.Process(&m_Image, TRUE);
		m_ERectangleGauge.Attach(&m_EWorldShape);
		m_ERectangleGauge.SetDragable(true);
		m_ERectangleGauge.SetResizable(true);
		m_ERectangleGauge.SetRotatable(true);
		m_ERectangleGauge.SetActive(TRUE);
		//		m_ERectangleGauge.SetThreshold(120);
		m_ERectangleGauge.SetNumFilteringPasses(5);
		if (0 == eTransitionType)
		{
			m_ERectangleGauge.SetTransitionType(ETransitionType_Bw);
		}
		else if (1 == eTransitionType)
		{
			m_ERectangleGauge.SetTransitionType(ETransitionType_Wb);
		}
		else if (2 == eTransitionType)
		{
			m_ERectangleGauge.SetTransitionType(ETransitionType_BwOrWb);
		}
		else if (3 == eTransitionType)
		{
			m_ERectangleGauge.SetTransitionType(ETransitionType_Bwb);
		}
		else if (4 == eTransitionType)
		{
			m_ERectangleGauge.SetTransitionType(ETransitionType_Wbw);
		}

		if (0 == eTransitionChoice)
		{
			m_ERectangleGauge.SetTransitionChoice(ETransitionChoice_NthFromBegin);
		}
		else if (1 == eTransitionChoice)
		{
			m_ERectangleGauge.SetTransitionChoice(ETransitionChoice_NthFromEnd);
		}
		else if (2 == eTransitionChoice)
		{
			m_ERectangleGauge.SetTransitionChoice(ETransitionChoice_LargestAmplitude);
		}
		else if (3 == eTransitionChoice)
		{
			m_ERectangleGauge.SetTransitionChoice(ETransitionChoice_LargestArea);
		}
		else if (4 == eTransitionChoice)
		{
			m_ERectangleGauge.SetTransitionChoice(ETransitionChoice_Closest);
		}
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}
	return TRUE;
}
//
BOOL CImageMatchDll::fnSetLineGaugeParam(IMAGE_GAUGE_PARAM nGaugeParam)
{
	try
	{
		m_ELineGauge.SetNumFilteringPasses(nGaugeParam.nGaugeFilterPass);
		m_ELineGauge.SetThreshold(nGaugeParam.nGaugeThreshold);
		m_ELineGauge.SetSmoothing(nGaugeParam.nGaugeSmoothing);
		m_ELineGauge.SetSamplingStep(nGaugeParam.nGaugeSamplingStep);
		m_ELineGauge.SetThickness(nGaugeParam.nGaugeThickness);
		m_ELineGauge.SetMinAmplitude(nGaugeParam.nGaugeAmplitude);

		if (0 == nGaugeParam.nGaugeType)
		{
			m_ELineGauge.SetTransitionType(ETransitionType_Bw);
		}
		else if (1 == nGaugeParam.nGaugeType)
		{
			m_ELineGauge.SetTransitionType(ETransitionType_Wb);
		}
		else if (2 == nGaugeParam.nGaugeType)
		{
			m_ELineGauge.SetTransitionType(ETransitionType_BwOrWb);
		}
		else if (3 == nGaugeParam.nGaugeType)
		{
			m_ELineGauge.SetTransitionType(ETransitionType_Bwb);
		}
		else if (4 == nGaugeParam.nGaugeType)
		{
			m_ELineGauge.SetTransitionType(ETransitionType_Wbw);
		}

		if (0 == nGaugeParam.nGaugeChoice)
		{
			m_ELineGauge.SetTransitionChoice(ETransitionChoice_NthFromBegin);
			m_ELineGauge.SetTransitionIndex(nGaugeParam.nIndex);
		}
		else if (1 == nGaugeParam.nGaugeChoice)
		{
			m_ELineGauge.SetTransitionChoice(ETransitionChoice_NthFromEnd);
			m_ELineGauge.SetTransitionIndex(nGaugeParam.nIndex);
		}
		else if (2 == nGaugeParam.nGaugeChoice)
		{
			m_ELineGauge.SetTransitionChoice(ETransitionChoice_LargestAmplitude);
		}
		else if (3 == nGaugeParam.nGaugeChoice)
		{
			m_ELineGauge.SetTransitionChoice(ETransitionChoice_LargestArea);
		}
		else if (4 == nGaugeParam.nGaugeChoice)
		{
			m_ELineGauge.SetTransitionChoice(ETransitionChoice_Closest);
		}
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}
	return TRUE;
}
BOOL CImageMatchDll::fnGetLineGaugeParam(IMAGE_GAUGE_PARAM& nGaugeParam)
{
	try
	{
		nGaugeParam.nGaugeFilterPass = m_ELineGauge.GetNumFilteringPasses();
		nGaugeParam.nGaugeThreshold = m_ELineGauge.GetThreshold();
		nGaugeParam.nGaugeSmoothing = m_ELineGauge.GetSmoothing();
		nGaugeParam.nGaugeSamplingStep = m_ELineGauge.GetSamplingStep();
		nGaugeParam.nGaugeThickness = m_ELineGauge.GetThickness();
		nGaugeParam.nGaugeAmplitude = m_ELineGauge.GetMinAmplitude();

		if (ETransitionType_Bw == m_ELineGauge.GetTransitionType())
		{
			nGaugeParam.nGaugeType = 0;
		}
		else if (ETransitionType_Wb == m_ELineGauge.GetTransitionType())
		{
			nGaugeParam.nGaugeType = 1;
		}
		else if (ETransitionType_BwOrWb == m_ELineGauge.GetTransitionType())
		{
			nGaugeParam.nGaugeType = 2;
		}
		else if (ETransitionType_Bwb == m_ELineGauge.GetTransitionType())
		{
			nGaugeParam.nGaugeType = 3;
		}
		else if (ETransitionType_Wbw == m_ELineGauge.GetTransitionType())
		{
			nGaugeParam.nGaugeType = 4;
		}

		if (ETransitionChoice_NthFromBegin == m_ELineGauge.GetTransitionChoice())
		{
			nGaugeParam.nGaugeChoice = 0;
			nGaugeParam.nIndex = m_ELineGauge.GetTransitionIndex();
		}
		else if (ETransitionChoice_NthFromEnd == m_ELineGauge.GetTransitionChoice())
		{
			nGaugeParam.nGaugeChoice = 1;
			nGaugeParam.nIndex = m_ELineGauge.GetTransitionIndex();
		}
		else if (ETransitionChoice_LargestAmplitude == m_ELineGauge.GetTransitionChoice())
		{
			nGaugeParam.nGaugeChoice = 2;
		}
		else if (ETransitionChoice_LargestArea == m_ELineGauge.GetTransitionChoice())
		{
			nGaugeParam.nGaugeChoice = 3;
		}
		else if (ETransitionChoice_Closest == m_ELineGauge.GetTransitionChoice())
		{
			nGaugeParam.nGaugeChoice = 4;
		}
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}
	return TRUE;
}
BOOL CImageMatchDll::fnDrawLineGauge(HDC hdc, float fScaleX, float fScaleY, BOOL bShowResult)
{
	try
	{
		if (m_bGauge)
		{
			// 			CDC dc;
			// 			dc.Attach(hdc);
			if (dc == NULL)
			{
				dc = CDC::FromHandle(hdc);
			}

			float fCenterX, fCenterY;
			float fSizeX, fSizeY;
			float fAngle;
			m_ELineGaugeS = m_ELineGauge;
			fCenterX = m_ELineGauge.GetCenterX();
			fCenterY = m_ELineGauge.GetCenterY();
			fSizeX = m_ELineGauge.GetLength();
			fSizeY = m_ELineGauge.GetTolerance();
			fAngle = m_ELineGauge.GetAngle();
			m_ELineGaugeS.SetCenterXY(fCenterX*fScaleX, fCenterY*fScaleY);
			m_ELineGaugeS.SetLength(fSizeX*fScaleX);
			m_ELineGaugeS.SetTolerance(fSizeY*fScaleY);
			m_ELineGaugeS.SetAngle(fAngle);
			m_ELineGaugeS.Draw(hdc);
			m_ELineGaugeS.SetDragable(TRUE);
			m_ELineGaugeS.SetRotatable(TRUE);
			dc->MoveTo(m_pointStart.x*fScaleX, m_pointStart.y*fScaleY);
			dc->LineTo(m_pointEnd.x*fScaleX, m_pointEnd.y*fScaleY);
			if (bShowResult)
			{
				for (int n = 0; n < m_nSample; n++)
				{
					float fcx, fcy;
					fnLineGauge(fcx, fcy, n);
					dc->MoveTo((fcx - 2)*fScaleX, fcy*fScaleY);
					dc->LineTo((fcx + 2)*fScaleX, fcy*fScaleY);
					dc->MoveTo(fcx*fScaleX, (fcy - 2)*fScaleY);
					dc->LineTo(fcx*fScaleX, (fcy + 2)*fScaleY);
				}
			}

			//			dc.Detach();
			Sleep(100);
			m_bGauge = FALSE;
		}
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}
	return TRUE;
}

EDragHandle CImageMatchDll::fnPointInRect(CPoint point)
{
	try
	{
		float fLength, fWidth, fAngle;
		DPOINT CenterPoint;
		DPOINT point1, point2, point3, point4;
		DPOINT points1, points2, points3, points4;
		CenterPoint.x = m_ELineGaugeS.GetCenterX();
		CenterPoint.y = m_ELineGaugeS.GetCenterY();
		fLength = m_ELineGaugeS.GetLength();
		fWidth = m_ELineGaugeS.GetTolerance();
		fAngle = m_ELineGaugeS.GetAngle();
		point1.x = CenterPoint.x - fLength / 2;
		point1.y = CenterPoint.y - fWidth;
		point2.x = CenterPoint.x + fLength / 2;
		point2.y = CenterPoint.y - fWidth;
		point3.x = CenterPoint.x + fLength / 2;
		point3.y = CenterPoint.y + fWidth;
		point4.x = CenterPoint.x - fLength / 2;
		point4.y = CenterPoint.y + fWidth;

		// 		points1	= CaclCoordinate(point1,CenterPoint,fAngle);
		// 		points2	= CaclCoordinate(point2,CenterPoint,fAngle);
		// 		points3	= CaclCoordinate(point3,CenterPoint,fAngle);
		// 		points4	= CaclCoordinate(point4,CenterPoint,fAngle);
		g_SplitData.fnCalcPtByPtAngle(point1, CenterPoint, fAngle, points1);
		g_SplitData.fnCalcPtByPtAngle(point2, CenterPoint, fAngle, points2);
		g_SplitData.fnCalcPtByPtAngle(point3, CenterPoint, fAngle, points3);
		g_SplitData.fnCalcPtByPtAngle(point4, CenterPoint, fAngle, points4);

		DPOINT fLenthCenter1, fLenthCenter2, fWidthCenter1, fWidthCenter2;
		fLenthCenter1.x = (points1.x + points2.x) / 2;
		fLenthCenter1.y = (points1.y + points2.y) / 2;
		fLenthCenter2.x = (points3.x + points4.x) / 2;
		fLenthCenter2.y = (points3.y + points4.y) / 2;
		fWidthCenter1.x = (points1.x + points4.x) / 2;
		fWidthCenter1.y = (points1.y + points4.y) / 2;
		fWidthCenter2.x = (points2.x + points3.x) / 2;
		fWidthCenter2.y = (points2.y + points3.y) / 2;
		if ((abs(CenterPoint.x - point.x) < 5) && (abs(CenterPoint.y - point.y) < 5))
		{
			return EDragHandle_Mid;
		}
		else if ((abs(fLenthCenter1.x - point.x) < 5) && (abs(fLenthCenter1.y - point.y) < 5))
		{
			return EDragHandle_Edge_x;
		}
		else if ((abs(fLenthCenter2.x - point.x) < 5) && (abs(fLenthCenter2.y - point.y) < 5))
		{
			return EDragHandle_Edge_XX;
		}
		else if ((abs(fWidthCenter1.x - point.x) < 5) && (abs(fWidthCenter1.y - point.y) < 5))
		{
			return EDragHandle_Edge_YY;
		}
		else if ((abs(fWidthCenter2.x - point.x) < 5) && (abs(fWidthCenter2.y - point.y) < 5))
		{
			return EDragHandle_Edge_y;
		}
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return EDragHandle_NoHandle;
	}

	return EDragHandle_NoHandle;
}

BOOL CImageMatchDll::fnGetLineGaugePos(IMAGE_GAUGE_POS& GaugePos)
{
	try
	{
		GaugePos.fGaugeCenterX = m_ELineGauge.GetCenterX();
		GaugePos.fGaugeCenterY = m_ELineGauge.GetCenterY();
		GaugePos.fGaugeLength = m_ELineGauge.GetLength();
		GaugePos.fGaugeTolerance = m_ELineGauge.GetTolerance();
		GaugePos.fGaugeAngle = m_ELineGauge.GetAngle();

		float fLength, fWidth, fAngle;
		DPOINT CenterPoint;
		DPOINT point1, point2, point3, point4;
		DPOINT points1, points2, points3, points4;
		fLength = GaugePos.fGaugeLength;
		fWidth = GaugePos.fGaugeTolerance;
		fAngle = GaugePos.fGaugeAngle;
		CenterPoint.x = GaugePos.fGaugeCenterX;
		CenterPoint.y = GaugePos.fGaugeCenterY;
		point1.x = CenterPoint.x - fLength / 2;
		point1.y = CenterPoint.y - fWidth;
		point2.x = CenterPoint.x + fLength / 2;
		point2.y = CenterPoint.y - fWidth;
		point3.x = CenterPoint.x + fLength / 2;
		point3.y = CenterPoint.y + fWidth;
		point4.x = CenterPoint.x - fLength / 2;
		point4.y = CenterPoint.y + fWidth;

		g_SplitData.fnCalcPtByPtAngle(point1, CenterPoint, fAngle, points1);
		g_SplitData.fnCalcPtByPtAngle(point2, CenterPoint, fAngle, points2);
		g_SplitData.fnCalcPtByPtAngle(point3, CenterPoint, fAngle, points3);
		g_SplitData.fnCalcPtByPtAngle(point4, CenterPoint, fAngle, points4);
		GaugePos.pointLT = points1;
		GaugePos.pointRT = points2;
		GaugePos.pointRB = points3;
		GaugePos.pointLB = points4;
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}
	return TRUE;
}
//����gaugeλ��
BOOL CImageMatchDll::fnSetRectGaugePos(DPOINT pointCenter, DPOINT pointSize, float fTolerance)
{
	try
	{
		m_ERectangleGauge.SetCenterXY(pointCenter.x, pointCenter.y);
		m_ERectangleGauge.SetSize(pointSize.x, pointSize.y);
		m_ERectangleGauge.SetTolerance(fTolerance);
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}
	return TRUE;
}
//
BOOL CImageMatchDll::fnSetLineGaugePos(IMAGE_GAUGE_POS GaugePos)
{
	try
	{
		m_ELineGauge.SetAngle(GaugePos.fGaugeAngle);
		m_ELineGauge.SetCenterXY(GaugePos.fGaugeCenterX, GaugePos.fGaugeCenterY);
		m_ELineGauge.SetLength(GaugePos.fGaugeLength);
		m_ELineGauge.SetTolerance(GaugePos.fGaugeTolerance);
		float fLength, fWidth, fAngle;
		DPOINT CenterPoint;
		DPOINT point1, point2, point3, point4;
		DPOINT points1, points2, points3, points4;
		fLength = GaugePos.fGaugeLength;
		fWidth = GaugePos.fGaugeTolerance;
		fAngle = GaugePos.fGaugeAngle;
		CenterPoint.x = GaugePos.fGaugeCenterX;
		CenterPoint.y = GaugePos.fGaugeCenterY;
		point1.x = CenterPoint.x - fLength / 2;
		point1.y = CenterPoint.y - fWidth;
		point2.x = CenterPoint.x + fLength / 2;
		point2.y = CenterPoint.y - fWidth;
		point3.x = CenterPoint.x + fLength / 2;
		point3.y = CenterPoint.y + fWidth;
		point4.x = CenterPoint.x - fLength / 2;
		point4.y = CenterPoint.y + fWidth;

		// 		points1	= CaclCoordinate(point1,CenterPoint,fAngle);
		// 		points2	= CaclCoordinate(point2,CenterPoint,fAngle);
		// 		points3	= CaclCoordinate(point3,CenterPoint,fAngle);
		// 		points4	= CaclCoordinate(point4,CenterPoint,fAngle);

		g_SplitData.fnCalcPtByPtAngle(point1, CenterPoint, fAngle, points1);
		g_SplitData.fnCalcPtByPtAngle(point2, CenterPoint, fAngle, points2);
		g_SplitData.fnCalcPtByPtAngle(point3, CenterPoint, fAngle, points3);
		g_SplitData.fnCalcPtByPtAngle(point4, CenterPoint, fAngle, points4);
		GaugePos.pointLT = points1;
		GaugePos.pointRT = points2;
		GaugePos.pointRB = points3;
		GaugePos.pointLB = points4;
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}
	return TRUE;
}
int CImageMatchDll::fnGetNumValidSamples()
{
	int num;
	try
	{
		num = m_ELineGauge.GetNumValidSamples();
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		num = -1;
	}
	return num;
}

BOOL CImageMatchDll::fnSetGaugeSampleStep(float fStep)
{
	try
	{
		m_ELineGauge.SetSamplingStep(fStep);
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}
	return TRUE;
}

BOOL CImageMatchDll::fnGetGaugeSampleStep(int& nStep)
{
	try
	{
		nStep = m_ELineGauge.GetNumSamples();
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}
	return TRUE;
}
BOOL CImageMatchDll::fnGetLine(DPOINT& startPoint, DPOINT& endPoint)
{
	startPoint = m_pointStart;
	endPoint = m_pointEnd;
	return TRUE;
}
//gauge����
BOOL CImageMatchDll::fnLineGauge(IMAGE_GAUGE_RESULT& GaugeResult, BOOL bThreshold, int nThreshold)
{
	try
	{
		m_Image = m_ImageCpy;
		// 		if(bThreshold)
		// 		{
		// 			EasyImage::Threshold(&m_Image,&m_Image,nThreshold);
		// 		}
		if (m_Image.IsVoid())
		{
			m_strErrInfo = _T("The image is invalid!");
			return FALSE;
		}
		// 		Sleep(100);
		// 		m_Image.Save("D:\\WaferScribingSystem\\th.bmp");
		m_EWorldShape.SetSensorSize(m_Image.GetWidth(), m_Image.GetHeight());
		m_EWorldShape.Process(&m_Image, TRUE);
		m_ELineGauge.Attach(&m_EWorldShape);

		m_ELineGauge.Measure(&m_Image);
		m_MeasuredLine = m_ELineGauge.GetMeasuredLine();
		GaugeResult.fResultCenterX = m_MeasuredLine.GetCenterX();
		GaugeResult.fResultCenterY = m_MeasuredLine.GetCenterY();
		GaugeResult.fResultAngle = m_MeasuredLine.GetAngle();
		GaugeResult.pointStart.x = m_MeasuredLine.GetOrg().GetX();
		GaugeResult.pointStart.y = m_MeasuredLine.GetOrg().GetY();
		GaugeResult.pointEnd.x = m_MeasuredLine.GetEnd().GetX();
		GaugeResult.pointEnd.y = m_MeasuredLine.GetEnd().GetY();
		GaugeResult.nResultSamples = m_ELineGauge.GetNumSamples();
		GaugeResult.nResultValid = m_ELineGauge.GetNumValidSamples();

		m_nSample = GaugeResult.nResultSamples;
		if (GaugeResult.nResultValid < 2)
		{
			m_bGauge = TRUE;
			IMAGE_GAUGE_POS imagepos;
			fnGetLineGaugePos(imagepos);
			GaugeResult.pointStart.x = (imagepos.pointLT.x + imagepos.pointLB.x) / 2;;
			GaugeResult.pointStart.y = (imagepos.pointLT.y + imagepos.pointLB.y) / 2;
			GaugeResult.pointEnd.x = (imagepos.pointRT.x + imagepos.pointRB.x) / 2;
			GaugeResult.pointEnd.y = (imagepos.pointRT.y + imagepos.pointRB.y) / 2;
			return FALSE;
		}
		else
		{
			// 			EPoint SamplePoint;
			// 			m_ELineGauge.GetSample(SamplePoint,0);
			// 			GaugeResult.pointStart.x = SamplePoint.GetX();
			// 			GaugeResult.pointStart.y = SamplePoint.GetY();
			// 			m_ELineGauge.GetSample(SamplePoint,GaugeResult.nResultValid-1);
			// 			GaugeResult.pointEnd.x	 = SamplePoint.GetX();
			// 			GaugeResult.pointEnd.y   = SamplePoint.GetY();

			//			g_bShowGauge = TRUE;
		}
		m_pointStart.x = GaugeResult.pointStart.x;
		m_pointStart.y = GaugeResult.pointStart.y;
		m_pointEnd.x = GaugeResult.pointEnd.x;
		m_pointEnd.y = GaugeResult.pointEnd.y;

		m_bGauge = TRUE;
		if (GaugeResult.nResultValid < (GaugeResult.nResultSamples / 5))
		{
			m_strErrInfo = _T("��Ч��������");
			return FALSE;
		}
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}
	return TRUE;
}
BOOL CImageMatchDll::fnLineGauge(float& SampleX, float& SampleY, int num)
{
	try
	{
		EPoint SamplePoint;
		/*		m_ELineGauge.Measure(&m_Image);*/
		m_ELineGauge.GetSample(SamplePoint, num);
		//		SamplePoint = m_ELineGauge.GetMeasuredPoint(num);
		SampleX = SamplePoint.GetX();
		SampleY = SamplePoint.GetY();
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}
	return TRUE;
}
//
BOOL CImageMatchDll::fnRectAngleGauge(DPOINT& measureCenter, DPOINT& measureSize, float& measureAngle)
{
	try
	{
		m_Image = m_ImageCpy;
		if (m_Image.IsVoid())
		{
			m_strErrInfo = _T("The image is invalid!");
			return FALSE;
		}

		// 		m_Image.Save("C:\\Program Files\\th.bmp");
		// 		m_ERectangleGauge.Measure(&m_Image);
		m_MeasureRect = m_ERectangleGauge.GetMeasuredRectangle();
		measureSize.x = m_MeasureRect.GetSizeX();
		measureSize.y = m_MeasureRect.GetSizeY();
		measureAngle = m_MeasureRect.GetAngle();
		measureCenter.x = m_MeasureRect.GetCenterX();
		measureCenter.y = m_MeasureRect.GetCenterY();
	}
	catch (EException e)
	{
		m_strErrInfo = e.What().c_str();
		return FALSE;
	}
	return TRUE;
}