/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFPage : NSObject {
    NSMutableArray * _annotations;
    struct CGPDFPage { } * _cgPage;
    UIPDFDocument * _document;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    UIImage * _pageImage;
    unsigned long long  _pageIndex;
    unsigned long long  _pageNumber;
    UIPDFSelection * _selection;
    NSString * _stringInReadingOrder;
}

@property (readonly) struct CGPDFPage { }*CGPage;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropBox;
@property (readonly) UIPDFDocument *document;
@property (retain) UIImage *pageImage;
@property (readonly) unsigned long long pageIndex;
@property (readonly) unsigned long long pageNumber;
@property (retain) UIPDFSelection *selection;

- (struct CGPDFPage { }*)CGPage;
- (void)addAnnotation:(id)arg1;
- (id)annotationIn:(id)arg1 withIndex:(unsigned long long)arg2;
- (id)annotations;
- (unsigned long long)cfCompareFlagsFromNSOptions:(unsigned long long)arg1;
- (void)clearAnnotations;
- (id)copyPage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropBox;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropBoxAccountForRotation;
- (void)dealloc;
- (void)deliverImageWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 receiver:(id)arg3 selector:(SEL)arg4 info:(id)arg5;
- (id)document;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (id)findString:(id)arg1 fromSelection:(id)arg2 options:(unsigned long long)arg3;
- (id)getImageIfAvailable;
- (id)initWithCGPDFPage:(struct CGPDFPage { }*)arg1;
- (id)initWithDocument:(id)arg1 pageNumber:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mediaBox;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mediaBoxAccountForRotation;
- (id)pageImage;
- (unsigned long long)pageIndex;
- (unsigned long long)pageNumber;
- (void)refresh;
- (void)removeAllAnnotations;
- (void)removeAnnotation:(id)arg1;
- (unsigned long long)rotation;
- (id)selection;
- (void)setDocument:(id)arg1;
- (void)setPageImage:(id)arg1;
- (void)setSelection:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)string;

@end
