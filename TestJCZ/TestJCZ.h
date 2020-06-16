
// TestJCZ.h: PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// 主符号


// CTestJCZApp:
// 有关此类的实现，请参阅 TestJCZ.cpp
//

class CTestJCZApp : public CWinApp
{
public:
	CTestJCZApp();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern CTestJCZApp theApp;
