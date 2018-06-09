/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartStackedBarElementsRenderer : TSCHChartBarElementsRenderer

- (struct CGPath { }*)clippingPathForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inGroupIndex:(unsigned long long)arg2 withContext:(struct CGContext { }*)arg3 relativelyPositive:(bool)arg4 stackRects:(id)arg5;
- (void)renderRoundedCornerElementStrokeIntoContext:(struct CGContext { }*)arg1 stroke:(id)arg2 clippingPath:(struct CGPath { }*)arg3 elementRenderRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)stackRectsWithContext:(struct CGContext { }*)arg1;

@end
