// VmDetectDlg.h : header file
//

#if !defined(AFX_VMDETECTDLG_H__3195E972_A244_4042_82F2_AB85E06E9B8A__INCLUDED_)
#define AFX_VMDETECTDLG_H__3195E972_A244_4042_82F2_AB85E06E9B8A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CVmDetectDlg dialog

class CVmDetectDlg : public CDialog
{
// Construction
public:
	CVmDetectDlg(CWnd* pParent = NULL);	// standard constructor
// Dialog Data
	//{{AFX_DATA(CVmDetectDlg)
	enum { IDD = IDD_VMDETECT_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVmDetectDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CVmDetectDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnBtnInsideVPC();
	afx_msg void OnBtnInsideVmWare();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VMDETECTDLG_H__3195E972_A244_4042_82F2_AB85E06E9B8A__INCLUDED_)
