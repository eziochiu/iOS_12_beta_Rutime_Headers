/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

@interface MUCGPDFAnnotationAdaptor : NSObject

+ (id)_concreteAKAnnotationWithCGPDFAnnotation:(struct CGPDFAnnotation { }*)arg1 ofPage:(struct CGPDFPage { }*)arg2;
+ (id)_concreteDictionaryRepresentationOfAKAnnotation:(id)arg1 forPage:(struct CGPDFPage { }*)arg2;
+ (id)newAKAnnotationWithCGPDFAnnotation:(struct CGPDFAnnotation { }*)arg1 ofPage:(struct CGPDFPage { }*)arg2;
+ (id)newPlaceholderAKAnnotationWithCGPDFAnnotation:(struct CGPDFAnnotation { }*)arg1 ofPage:(struct CGPDFPage { }*)arg2;
+ (id)pdfDictionaryRepresentationOfAKAnnotation:(id)arg1 forPage:(struct CGPDFPage { }*)arg2;
+ (id)supportedAnnotationTypes;

@end
