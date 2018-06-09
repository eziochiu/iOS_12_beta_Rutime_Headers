/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PAEEarthquake : PAEFilterDefaultBase

- (bool)addParameters;
- (bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 inputInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg2 hardware:(bool*)arg3 software:(bool*)arg4;
- (void)getEdgeMode:(unsigned int*)arg1 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg2;
- (id)initWithAPIManager:(id)arg1;
- (id)properties;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })quakeHeliumNodeWithInputImage:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg1 inputImage:(id)arg2 outputImage:(id)arg3 renderInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg4 twist:(float)arg5 horizontalShake:(float)arg6 verticalShake:(float)arg7 layers:(float)arg8 centerX:(float)arg9 centerY:(float)arg10 randomSeed:(int)arg11;
- (bool)variesOverTime;

@end
