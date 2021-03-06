/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageViewPrivate : NSObject {
    UITextView * activeTextView;
    PDFAnnotation * activeWidgetAnnotation;
    UIView * activeWidgetControl;
    UIImage * backgroundImage;
    CALayer * backgroundLayer;
    int  backgroundQuality;
    CALayer * bookmarkLayer;
    struct CGSize { 
        double width; 
        double height; 
    }  bookmarkSize;
    NSObject<PDFPageLayerGeometryInterface> * geometryInterface;
    bool  isPerformingUndo;
    PDFPage * page;
    NSMutableArray * pageAnnotationEffects;
    PDFPageLayer * pageLayer;
    NSMutableArray * pageSignatures;
    PDFRenderingProperties * renderingProperties;
    PDFPageLayerEffect * searchLayer;
    PDFPageLayerEffect * selectionLayer;
    unsigned long long  visibilityDelegateIndex;
}

- (void).cxx_destruct;

@end
