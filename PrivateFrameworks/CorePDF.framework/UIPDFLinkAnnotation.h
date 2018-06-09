/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFLinkAnnotation : UIPDFMarkupAnnotation

- (unsigned long long)getDestination:(struct CGPDFDictionary { }*)arg1;
- (unsigned long long)getNamedDestination:(struct CGPDFDictionary { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })linkRectangle;
- (id)newBaseURL;
- (unsigned long long)pageNumber;
- (bool)quadPoints:(struct CGPDFArray { }*)arg1 within:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)recognizeGestures;
- (bool)shouldRecognizeTapOrPress:(struct CGPoint { double x1; double x2; })arg1;
- (id)url;

@end
