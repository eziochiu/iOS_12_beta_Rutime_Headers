/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFViewPrivate : NSObject {
    PDFAKOverlayAdaptor * akOverlayAdaptor;
    bool  autoScale;
    double  blockingWaitDuration;
    PDFCoachMarkManager * coachMarkManager;
    PDFViewController * controller;
    unsigned long long  currentPageIndex;
    PDFSelection * currentSelection;
    PDFAnnotation * currentTextWidget;
    bool  debugDrawCGPDFNodeLayer;
    <PDFViewDelegate> * delegate;
    bool  delegateOrdersPageDrawing;
    bool  delegateWillScale;
    NSMutableArray * destinationHistory;
    long long  displayDirection;
    long long  displayMode;
    bool  displaysAsBook;
    bool  displaysBookmarksForPages;
    bool  displaysPageBreaks;
    bool  displaysRTL;
    PDFDocument * document;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  documentMargins;
    struct CGPoint { 
        double x; 
        double y; 
    }  documentViewCenterBeforeRotation;
    PDFDocumentViewController * documentViewController;
    UIDragInteraction * dragInteraction;
    bool  enableSelectionDrawing;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  extensionViewBoundsInDocument;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  extensionViewBoundsInView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  extensionViewFrame;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  extensionViewSafeAreaInsets;
    double  extensionViewZoomScale;
    unsigned long long  firstVisiblePage;
    PDFPage * fromPage;
    double  gutterWide;
    NSArray * highlights;
    long long  historyIndex;
    double  horizontalScaleFactorBeforeRotation;
    bool  inhibitAutoScroll;
    bool  isUsingPageViewController;
    unsigned long long  lastHorizontalScrollDirection;
    unsigned long long  lastVerticalScrollDirection;
    unsigned long long  lastVisiblePage;
    UILongPressGestureRecognizer * longPressGestureRecognizer;
    bool  needsRotationZoomFix;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  pageBreakMargins;
    PDFTimer * pageSyncTimer;
    NSDictionary * pageViewControllerOptions;
    PDFPanGestureRecognizer * panGestureRecognizer;
    PDFPasswordViewController * passwordViewController;
    NSObject<PDFViewPopupManager> * popupManager;
    PDFRenderingProperties * renderingProperties;
    bool  scaling;
    unsigned long long  scrollEntry;
    PDFScrollView * scrollView;
    bool  scrollingChangesPages;
    bool  showsScrollIndicators;
    UISwipeGestureRecognizer * swipeGestureRecognizer;
    UITapGestureRecognizer * tapGestureRecognizer;
    PDFViewLayout * viewLayout;
    bool  wantsForceUpdate;
    double  zoomIncrement;
}

- (void).cxx_destruct;

@end
