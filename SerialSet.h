#pragma once
#include "Resource.h"

// CSerialSet ��ȭ �����Դϴ�.

class CSerialSet : public CDialogEx
{
	DECLARE_DYNAMIC(CSerialSet)

public:
	CSerialSet(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CSerialSet();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_SerialSet };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
