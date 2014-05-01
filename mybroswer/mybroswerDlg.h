// mybroswerDlg.h : 头文件
//

#pragma once
#include "explorer1.h"


// CmybroswerDlg 对话框
class CmybroswerDlg : public CDialog
{
// 构造
public:
	CmybroswerDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MYBROSWER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CExplorer1 m_search;
public:
	DECLARE_EVENTSINK_MAP()
public:
	void BeforeNavigate2Explorer1(LPDISPATCH pDisp, VARIANT* URL, VARIANT* Flags, VARIANT* TargetFrameName, VARIANT* PostData, VARIANT* Headers, BOOL* Cancel);
};
