
// mfc2019.h : main header file for the mfc2019 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// Cmfc2019App:
// See mfc2019.cpp for the implementation of this class
//

class Cmfc2019App : public CWinApp
{
public:
	Cmfc2019App() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cmfc2019App theApp;
