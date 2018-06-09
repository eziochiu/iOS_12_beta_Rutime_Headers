/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFUnderlineAnnotation : UIPDFMarkupAnnotation

- (int)annotationType;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawLayerRotated:(id)arg1 inContext:(struct CGContext { }*)arg2 selection:(id)arg3 rectangles:(unsigned long long)arg4;
- (void)drawLayerUpright:(id)arg1 inContext:(struct CGContext { }*)arg2 selection:(id)arg3 rectangles:(unsigned long long)arg4;
- (bool)recognizeGestures;
- (Class)viewClass;

@end
