// SerialSet.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "SensorT.h"
#include "SerialSet.h"
#include "afxdialogex.h"


// CSerialSet ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CSerialSet, CDialogEx)

CSerialSet::CSerialSet(CWnd* pParent /*=NULL*/)
	: CDialogEx(CSerialSet::IDD, pParent)
	, m_EditTrans(_T(""))
	, m_EditRec(_T(""))
	, m_ComPort(0)
	, m_BaudRate(0)
{

}

CSerialSet::~CSerialSet()
{
}

void CSerialSet::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Text(pDX, IDC_EDIT_COM, m_ComPort);
	//  DDX_Text(pDX, IDC_EDIT_BAUD, m_BaudRate);
	DDX_Text(pDX, IDC_EDIT_SEND, m_EditTrans);
	DDX_Text(pDX, IDC_EDIT_REC, m_EditRec);
	DDX_Control(pDX, IDC_OPEN, m_BtnComOpen);
	DDX_Text(pDX, IDC_EDIT_COM, m_ComPort);
	DDX_Text(pDX, IDC_EDIT_BAUD, m_BaudRate);
}


BEGIN_MESSAGE_MAP(CSerialSet, CDialogEx)
	ON_BN_CLICKED(IDC_OPEN, &CSerialSet::OnBnClickedOpen)
END_MESSAGE_MAP()


// CSerialSet �޽��� ó�����Դϴ�.


void CSerialSet::OnBnClickedOpen()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.

	UpdateData(TRUE);

	BOOL bCheck = m_BtnComOpen.GetCheck();

	if(bCheck)
	{
		TTYSTRUCT tty;
		tty.byByteSize = _nDataValues[1];
		tty.byCommPort = m_ComPort;
		tty.byFlowCtrl = 0;
		tty.byParity = FALSE;
		tty.byStopBits = _nStopBits[0];
		tty.byXonXoff = 0;
		tty.dwBaudRate = m_BaudRate;

		m_OpenPort = 1;

	}
	else
	{
		m_OpenPort = 0;
	}
}

void CSerialSet::Open_ComPort(bool flag){
	if(flag)
	{
		m_BtnComOpen.SetWindowText("CLOSE");
	}
	else
	{
		AfxMessageBox("Can't Open Com Port!");

		m_BtnComOpen.SetCheck(FALSE);
	}
}