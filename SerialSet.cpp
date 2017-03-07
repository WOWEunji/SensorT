// SerialSet.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "SensorT.h"
#include "SerialSet.h"
#include "afxdialogex.h"


// CSerialSet 대화 상자입니다.

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


// CSerialSet 메시지 처리기입니다.
