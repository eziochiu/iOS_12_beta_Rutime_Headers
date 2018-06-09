/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageLayerSelectionEffect : PDFPageLayerEffect

- (id)_activeColor;
- (id)_createMagnificationLoupeLayer:(int)arg1;
- (id)_createSelectionLollipop:(double)arg1 isLeftSide:(bool)arg2;
- (struct CGImage { }*)_createTextMagnifierContentsImageAtPagePoint:(struct CGPoint { double x1; double x2; })arg1 forLoupeType:(int)arg2 forSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_generateRects;
- (void)_generateSelectionIsFirstPage:(bool)arg1 isLastPage:(bool)arg2;
- (void)_updateGraphics;
- (void)_updateHandleGraphics;
- (void)_updateMagnificationLoupeLayer:(int)arg1 withPagePoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)clearLollipopMagnifier;
- (void)clearTextSelectionHandles;
- (void)clearTextSelectionMagnifier;
- (void)dealloc;
- (void)enableTextSelectionHandles;
- (id)initWithPDFPageLayer:(id)arg1;
- (id)selection;
- (void)setLollipopMagnifierPagePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSelection:(id)arg1;
- (void)setTextSelectionMagnifierPagePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)update;

@end
