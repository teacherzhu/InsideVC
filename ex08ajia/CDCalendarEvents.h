// CDCalendarEvents.h : 由 Microsoft Visual C++ 创建的 ActiveX 控件包装类的声明

#pragma once

/////////////////////////////////////////////////////////////////////////////
// CDCalendarEvents

class CDCalendarEvents : public CWnd
{
protected:
	DECLARE_DYNCREATE(CDCalendarEvents)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x8E27C92B, 0x1264, 0x101C, { 0x8A, 0x2F, 0x4, 0x2, 0x24, 0x0, 0x9C, 0x2 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle,
						const RECT& rect, CWnd* pParentWnd, UINT nID, 
						CCreateContext* pContext = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); 
	}

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, 
				UINT nID, CFile* pPersist = NULL, BOOL bStorage = FALSE,
				BSTR bstrLicKey = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); 
	}

// 属性
public:

// 操作
public:

	void Click()
	{
		InvokeHelper(DISPID_CLICK, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void DblClick()
	{
		InvokeHelper(DISPID_DBLCLICK, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void KeyDown(short * KeyCode, short Shift)
	{
		static BYTE parms[] = VTS_PI2 VTS_I2 ;
		InvokeHelper(DISPID_KEYDOWN, DISPATCH_METHOD, VT_EMPTY, NULL, parms, KeyCode, Shift);
	}
	void KeyPress(short * KeyAscii)
	{
		static BYTE parms[] = VTS_PI2 ;
		InvokeHelper(DISPID_KEYPRESS, DISPATCH_METHOD, VT_EMPTY, NULL, parms, KeyAscii);
	}
	void KeyUp(short * KeyCode, short Shift)
	{
		static BYTE parms[] = VTS_PI2 VTS_I2 ;
		InvokeHelper(DISPID_KEYUP, DISPATCH_METHOD, VT_EMPTY, NULL, parms, KeyCode, Shift);
	}
	void BeforeUpdate(short * Cancel)
	{
		static BYTE parms[] = VTS_PI2 ;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Cancel);
	}
	void AfterUpdate()
	{
		InvokeHelper(0x1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void NewMonth()
	{
		InvokeHelper(0x3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void NewYear()
	{
		InvokeHelper(0x4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}


};
