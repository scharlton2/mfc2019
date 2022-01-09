
// mfc2019View.cpp : implementation of the Cmfc2019View class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "mfc2019.h"
#endif

#include "mfc2019Doc.h"
#include "mfc2019View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmfc2019View

IMPLEMENT_DYNCREATE(Cmfc2019View, CView)

BEGIN_MESSAGE_MAP(Cmfc2019View, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// Cmfc2019View construction/destruction

Cmfc2019View::Cmfc2019View() noexcept
{
	// TODO: add construction code here

}

Cmfc2019View::~Cmfc2019View()
{
}

BOOL Cmfc2019View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// Cmfc2019View drawing

void Cmfc2019View::OnDraw(CDC* /*pDC*/)
{
	Cmfc2019Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// Cmfc2019View printing

BOOL Cmfc2019View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void Cmfc2019View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void Cmfc2019View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// Cmfc2019View diagnostics

#ifdef _DEBUG
void Cmfc2019View::AssertValid() const
{
	CView::AssertValid();
}

void Cmfc2019View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmfc2019Doc* Cmfc2019View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmfc2019Doc)));
	return (Cmfc2019Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmfc2019View message handlers
