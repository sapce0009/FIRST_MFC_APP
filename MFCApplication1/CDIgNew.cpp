// CDIgNew.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication1.h"
#include "CDIgNew.h"
#include "afxdialogex.h"


// CDIgNew 대화 상자

IMPLEMENT_DYNAMIC(CDIgNew, CDialogEx)

CDIgNew::CDIgNew(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_NEW, pParent)
{

}

CDIgNew::~CDIgNew()
{
}

void CDIgNew::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDIgNew, CDialogEx)
END_MESSAGE_MAP()


// CDIgNew 메시지 처리기
