/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVideoTrackSubsamplingDecoder : VCPVideoTrackDecoder {
    AVAssetReader * _assetReader;
    struct opaqueCMSampleBuffer { } * _currentSample;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _decodeEnd;
    struct opaqueCMSampleBuffer { } * _nextSample;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _nextSampleTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _sampleDuration;
    AVAssetReaderTrackOutput * _trackOutput;
}

- (void).cxx_destruct;
- (struct opaqueCMSampleBuffer { }*)copyNextSampleBuffer;
- (void)dealloc;
- (struct opaqueCMSampleBuffer { }*)getNextCaptureSampleBuffer;
- (id)initWithTrack:(id)arg1 timerange:(const struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2 atInterval:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3;
- (long long)status;

@end
