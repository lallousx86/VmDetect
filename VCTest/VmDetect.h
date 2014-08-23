// VmDetect.h : main header file for the VMDETECT application
//

#if !defined(AFX_VMDETECT_H__A4944A2F_656B_4A7F_B230_5CF3F27B86FE__INCLUDED_)
#define AFX_VMDETECT_H__A4944A2F_656B_4A7F_B230_5CF3F27B86FE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CVmDetectApp:
// See VmDetect.cpp for the implementation of this class
//

class CVmDetectApp : public CWinApp
{
public:
	CVmDetectApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVmDetectApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CVmDetectApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VMDETECT_H__A4944A2F_656B_4A7F_B230_5CF3F27B86FE__INCLUDED_)
