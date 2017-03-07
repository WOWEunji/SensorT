#pragma once
#include "SerialSet.h"

// CDialDock

class CDialDock : public CDockablePane
{
	DECLARE_DYNAMIC(CDialDock)

public:
	CDialDock();
	virtual ~CDialDock();

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	CSerialSet m_SerialSet;
	afx_msg void OnSize(UINT nType, int cx, int cy);
};


