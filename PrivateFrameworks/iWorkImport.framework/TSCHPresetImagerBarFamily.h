/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPresetImagerBarFamily : TSCHPresetImager

- (void)addRoundedCornerClipPathToContext:(struct CGContext { }*)arg1 forPreset:(id)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 isVertical:(bool)arg4;
- (bool)hasRoundedCornersForPreset:(id)arg1;
- (void)p_drawBarInContext:(struct CGContext { }*)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 stroke:(id)arg3 fill:(id)arg4;
- (void)renderInRoundedCornerClippedContext:(struct CGContext { }*)arg1 forPreset:(id)arg2 stroke:(id)arg3 barRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 clipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 isVertical:(bool)arg6 renderBlock:(id /* block */)arg7;
- (struct CGPath { }*)roundedCornerClippingPathForPreset:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 isVertical:(bool)arg3;

@end
