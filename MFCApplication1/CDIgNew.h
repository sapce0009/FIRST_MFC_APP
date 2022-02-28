#pragma once


// CDIgNew 대화 상자

class CDIgNew : public CDialogEx
{
	DECLARE_DYNAMIC(CDIgNew)

public:
	CDIgNew(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CDIgNew();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_NEW };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
