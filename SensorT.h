
// SensorT.h : SensorT ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CSensorTApp:
// �� Ŭ������ ������ ���ؼ��� SensorT.cpp�� �����Ͻʽÿ�.
//

class CSensorTApp : public CWinAppEx
{
public:
	CSensorTApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.
protected:
	HMENU  m_hMDIMenu;
	HACCEL m_hMDIAccel;

public:
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	afx_msg void OnFileNew();
	DECLARE_MESSAGE_MAP()
};

extern CSensorTApp theApp;
