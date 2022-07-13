
// CalculatorDlg.h: файл заголовка
//
#include <string>
#pragma once


// Диалоговое окно CCalculatorDlg
class CCalculatorDlg : public CDialogEx
{
// Создание
public:
	CCalculatorDlg(CWnd* pParent = nullptr);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CALCULATOR_DIALOG };
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
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnEnChangeEdit1();
//	CString m_EDITEnBxVALUE;
	afx_msg void OnEnChangeEditenterbox();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton14();
	afx_msg void OnBnClickedButton15();
//	bool m_EDITcheck;
	BOOL m_EDITcheck;
	afx_msg void OnBnClickedButton16();
	afx_msg void OnEnChangeEdit2();
//	string m_EDITEnBxVALUE;
//	CStringA m_EDITEnBxVALUE;
//	CString m_EDITEnBxVALUE;
//	CString m_EDITEnBxVALUE;
	CString m_EDITEnBxVALUE;
	double m_EDITdoxANSWER;
	afx_msg void OnEnChangeEdit3();
	double m_EDITboxANSWER;
	afx_msg void OnBnClickedButton17();
	afx_msg void OnBnClickedButton18();
//	BOOL m_DisplayMinus;
	afx_msg void OnEnChangeEdit5();
	CString m_DisplayMinus;
	afx_msg void OnEnChangeEdit4();
};
