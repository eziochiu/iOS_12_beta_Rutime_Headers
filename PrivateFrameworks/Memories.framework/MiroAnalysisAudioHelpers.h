/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAnalysisAudioHelpers : NSObject {
    struct OpaqueAudioComponentInstance { } * _audioUnitEPVAD;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentRangeStartTime;
    struct AUOutputBL { struct CAStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; char *x2; struct AudioBufferList {} *x3; unsigned int x4; unsigned int x5; unsigned int x6; } * _floatAudioBufferList;
    bool  _initializedAudioUnit;
    struct AUOutputBL { struct CAStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; char *x2; struct AudioBufferList {} *x3; unsigned int x4; unsigned int x5; unsigned int x6; } * _intAudioBufferList;
    struct LkFsMeasure { unsigned int x1; unsigned int x2; long long x3; bool x4; unsigned int x5; unsigned int x6; double x7; double x8; double x9; double x10; long long x11; long long x12; unsigned int x13; unsigned int x14; unsigned int x15; float x16[30][6]; float *x17; float *x18; float *x19; struct DspLibBiquad {} *x20; struct DspLibBiquad {} *x21; } * _loudnessAnalyzer;
    struct vector<float, std::__1::allocator<float> > { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::__1::allocator<float> > { 
            float *__value_; 
        } __end_cap_; 
    }  _loudnessSampleBuffer;
    struct vector<double, std::__1::allocator<double> > { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::__1::allocator<double> > { 
            double *__value_; 
        } __end_cap_; 
    }  _momentaryEnergyValues;
    unsigned int  _numberOfSamplesPerBuffer;
    float  _peakValue;
    struct CAStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } * _processFormat;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _recordingEndTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _recordingStartTime;
    struct AUTimestampGenerator { struct AudioTimeStamp { double x_1_1_1; unsigned long long x_1_1_2; double x_1_1_3; unsigned long long x_1_1_4; struct SMPTETime { short x_5_2_1; short x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; short x_5_2_6; short x_5_2_7; short x_5_2_8; short x_5_2_9; } x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; } x1; double x2; double x3; struct AudioTimeStamp { double x_4_1_1; unsigned long long x_4_1_2; double x_4_1_3; unsigned long long x_4_1_4; struct SMPTETime { short x_5_2_1; short x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; short x_5_2_6; short x_5_2_7; short x_5_2_8; short x_5_2_9; } x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; } x4; struct AudioTimeStamp { double x_5_1_1; unsigned long long x_5_1_2; double x_5_1_3; unsigned long long x_5_1_4; struct SMPTETime { short x_5_2_1; short x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; short x_5_2_6; short x_5_2_7; short x_5_2_8; short x_5_2_9; } x_5_1_5; unsigned int x_5_1_6; unsigned int x_5_1_7; } x5; } * _timeGenerator;
    NSArray * _timeRanges;
    long long  projectNaturalFrameRate;
}

@property (nonatomic) long long projectNaturalFrameRate;
@property (nonatomic) NSArray *timeRanges;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_outputLoudnessRangeWithDetectionTime:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)_outputVoiceRangeWithDetectionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)_processAudioSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 options:(unsigned long long)arg2 voiceRange:(id*)arg3;
- (bool)_processFloatBufferWithNumberOfFrames:(long long)arg1 options:(unsigned long long)arg2 voiceRange:(id*)arg3;
- (void)_processSamplesForPeaksAndLoudness:(float*)arg1 numberOfFrames:(unsigned int)arg2 sampleRate:(float)arg3;
- (int)_setPropertiesWithNumberOfSamplesPerBuffer:(unsigned int)arg1;
- (bool)_setupAndStartReadingTrack:(id)arg1 usingTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 outputSettings:(id)arg3 assetReader:(id*)arg4 trackOutput:(id*)arg5 error:(id*)arg6;
- (bool)_startLoudnessDetection;
- (bool)_startProcessingWithStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 audioStreamDescription:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg2 numberOfSamplesPerBuffer:(unsigned int)arg3;
- (bool)_startVoiceDetection;
- (void)_stopDetectingLoudnessWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 loudnessRanges:(id*)arg2;
- (void)_stopDetectingVoiceWithEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 lastVoiceRanges:(id*)arg2;
- (void)_stopProcessing;
- (void)dealloc;
- (id)init;
- (void)processAVAsset:(id)arg1 options:(unsigned long long)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (long long)projectNaturalFrameRate;
- (void)setProjectNaturalFrameRate:(long long)arg1;
- (void)setTimeRanges:(id)arg1;
- (id)timeRanges;

@end
