/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PAEContrast : PAEFilterDefaultBase

- (bool)addParameters;
- (struct CGPoint { double x1; double x2; })calculateBezier:(double)arg1 startPt:(struct CGPoint { double x1; double x2; })arg2 controlPoint1:(struct CGPoint { double x1; double x2; })arg3 controlPoint2:(struct CGPoint { double x1; double x2; })arg4 endPt:(struct CGPoint { double x1; double x2; })arg5;
- (bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 inputInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg2 hardware:(bool*)arg3 software:(bool*)arg4;
- (void)generateLut:(struct RGBAfPixel { float x1; float x2; float x3; float x4; }*)arg1 forContrast:(double)arg2 andPivot:(double)arg3;
- (id)initWithAPIManager:(id)arg1;
- (id)properties;

@end
