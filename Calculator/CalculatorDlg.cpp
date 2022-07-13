
// CalculatorDlg.cpp: файл реализации
//

#include "pch.h"
#include "framework.h"
#include "Calculator.h"
#include "CalculatorDlg.h"
#include "afxdialogex.h"
#include <atlstr.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include <string>
using namespace std;

double Answer;
bool m_BUTTONPlusMinus = false;
// Диалоговое окно CAboutDlg используется для описания сведений о приложении

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

// Реализация
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


// Диалоговое окно CCalculatorDlg



CCalculatorDlg::CCalculatorDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CALCULATOR_DIALOG, pParent)
	, m_EDITEnBxVALUE(_T(""))
	, m_EDITdoxANSWER(0)
	, m_EDITboxANSWER(0)
	
	, m_DisplayMinus(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCalculatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, m_EDITEnBxVALUE);
	//DDX_Text(pDX, IDC_EDIT3, m_EDITboxANSWER);
	DDX_Text(pDX, IDC_EDIT5, m_DisplayMinus);
}

BEGIN_MESSAGE_MAP(CCalculatorDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, &CCalculatorDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON1, &CCalculatorDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON8, &CCalculatorDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON12, &CCalculatorDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON10, &CCalculatorDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CCalculatorDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON13, &CCalculatorDlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON2, &CCalculatorDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CCalculatorDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CCalculatorDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CCalculatorDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CCalculatorDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CCalculatorDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON9, &CCalculatorDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON14, &CCalculatorDlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &CCalculatorDlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &CCalculatorDlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &CCalculatorDlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &CCalculatorDlg::OnBnClickedButton18)
END_MESSAGE_MAP()


// Обработчики сообщений CCalculatorDlg

BOOL CCalculatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Добавление пункта "О программе..." в системное меню.

	// IDM_ABOUTBOX должен быть в пределах системной команды.
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

	// Задает значок для этого диалогового окна.  Среда делает это автоматически,
	//  если главное окно приложения не является диалоговым
	SetIcon(m_hIcon, TRUE);			// Крупный значок
	SetIcon(m_hIcon, FALSE);		// Мелкий значок

	// TODO: добавьте дополнительную инициализацию

	return TRUE;  // возврат значения TRUE, если фокус не передан элементу управления
}

void CCalculatorDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// При добавлении кнопки свертывания в диалоговое окно нужно воспользоваться приведенным ниже кодом,
//  чтобы нарисовать значок.  Для приложений MFC, использующих модель документов или представлений,
//  это автоматически выполняется рабочей областью.

void CCalculatorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // контекст устройства для рисования

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Выравнивание значка по центру клиентского прямоугольника
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Нарисуйте значок
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// Система вызывает эту функцию для получения отображения курсора при перемещении
//  свернутого окна.
HCURSOR CCalculatorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CCalculatorDlg::OnBnClickedOk()
{
	// TODO: добавьте свой код обработчика уведомлений
	CDialogEx::OnOK();
}


void CCalculatorDlg::OnBnClickedButton1()
{
	// TODO: добавьте свой код обработчика уведомлений
	m_EDITEnBxVALUE = m_EDITEnBxVALUE + L"1";
	UpdateData(false);
}


void CCalculatorDlg::OnBnClickedButton8()
{
	// TODO: добавьте свой код обработчика уведомлений
	m_EDITEnBxVALUE = m_EDITEnBxVALUE + L"8";
	UpdateData(false);
}


void CCalculatorDlg::OnBnClickedButton12()
{
	// TODO: добавьте свой код обработчика уведомлений
	if (!m_EDITcheck) {
		m_EDITcheck = true;
		m_EDITEnBxVALUE = m_EDITEnBxVALUE + L" * ";
		UpdateData(false);
	}
}

void CCalculatorDlg::OnBnClickedButton10()
{
	// TODO: добавьте свой код обработчика уведомлений
	if (!m_EDITcheck) {
		m_EDITcheck = true;
		m_EDITEnBxVALUE = m_EDITEnBxVALUE + L" - ";
		UpdateData(false);
	}
}

void CCalculatorDlg::OnBnClickedButton11()
{
	// TODO: добавьте свой код обработчика уведомлений
	if (!m_EDITcheck) {
		m_EDITcheck = true;
		m_EDITEnBxVALUE = m_EDITEnBxVALUE + L" + ";
		UpdateData(false);
	}
}


void CCalculatorDlg::OnBnClickedButton13()
{
	// TODO: добавьте свой код обработчика уведомлений
	if (!m_EDITcheck) {
		m_EDITcheck = true;
		m_EDITEnBxVALUE = m_EDITEnBxVALUE + L" / ";
		UpdateData(false);
	}
}


void CCalculatorDlg::OnBnClickedButton2()
{
	// TODO: добавьте свой код обработчика уведомлений
	m_EDITEnBxVALUE = m_EDITEnBxVALUE + L"2";
	UpdateData(false);
}


void CCalculatorDlg::OnBnClickedButton3()
{
	// TODO: добавьте свой код обработчика уведомлений
	m_EDITEnBxVALUE = m_EDITEnBxVALUE + L"3";
	UpdateData(false);
}


void CCalculatorDlg::OnBnClickedButton4()
{
	// TODO: добавьте свой код обработчика уведомлений
	m_EDITEnBxVALUE = m_EDITEnBxVALUE + L"4";
	UpdateData(false);
}


void CCalculatorDlg::OnBnClickedButton5()
{
	// TODO: добавьте свой код обработчика уведомлений
	m_EDITEnBxVALUE = m_EDITEnBxVALUE + L"5";
	UpdateData(false);
}


void CCalculatorDlg::OnBnClickedButton6()
{
	// TODO: добавьте свой код обработчика уведомлений
	m_EDITEnBxVALUE = m_EDITEnBxVALUE + L"6";
	UpdateData(false);
}


void CCalculatorDlg::OnBnClickedButton7()
{
	// TODO: добавьте свой код обработчика уведомлений
	m_EDITEnBxVALUE = m_EDITEnBxVALUE + L"7";
	UpdateData(false);
}


void CCalculatorDlg::OnBnClickedButton9()
{
	// TODO: добавьте свой код обработчика уведомлений
	m_EDITEnBxVALUE = m_EDITEnBxVALUE + L"9";
	UpdateData(false);
}


void CCalculatorDlg::OnBnClickedButton14()
{
	// TODO: добавьте свой код обработчика уведомлений
	m_EDITEnBxVALUE = m_EDITEnBxVALUE + L"0";
	UpdateData(false);
}


void CCalculatorDlg::OnBnClickedButton15() // КНОПКА ДОРІВНЮЄ
{
	char oper = ' ';
	bool check = false, krapka1 = false, krapka2 = false;
	double LeftNumber, RightNumber;
	double LeftNumberInteger = 0, RightNumberInteger = 0, LeftNumberFract = 0, RightNumberFract = 0;

	int CntFirstNum = 0, CntSecondNum = 0, CntFirstNumFractPart = 0, CntSecondNumFractPart = 0;

	for (int i = 0; i < m_EDITEnBxVALUE.GetLength(); i++) {
		if (int(m_EDITEnBxVALUE[i]) >= 48 && int(m_EDITEnBxVALUE[i]) <= 57 || int(m_EDITEnBxVALUE[i]) == 46) {


			if (!check) {//рахуємо кількість 1-го числа
				if (int(m_EDITEnBxVALUE[i]) == 46) {
					krapka1 = true;
					i++;
				}

				if (!krapka1) {
					if (int(m_EDITEnBxVALUE[i]) >= 48 && int(m_EDITEnBxVALUE[i]) <= 57) {//ціла частина
						CntFirstNum++;
					}
				}
				else if (krapka1) {
					if (int(m_EDITEnBxVALUE[i]) >= 48 && int(m_EDITEnBxVALUE[i]) <= 57)
						CntFirstNumFractPart++;
				}
			}


			if (check) {//рахуємо кількість 2-го числа
				if (int(m_EDITEnBxVALUE[i]) == 46) {
					krapka2 = true;
					i++;
				}

				if (!krapka2) {
					if (int(m_EDITEnBxVALUE[i]) >= 48 && int(m_EDITEnBxVALUE[i]) <= 57) {//ціла частина
						CntSecondNum++;
					}
				}
				else if (krapka2) {
					if (int(m_EDITEnBxVALUE[i]) >= 48 && int(m_EDITEnBxVALUE[i]) <= 57)
						CntSecondNumFractPart++;
				}
			}
		}
		else {
			i += 2;//перейти на друге число
			check = true;
		}
	}

	int* FirstNumInteger, * SecontNumInteger;
	int* FirstNumFract, * SecondNumFract;
	FirstNumInteger = new int[CntFirstNum]; int i1 = 0;
	FirstNumFract = new int[CntFirstNumFractPart]; int i2 = 0;
	SecontNumInteger = new int[CntSecondNum]; int i3 = 0;
	SecondNumFract = new int[CntSecondNumFractPart]; int i4 = 0;

	krapka1 = false, krapka2 = false, check = false;
	int templengt = m_EDITEnBxVALUE.GetLength() / 2;
	for (int i = 0; i < (m_EDITEnBxVALUE.GetLength()); i++) {//має просто перевести числа в інт або дабл
		if (int(m_EDITEnBxVALUE[i]) >= 48 && int(m_EDITEnBxVALUE[i]) <= 57 || int(m_EDITEnBxVALUE[i]) == 46) {


			if (!check) {//рахуємо кількість 1-го числа
				if (int(m_EDITEnBxVALUE[i]) == 46) {
					krapka1 = true;
					i++;
				}

				if (!krapka1) {
					if (int(m_EDITEnBxVALUE[i]) >= 48 && int(m_EDITEnBxVALUE[i]) <= 57) {//ціла частина
						FirstNumInteger[i1] = int(m_EDITEnBxVALUE[i]) - 48;
						i1++;
					}
				}
				else if (krapka1) {
					FirstNumFract[i2] = int(m_EDITEnBxVALUE[i]) - 48;
					i2++;
				}
			}


			if (check) {//рахуємо кількість 2-го числа
				if (int(m_EDITEnBxVALUE[i]) == 46) {
					krapka2 = true;
					i++;
				}

				if (!krapka2) {
					if (int(m_EDITEnBxVALUE[i]) >= 48 && int(m_EDITEnBxVALUE[i]) <= 57) {//ціла частина
						SecontNumInteger[i3] = int(m_EDITEnBxVALUE[i]) - 48;
						i3++;
					}
				}
				else if (krapka2) {
					SecondNumFract[i4] = int(m_EDITEnBxVALUE[i]) - 48;
					i4++;
				}
			}
		}
		else {
			i += 2;//перейти на друге число
			check = true;
		}
	}

	int k = 0;
	for (int i = CntFirstNum - 1; i >= 0; i--) {
		LeftNumberInteger += FirstNumInteger[k] * pow(10, i);
		k++;
	}
	k = 0;

	for (int i = 1; i <= CntFirstNumFractPart; i++) {
		LeftNumberFract += (FirstNumFract[k] / pow(10, i));
		k++;
	}
	LeftNumber = LeftNumberInteger + LeftNumberFract;
	k = 0;
	if (m_BUTTONPlusMinus) {
		LeftNumber -= (LeftNumber * 2);
	}

	for (int i = CntSecondNum - 1; i >= 0; i--) {
		RightNumberInteger += SecontNumInteger[k] * (pow(10, i));
		k++;
	}
	k = 0;

	for (int i = 1; i <= CntSecondNumFractPart; i++) {
		RightNumberFract += (SecondNumFract[k] / pow(10, i));
		k++;
	}
	k = 0;
	RightNumber = RightNumberFract + RightNumberInteger;
	
	for (int i = 0; i < m_EDITEnBxVALUE.GetLength() ; i++) {
		if (m_EDITEnBxVALUE[i] == '+' || m_EDITEnBxVALUE[i] == '-' || m_EDITEnBxVALUE[i] == '/' || m_EDITEnBxVALUE[i] == '*') {
			oper = m_EDITEnBxVALUE[i];
		}
	}
	
	switch (oper)
	{
	case '+':
		Answer = LeftNumber + RightNumber;
		break;
	case '-':
		Answer = LeftNumber - RightNumber;
		break;
	case '*':
		Answer = LeftNumber * RightNumber;
		break;
	case '/':
		Answer = LeftNumber / RightNumber;
		break;
	}
	m_EDITcheck = false;
	m_DisplayMinus.Empty(); 
	m_EDITEnBxVALUE.Empty();
	m_EDITEnBxVALUE.Format(_T("%.10f"), Answer);
	UpdateData(false);

	delete[] FirstNumInteger;
	delete[] FirstNumFract;
	delete[] SecontNumInteger;
	delete[] SecondNumFract;


}


void CCalculatorDlg::OnBnClickedButton16()
{
	// TODO: добавьте свой код обработчика уведомлений
	m_EDITEnBxVALUE = m_EDITEnBxVALUE + L".";
	UpdateData(false);
}


void CCalculatorDlg::OnBnClickedButton17()
{
	m_EDITEnBxVALUE.Empty();
	m_EDITdoxANSWER = 0;
	Answer = 0;
	m_EDITcheck = false;
	m_BUTTONPlusMinus = false;
	m_DisplayMinus.Empty();
	UpdateData(false);
}


void CCalculatorDlg::OnBnClickedButton18()
{
	m_BUTTONPlusMinus = true;
	m_DisplayMinus = " -";
	UpdateData(false);
	// TODO: добавьте свой код обработчика уведомлений
}