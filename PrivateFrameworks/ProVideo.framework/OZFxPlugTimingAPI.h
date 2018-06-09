/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface OZFxPlugTimingAPI : NSObject <FxTimingAPI, FxTimingAPI_v2, FxTimingAPI_v3, PROAPIObject> {
    struct OZFxPlugSharedBase { int (**x1)(); void *x2; id x3; void *x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; struct PCString { struct __CFString {} *x_12_1_1; } x12; bool x13; bool x14; bool x15; bool x16; bool x17; bool x18; int x19; bool x20; bool x21; bool x22; bool x23; bool x24; struct OZChannelBase {} *x25; bool x26; id x27; bool x28; struct PCMutex { int (**x_29_1_1)(); struct _opaque_pthread_mutex_t { long long x_2_2_1; BOOL x_2_2_2[56]; } x_29_1_2; } x29; unsigned int x30; } * _plugin;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (void)copyFxTime:(union { double x1; struct { /* ? */ } *x2; })arg1 toFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg2;
- (double)durationForEffect:(id)arg1;
- (void)durationFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 ofImageParm:(unsigned int)arg2;
- (void)durationFxTimeForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)durationFxTimeOfInputAToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)durationFxTimeOfInputBToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)durationFxTimeOfInputToFilter:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (double)durationOfImageParm:(unsigned int)arg1 forEffect:(id)arg2;
- (double)durationOfInputAToTransition:(id)arg1;
- (double)durationOfInputBToTransition:(id)arg1;
- (double)durationOfInputToFilter:(id)arg1;
- (unsigned long long)fieldOrderForImageParm:(unsigned int)arg1 forEffect:(id)arg2;
- (unsigned long long)fieldOrderForInputAToTransition:(id)arg1;
- (unsigned long long)fieldOrderForInputBToTransition:(id)arg1;
- (unsigned long long)fieldOrderForInputToFilter:(id)arg1;
- (void)frameDuration:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)imageFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 forParmId:(unsigned int)arg2 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (double)imageTimeForParmId:(unsigned int)arg1 forEffect:(id)arg2 fromTimelineTime:(double)arg3;
- (void)inPointFxTimeOfTimelineForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (double)inPointOfTimelineForEffect:(id)arg1;
- (id)initWithPlugin:(struct OZFxPlugSharedBase { int (**x1)(); void *x2; id x3; void *x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; struct PCString { struct __CFString {} *x_12_1_1; } x12; bool x13; bool x14; bool x15; bool x16; bool x17; bool x18; int x19; bool x20; bool x21; bool x22; bool x23; bool x24; struct OZChannelBase {} *x25; bool x26; id x27; bool x28; struct PCMutex { int (**x_29_1_1)(); struct _opaque_pthread_mutex_t { long long x_2_2_1; BOOL x_2_2_2[56]; } x_29_1_2; } x29; unsigned int x30; }*)arg1;
- (void)inputAFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (double)inputATimeForTransition:(id)arg1 fromTimelineTime:(double)arg2;
- (void)inputBFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (double)inputBTimeForTransition:(id)arg1 fromTimelineTime:(double)arg2;
- (void)inputFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (double)inputTimeForFilter:(id)arg1 fromTimelineTime:(double)arg2;
- (union { double x1; struct { /* ? */ } *x2; })invalidTime;
- (void)outPointFxTimeOfTimelineForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (double)outPointOfTimelineForEffect:(id)arg1;
- (void)sampleDuration:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (struct OZScene { int (**x1)(); int (**x2)(); struct PCHash128 { unsigned int x_3_1_1[4]; } x3; int x4; struct OZSceneSettings { int (**x_5_1_1)(); int x_5_1_2; int x_5_1_3; unsigned int x_5_1_4; bool x_5_1_5; unsigned int x_5_1_6; double x_5_1_7; bool x_5_1_8; double x_5_1_9; int x_5_1_10; int x_5_1_11; struct PCColor { struct ColorComponents { int x_1_3_1; double x_1_3_2[5]; } x_12_2_1; struct PCColorSpaceHandle { struct CGColorSpace {} *x_2_3_1; } x_12_2_2; } x_5_1_12; int x_5_1_13; bool x_5_1_14; unsigned int x_5_1_15; unsigned int x_5_1_16; double x_5_1_17; bool x_5_1_18; bool x_5_1_19; double x_5_1_20; int x_5_1_21; struct PCString { struct __CFString {} *x_22_2_1; } x_5_1_22; unsigned int x_5_1_23; unsigned int x_5_1_24; double x_5_1_25; unsigned int x_5_1_26; unsigned int x_5_1_27; unsigned int x_5_1_28; bool x_5_1_29; float x_5_1_30; int x_5_1_31; bool x_5_1_32; int x_5_1_33; bool x_5_1_34; int x_5_1_35; int x_5_1_36; bool x_5_1_37; int x_5_1_38; struct FigTime { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_39_2_1; } x_5_1_39; bool x_5_1_40; } x5; }*)scene;
- (const struct OZSceneSettings { int (**x1)(); int x2; int x3; unsigned int x4; bool x5; unsigned int x6; double x7; bool x8; double x9; int x10; int x11; struct PCColor { struct ColorComponents { int x_1_2_1; double x_1_2_2[5]; } x_12_1_1; struct PCColorSpaceHandle { struct CGColorSpace {} *x_2_2_1; } x_12_1_2; } x12; int x13; bool x14; unsigned int x15; unsigned int x16; double x17; bool x18; bool x19; double x20; int x21; struct PCString { struct __CFString {} *x_22_1_1; } x22; unsigned int x23; unsigned int x24; double x25; unsigned int x26; unsigned int x27; unsigned int x28; bool x29; float x30; int x31; bool x32; int x33; bool x34; int x35; int x36; bool x37; int x38; struct FigTime { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_39_1_1; } x39; bool x40; }*)sceneSettings;
- (void)startFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 ofImageParam:(unsigned int)arg2;
- (void)startFxTimeForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)startFxTimeOfInputAToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)startFxTimeOfInputBToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)startFxTimeOfInputToFilter:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (double)startTimeForEffect:(id)arg1;
- (double)startTimeOfImageParm:(unsigned int)arg1 forEffect:(id)arg2;
- (double)startTimeOfInputAToTransition:(id)arg1;
- (double)startTimeOfInputBToTransition:(id)arg1;
- (double)startTimeOfInputToFilter:(id)arg1;
- (double)timelineDurationForEffect:(id)arg1;
- (unsigned long long)timelineFpsDenominatorForEffect:(id)arg1;
- (unsigned long long)timelineFpsNumeratorForEffect:(id)arg1;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromImageTime:(union { double x1; struct { /* ? */ } *x2; })arg2 forParmId:(unsigned int)arg3;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromInputATime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromInputBTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromInputTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (double)timelineTimeFromImageTime:(double)arg1 forParmId:(unsigned int)arg2 forEffect:(id)arg3;
- (double)timelineTimeFromInputATime:(double)arg1 forTransition:(id)arg2;
- (double)timelineTimeFromInputBTime:(double)arg1 forTransition:(id)arg2;
- (double)timelineTimeFromInputTime:(double)arg1 forFilter:(id)arg2;
- (double)transitionTimeFractionAtTime:(double)arg1;
- (union { double x1; struct { /* ? */ } *x2; })zeroTime;

@end
