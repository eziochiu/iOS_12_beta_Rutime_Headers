/* made by EzioChiu.
 */

@protocol FxTransition <FxBaseEffect>

@required

- (bool)frameCleanup;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 inputInfoA:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg2 inputInfoB:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg3 timeFraction:(float)arg4 hardware:(bool*)arg5 software:(bool*)arg6;
- (bool)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInputA:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg3 withInputB:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg4 withTimeFraction:(float)arg5 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg6;
- (bool)renderOutput:(FxImage *)arg1 withInputA:(FxImage *)arg2 withInputB:(FxImage *)arg3 withTimeFraction:(float)arg4 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg5;

@end
