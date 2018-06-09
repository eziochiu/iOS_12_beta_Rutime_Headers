/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartGridRenderer : TSCHRenderer

- (id)init;
- (void)p_renderBackground:(struct CGContext { }*)arg1;
- (void)p_renderBackground:(struct CGContext { }*)arg1 style:(id)arg2;
- (void)p_renderGridlines:(struct CGContext { }*)arg1 axis:(id)arg2 locations:(id)arg3 showProperty:(int)arg4 strokeProperty:(int)arg5 shadowProperty:(int)arg6 opacityProperty:(int)arg7;
- (void)p_renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
