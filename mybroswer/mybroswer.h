// mybroswer.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CmybroswerApp:
// �йش����ʵ�֣������ mybroswer.cpp
//

class CmybroswerApp : public CWinApp
{
public:
	CmybroswerApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CmybroswerApp theApp;