/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PAEBadFilm : PAEFilterDefaultBase {
    int  _cachedSeed;
    PAEEarthquake * _jitterer;
    struct PCMutex { 
        int (**_vptr$PCMutex)(); 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } _Mutex; 
    }  _scratchMutex;
    NSMutableArray * _scratches;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addParameters;
- (double)autoRandomize:(double)arg1 withVariance:(double)arg2 andFrequency:(int)arg3 atTime:(union { double x1; struct { /* ? */ } *x2; })arg4 randCount:(int*)arg5;
- (bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3;
- (void)createDust:(int)arg1 scratches:(int)arg2 scratchColor:(double*)arg3 hair:(int)arg4 randomSeed:(int)arg5 autoRandFreq:(int)arg6 width:(int)arg7 height:(int)arg8 buffer:(char *)arg9 atTime:(union { double x1; struct { /* ? */ } *x2; })arg10 pixelTransform:(const struct PCMatrix44Tmpl<double> { double x1[4][4]; }*)arg11;
- (void)dealloc;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 inputInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg2 hardware:(bool*)arg3 software:(bool*)arg4;
- (void)getBrightness:(double*)arg1 saturation:(double*)arg2 dust:(int*)arg3 scratches:(int*)arg4 scratchColor:(double*)arg5 hair:(int*)arg6 randomSeed:(int*)arg7 jitter:(double*)arg8 focus:(double*)arg9 grain:(double*)arg10 autoRandFreq:(int*)arg11 withParmsAPI:(id)arg12 atTime:(union { double x1; struct { /* ? */ } *x2; })arg13;
- (id)initWithAPIManager:(id)arg1;
- (id)properties;
- (void)setupScratchArrayWithAutoRandomizeFrequency:(int)arg1 andSeed:(int)arg2 withWidth:(int)arg3 andHeight:(int)arg4 atTime:(union { double x1; struct { /* ? */ } *x2; })arg5;
- (bool)variesOverTime;

@end
