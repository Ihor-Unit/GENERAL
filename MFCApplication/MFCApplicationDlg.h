
// MFCApplicationDlg.h: файл заголовка
//

#pragma once


// Диалоговое окно CMFCApplicationDlg
class CMFCApplicationDlg : public CDialogEx
{
// Создание
public:
	CMFCApplicationDlg(CWnd* pParent = nullptr);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnEnChangeEdit1();
//	int _Edit1;
//	int m_Edit1;
	afx_msg void OnClickedButton1();
//	int m_Edit1;
	CString m_Edit1;
	CString m_Edit2;
	afx_msg void OnBnClickedButton2();
};
