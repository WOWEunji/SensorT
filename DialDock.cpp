// DialDock.cpp : 구현 파일입니다.
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



// CDialDock 메시지 처리기입니다.




int CDialDock::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDockablePane::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  여기에 특수화된 작성 코드를 추가합니다.
	
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

	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
	if(m_SerialSet.GetSafeHwnd())
	{
		m_SerialSet.MoveWindow(0, 0, cx, cy);
		m_SerialSet.SetFocus();
	}
}
