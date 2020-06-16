
// MFCOpenevisionDlg.h: 头文件
//

#pragma once


// CMFCOpenevisionDlg 对话框
class CMFCOpenevisionDlg : public CDialogEx
{
// 构造
public:
	CMFCOpenevisionDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCOPENEVISION_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	EImageBW8			m_Image;
	void fnCreateFolder(CString strPath, CString strName, int nDay = 0)
	{
		::CreateDirectory(strPath.GetBuffer(strPath.GetLength()), NULL);

		CFileFind finder;
		//没有找到该文件夹，则直接返回
		if (!finder.FindFile(strPath))
		{
			return;
		}

		CString strFolder;
		strFolder = strPath + _T("\\*.*");
		BOOL bFind = finder.FindFile(strFolder);

		int num = 0;

		//遍历所有文件夹获取文件夹个数
		while (bFind)
		{
			bFind = finder.FindNextFile();
			CString str = finder.GetFileName();
			if (!finder.IsDots())
			{
				if (finder.IsDirectory())
				{
					num++;
				}
			}
		}

		if (num >= nDay)
		{
			bFind = finder.FindFile(strFolder);
			//如果该文件夹里面没有文件
			if (!bFind)
			{
				return;
			}
			else
			{
				//循环获取该文件夹下所有文件大小
				while (bFind)
				{
					bFind = finder.FindNextFile();
					CString str = finder.GetFileName();
					if (!finder.IsDots())
					{
						CString strFullPath = strPath + _T("\\") + finder.GetFileName();
						//文件夹，则递归获取其大小
						if (finder.IsDirectory())
						{
							fnDeleteFolder(strFullPath);
						}
						else
						{
							DeleteFile(strFullPath);
						}

						break;
					}
				}
			}
		}

		finder.Close();

		CString strPathName = strPath + _T("\\") + strName;

		::CreateDirectory(strPathName.GetBuffer(strPathName.GetLength()), NULL);
	}
	void fnDeleteFolder(CString strPath, BOOL bSelfDel = TRUE)
	{
		CFileFind finder;
		//没有找到该文件夹，则直接返回
		if (!finder.FindFile(strPath))
		{
			return;
		}

		CString strFolder;
		strFolder = strPath + _T("\\*.*");
		BOOL bFind = finder.FindFile(strFolder);

		//如果该文件夹里面没有文件
		if (!bFind)
		{
			if (bSelfDel)
			{
				//删除文件夹之前必须先close
				finder.Close();
				RemoveDirectory(strPath);
			}
			else
			{
				return;
			}
		}

		//循环获取该文件夹下所有文件大小
		while (bFind)
		{
			bFind = finder.FindNextFile();
			if (!finder.IsDots())
			{
				CString strFullPath = strPath + _T("\\") + finder.GetFileName();
				//文件夹，则递归获取其大小
				if (finder.IsDirectory())
				{
					fnDeleteFolder(strFullPath);
				}
				else
				{
					DeleteFile(strFullPath);
				}
			}
		}

		finder.Close();

		if (bSelfDel)
		{
			//删除文件夹本身
			RemoveDirectory(strPath);
		}

		return;
	}
	struct Point
	{
		double x;
		double y;
		Point(double px1, double px2) { x = px1; y = px2; }
	};
	const double pi = 3.1415926535898;
	const double m_dEntryCutLength = 5.0, rs = 101.30 / 2, ds = 31.50 / 2;
	//const double m_dEntryCutLength = 5.0, rs = 50.65, ds = 2.36659;
	double m_fLeftPoint_x, m_fLeftPoint_y;
	double m_fRightPoint_x, m_fRightPoint_y;
	double m_fCalCircleCenter_x, m_fCalCircleCenter_y;
	double m_fPoint1_x, m_fPoint1_y;
	double m_fPoint2_x, m_fPoint2_y;
	double m_fPoint3_x, m_fPoint3_y;
	double m_fPoint4_x, m_fPoint4_y;
	double m_fPoint5_x, m_fPoint5_y;
	void CalCircle(double x1, double x2, double x3, double x4, double x5, double y1, double y2, double y3, double y4, double y5)
	{
		double k1, k2, k3, b1, b2, b3, mx1, mx2, mx3, my1, my2, my3, km1, bm1, km2, bm2, km3, bm3;
		double xc, yc, xp1, xp2, yp1, yp2, xpm, ypm, R, alpha, beta, yin_l, yin_a, x1_yin, x2_yin, y1_yin, y2_yin;
		short i;
		double dbOffset;
		k1 = (y2 - y1) / (x2 - x1);
		k2 = (y3 - y2) / (x3 - x2);
		if (k2 == 0)
			k2 = 0.000000001;  // 防止除以零
		k3 = (y1 - y3) / (x1 - x3);
		b1 = (x2*y1 - x1 * y2) / (x2 - x1);
		b2 = (x3*y2 - x2 * y3) / (x3 - x2);
		b3 = (x1*y3 - x3 * y1) / (x1 - x3);
		mx1 = (x1 + x2) / 2;
		my1 = (y1 + y2) / 2;
		mx2 = (x2 + x3) / 2;
		my2 = (y2 + y3) / 2;
		mx3 = (x3 + x1) / 2;
		my3 = (y3 + y1) / 2;
		km1 = -1 / k1;
		km2 = -1 / k2;
		km3 = -1 / k3;
		bm1 = 1 / k1 * mx1 + my1;
		bm2 = 1 / k2 * mx2 + my2;
		bm3 = 1 / k3 * mx3 + my3;
		xc = -(bm2 - bm1) / (km2 - km1);
		yc = km1 * xc + bm1;
		yin_l = m_dEntryCutLength;
		yin_a = 45 * pi / 180;

		double k6 = (y5 - y4) / (x5 - x4);
		alpha = acos(ds / rs);
		beta = atan(k6);
		double t1 = sqrt(rs*rs - ds * ds), t2 = cos(beta);
		double b6 = t1 / t2;
		//double b6 = sqrt(rs*rs - ds * ds) / cos(beta);

		double a = k6 * k6 + 1;
		double b = 2 * k6*b6;
		double c = b6 * b6 - rs * rs;
		m_fLeftPoint_x = (-b - sqrt(b*b - 4 * a*c)) / 2 / a;
		m_fLeftPoint_y = k6 * m_fLeftPoint_x + b6;

		m_fRightPoint_x = (-b + sqrt(b*b - 4 * a*c)) / 2 / a;
		m_fRightPoint_y = k6 * m_fRightPoint_x + b6;

		m_fPoint1_x = m_fLeftPoint_x - yin_l * cos(beta);
		m_fPoint1_y = m_fLeftPoint_y - yin_l * sin(beta);

		m_fPoint2_x = m_fRightPoint_x + yin_l * cos(beta);
		m_fPoint2_y = m_fRightPoint_y + yin_l * sin(beta);

		m_fPoint5_x = -rs * sin(beta);
		m_fPoint5_y = rs * cos(beta);

		m_fCalCircleCenter_x = -xc;
		m_fCalCircleCenter_y = -yc;
	}
	bool flag_closewhile;
	int n_NumOfWhile;
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
};
