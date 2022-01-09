
// mfc2019View.h : interface of the Cmfc2019View class
//

#pragma once


class Cmfc2019View : public CView
{
protected: // create from serialization only
	Cmfc2019View() noexcept;
	DECLARE_DYNCREATE(Cmfc2019View)

// Attributes
public:
	Cmfc2019Doc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~Cmfc2019View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in mfc2019View.cpp
inline Cmfc2019Doc* Cmfc2019View::GetDocument() const
   { return reinterpret_cast<Cmfc2019Doc*>(m_pDocument); }
#endif

