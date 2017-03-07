// DialDock.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "SensorT.h"
#include "DialDock.h"


// CDialDock

IMPLEMENT_DYNAMIC(CDialDock, CDockablePane)

CDialDock::CDialDock()
{

}

CDialDock::~CDialDock()
{
}


BEGIN_MESSAGE_MAP(CDialDock, CDockablePane)
	ON_WM_CREATE()
	ON_WM_SIZE()
END_MESSAGE_MAP()



// CDialDock �޽��� ó�����Դϴ�.




int CDialDock::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDockablePane::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  ���⿡ Ư��ȭ�� �ۼ� �ڵ带 �߰��մϴ�.
	
	if(!m_SerialSet.Create(IDD_SerialSet, this))
	{
		return -1;
	}
	
	m_SerialSet.ShowWindow(SW_SHOW);

	return 0;
}


void CDialDock::OnSize(UINT nType, int cx, int cy)
{
	CDockablePane::OnSize(nType, cx, cy);

	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰��մϴ�.
	if(m_SerialSet.GetSafeHwnd())
	{
		m_SerialSet.MoveWindow(0, 0, cx, cy);
		m_SerialSet.SetFocus();
	}
}
