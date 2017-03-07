#pragma once
#include "Resource.h"
#include "afxwin.h"

// CSerialSet 대화 상자입니다.

class CSerialSet : public CDialogEx
{
	DECLARE_DYNAMIC(CSerialSet)

public:
	CSerialSet(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CSerialSet();

// 대화 상자 데이터입니다.
	enum { IDD = IDD_SerialSet };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

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
