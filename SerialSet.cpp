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
{

}

CSerialSet::~CSerialSet()
{
}

void CSerialSet::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSerialSet, CDialogEx)
END_MESSAGE_MAP()


// CSerialSet �޽��� ó�����Դϴ�.
