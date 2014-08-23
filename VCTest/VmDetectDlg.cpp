// VmDetectDlg.cpp : implementation file
//

#include "stdafx.h"
#include "VmDetect.h"
#include "VmDetectDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CVmDetectDlg dialog

CVmDetectDlg::CVmDetectDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CVmDetectDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CVmDetectDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CVmDetectDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CVmDetectDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CVmDetectDlg, CDialog)
	//{{AFX_MSG_MAP(CVmDetectDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnBtnInsideVPC)
	ON_BN_CLICKED(IDC_BUTTON2, OnBtnInsideVmWare)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVmDetectDlg message handlers

BOOL CVmDetectDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	SetWindowText("VmDetect v1.0 * by <lallousx86@yahoo.com>");
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CVmDetectDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CVmDetectDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CVmDetectDlg::OnBtnInsideVPC() 
{
	 if (IsInsideVPC())
     MessageBox("Running inside Virtual PC!", "Info", MB_ICONERROR | MB_OK);
   else
     MessageBox("Not running inside Virtual PC!", "Info", MB_ICONINFORMATION | MB_OK);
}

void CVmDetectDlg::OnBtnInsideVmWare() 
{
	 if (IsInsideVMWare())
     MessageBox("Running inside VMWare!", "Info", MB_ICONERROR | MB_OK);
   else
     MessageBox("Not running inside VMWare!", "Info", MB_ICONINFORMATION | MB_OK);
}
