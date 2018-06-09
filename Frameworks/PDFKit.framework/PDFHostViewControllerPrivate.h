/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFHostViewControllerPrivate : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  bottomRightSelectionPoint;
    long long  currentPageIndex;
    UITapGestureRecognizer * doubleTapGestureRecognizer;
    <PDFExtensionProtocol> * extensionProxy;
    bool  hasSelection;
    UIScrollView * hostScrollView;
    <PDFHostViewControllerDelegate> * hostViewControllerDelegate;
    bool  isUnlocked;
    UILongPressGestureRecognizer * longPressGestureRecognizer;
    double  maxScaleFactor;
    double  minScaleFactor;
    long long  pageCount;
    PDFPageLabelView * pageLabelView;
    PDFPanGestureRecognizer * panGestureRecognizer;
    NSString * password;
    PDFPasswordViewController * passwordViewController;
    NSMutableArray * selectionRects;
    UISwipeGestureRecognizer * swipeGestureRecognizer;
    UITapGestureRecognizer * tapGestureRecognizer;
    int  textSelectionState;
    struct CGPoint { 
        double x; 
        double y; 
    }  topLeftSelectionPoint;
    PDFExtensionTopView * topView;
}

- (void).cxx_destruct;

@end
