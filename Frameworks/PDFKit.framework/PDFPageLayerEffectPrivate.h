/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageLayerEffectPrivate : NSObject {
    PDFAnnotation * annotation;
    struct CGImage { } * lollipopImageMask;
    CALayer * lollipopMagnifierLayer;
    struct CGSize { 
        double width; 
        double height; 
    }  lollipopSize;
    struct CGImage { } * magnifierImageMask;
    struct CGSize { 
        double width; 
        double height; 
    }  magnifierSize;
    NSMutableDictionary * markupEffectLayers;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  pageFrame;
    struct { 
        bool isOnFirstPage; 
        bool isOnLastPage; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } firstPageRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } lastPageRect; 
    }  pageInfo;
    <PDFPageLayerInterface> * pageLayer;
    CALayer * rootSelectionLayer;
    PDFSelection * selection;
    NSMutableDictionary * selectionEffectLayers;
    CALayer * selectionEndHandle;
    CALayer * selectionStartHandle;
    bool  shouldRotateContent;
    bool  showTextSelectionHandle;
    CALayer * textMagnifierLayer;
    NSUUID * uuid;
    PDFTimer * zoomTimer;
}

- (void).cxx_destruct;

@end
