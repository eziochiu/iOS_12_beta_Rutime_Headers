/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PAETile : PAEFilterDefaultBase

- (void)_compute_2x2_matrix:(float*)arg1 withScale:(float)arg2 angle:(float)arg3 skew:(float)arg4 stretch:(float)arg5;
- (bool)addParameters;
- (bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 inputInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg2 hardware:(bool*)arg3 software:(bool*)arg4;
- (void)getEdgeMode:(unsigned int*)arg1 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg2;
- (id)initWithAPIManager:(id)arg1;
- (id)properties;
- (void)retrieveXValue:(double*)arg1 YValue:(double*)arg2 skew:(double*)arg3 scale:(double*)arg4 stretch:(double*)arg5 rotation:(double*)arg6 forOutputImage:(id)arg7 withRenderInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg8;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })transformAndTile:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg1 withXValue:(double)arg2 YValue:(double)arg3 skew:(double)arg4 scale:(double)arg5 stretch:(double)arg6 rotation:(double)arg7 resolution:(struct PCVector2<double> { double x1; double x2; })arg8 inputImage:(id)arg9;

@end
