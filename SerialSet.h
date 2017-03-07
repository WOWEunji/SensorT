#pragma once
#include "Resource.h"
#include "afxwin.h"

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
public:
	bool m_OpenPort;
//	int m_ComPort;
//	int m_BaudRate;
	CString m_EditTrans;
	CString m_EditRec;
	CButton m_BtnComOpen;
	TTYSTRUCT m_SerialSetting;
	afx_msg void OnBnClickedOpen();

public :
	void Open_ComPort(bool flag);

	int m_ComPort;
	int m_BaudRate;
};
