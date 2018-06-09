/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIAutoLoopFrameNode : NURenderNode

- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)_processImage:(id)arg1 cleanRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 transform:(id)arg4 geometry:(id)arg5;
- (struct { long long x1; long long x2; })videoScale;

@end
