// ex08ajia.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cex08ajiaApp:
// �йش����ʵ�֣������ ex08ajia.cpp
//

class Cex08ajiaApp : public CWinApp
{
public:
	Cex08ajiaApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cex08ajiaApp theApp;