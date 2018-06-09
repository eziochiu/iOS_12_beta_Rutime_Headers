/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPagePrivate : NSObject {
    bool  akDidSetupRealPageModelController;
    PDFAKPageAdaptor * akPageAdaptor;
    NSMutableArray * annotationChanges;
    NSMutableArray * annotations;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  artBox;
    NSMutableAttributedString * attributedString;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  bleedBox;
    bool  bookmarked;
    struct CGImage { } * cgImage;
    unsigned int  cgImageOrientation;
    NSMutableSet * changedAnnotations;
    bool  colorWidgetBackgrounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  cropBox;
    bool  didChangeBounds;
    bool  displaysAnnotations;
    bool  displaysMarkups;
    PDFDocument * document;
    bool  enqueuedForDataDetection;
    bool  enqueuedForLayout;
    UIImage * image;
    bool  isFullyConstructed;
    NSString * label;
    struct CGPDFLayout { } * layout;
    NSThread * layoutThread;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  layoutThreadCondition;
    NSLock * lock_accessAnnotations;
    NSLock * lock_accessLayout;
    NSLock * lock_dataEnqueuedForDataDetection;
    NSLock * lock_getAnnotations;
    NSLock * lock_text;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mediaBox;
    long long  numChars;
    struct CGPDFPage { } * page;
    bool  ranDataDetectors;
    long long  rotation;
    NSMutableArray * scannedAnnotations;
    struct __CFString { } * text;
    bool  textCharsLoaded;
    struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; } * threadFetchingLayout;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  trimBox;
    NSMutableArray * unsupportedElements;
    PDFView * view;
    NSMutableDictionary * widgetAnnotationLookup;
}

- (void).cxx_destruct;

@end
