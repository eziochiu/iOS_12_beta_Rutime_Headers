/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPresetImagerRadial : TSCHPresetImager

- (id)fillFromStyle:(id)arg1;
- (struct CGPath { }*)newMutablePathWithRadius:(double)arg1 center:(struct CGPoint { double x1; double x2; })arg2 startAngle:(double)arg3 endAngle:(double)arg4;
- (void)p_drawShadowedContentIntoContext:(struct CGContext { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 contentsScale:(double)arg3 preset:(id)arg4 shouldCache:(bool*)arg5;
- (id)strokeFromStyle:(id)arg1;

@end
