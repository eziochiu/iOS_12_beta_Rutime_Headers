/* made by EzioChiu.
 */

@protocol FxFilter <FxBaseEffect>

@required

- (bool)frameCleanup;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 inputInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg2 hardware:(bool*)arg3 software:(bool*)arg4;
- (bool)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInput:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg3 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg4;
- (bool)renderOutput:(FxImage *)arg1 withInput:(FxImage *)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3;

@optional

- (unsigned long long)numberOfFramesToScheduleAtRenderTime:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (void)schedule:(unsigned long long)arg1 frames:(union { double x1; struct { /* ? */ } *x2; }*)arg2 forRenderAtTime:(union { double x1; struct { /* ? */ } *x2; })arg3;

@end
