/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPresetImagerStackedColumn : TSCHPresetImagerBarFamily

- (id)p_chartType;
- (void)p_drawShadowedContentIntoContext:(struct CGContext { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 contentsScale:(double)arg3 preset:(id)arg4 shouldCache:(bool*)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_stackRectWithRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 atIndex:(unsigned long long)arg2;

@end
