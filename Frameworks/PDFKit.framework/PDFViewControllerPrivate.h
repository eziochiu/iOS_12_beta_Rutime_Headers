/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFViewControllerPrivate : NSObject {
    PDFAnnotation * activeAnnotation;
    bool  didPostPDFExtensionViewAnnotationLongPress;
    double  longPressGestureStartTime;
    CALayer * marqueeEffect;
    PDFSelection * textSelection;
    int  textSelectionHandle;
    int  textSelectionState;
    PDFView * view;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  viewMarquee;
}

- (void).cxx_destruct;

@end
