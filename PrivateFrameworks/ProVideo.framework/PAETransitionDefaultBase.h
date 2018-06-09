/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PAETransitionDefaultBase : PAESharedDefaultBase <FxTransition> {
    bool  _haveEase;
    bool  _haveMotionBlur;
    int  _initGap;
}

- (bool)addEaseParametersWithDefault:(float)arg1 andFlags:(unsigned int)arg2;
- (bool)addMotionBlurParameters;
- (bool)addParameters;
- (bool)canThrowRenderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg5;
- (bool)canThrowRenderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withSpeed:(float)arg5 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg6;
- (bool)convertTimeFraction:(double)arg1 toLocal:(double*)arg2 andDerivative:(double*)arg3 atTime:(union { double x1; struct { /* ? */ } *x2; })arg4;
- (bool)finishInitialSetup:(id*)arg1;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 inputInfoA:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg2 inputInfoB:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg3 timeFraction:(float)arg4 hardware:(bool*)arg5 software:(bool*)arg6;
- (bool)getEaseIn:(double*)arg1 easeOut:(double*)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInputA:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg3 withInputB:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg4 withTimeFraction:(float)arg5 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg6;
- (bool)isEndGap;
- (bool)isFrontGap;
- (bool)parameterChanged:(unsigned int)arg1;
- (double)relativeShutterAtTime:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (bool)renderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg5;

@end
