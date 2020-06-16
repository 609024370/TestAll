
// MFCOpenevisionDlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "MFCOpenevision.h"
#include "MFCOpenevisionDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFCOpenevisionDlg 对话框



CMFCOpenevisionDlg::CMFCOpenevisionDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCOPENEVISION_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCOpenevisionDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFCOpenevisionDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCOpenevisionDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCOpenevisionDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFCOpenevisionDlg::OnBnClickedButton3)
END_MESSAGE_MAP()


// CMFCOpenevisionDlg 消息处理程序

BOOL CMFCOpenevisionDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码
	m_Image.Load("D:/1.bmp");

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMFCOpenevisionDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMFCOpenevisionDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMFCOpenevisionDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCOpenevisionDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码


	Point p1(-35.20342, -60.43685), p2(6.66425, 69.62385), p3(68.36082, 14.7882), p4(39.65593, 50.87342), p5(53.02179, 37.79361);
	CalCircle(p1.x, p2.x, p3.x, p4.x, p5.x, p1.y, p2.y, p3.y, p4.y, p5.y);



	CTime g_tProcessTime = CTime::GetCurrentTime();							//开始切割时间
	CString strDate = g_tProcessTime.Format(_T("%Y%m%d"));
	CString strTime = g_tProcessTime.Format(_T("%H-%M-%S"));
	CString strPath = _T("D:\\WaferScribingSystem\\Data");									//数据路径
	CString strPathName = strPath + _T("\\") + strDate + _T("\\") + strTime + _T(".txt");	//数据保存文件名
	CString strmsg;
	//以日期创建文件夹保存数据
	fnCreateFolder(strPath, strDate, 7);
	FILE* pFile = fopen(strPathName, "a");
	strmsg.Format(_T("center:(%f,%f),CCDToLaser:(%f,%f),p1:(%f,%f),p2:(%f,%f),p4:(%f,%f),p5:(%f,%f)"), m_fCalCircleCenter_x, m_fCalCircleCenter_y
		, m_fCalCircleCenter_x, m_fCalCircleCenter_x, m_fPoint1_x, m_fPoint1_y, m_fPoint2_x, m_fPoint2_y, m_fPoint4_x, m_fPoint4_y, m_fPoint5_x, m_fPoint5_y);
	fwrite(strmsg, sizeof(char), strlen(strmsg), pFile);
	fclose(pFile);
}


void CMFCOpenevisionDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	flag_closewhile = true;
	MSG msg;
	n_NumOfWhile = 0;
	while (flag_closewhile)
	{
		PeekMessage(&msg, NULL, NULL, NULL, PM_REMOVE);
		TranslateMessage(&msg);
		DispatchMessage(&msg);
		CAboutDlg *pDlg = new CAboutDlg;
		n_NumOfWhile++;
		Sleep(100);
	}
}


void CMFCOpenevisionDlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	flag_closewhile = false;
	CString temps;
	temps.Format(_T("%d"), n_NumOfWhile);
	MessageBox(temps);
}
