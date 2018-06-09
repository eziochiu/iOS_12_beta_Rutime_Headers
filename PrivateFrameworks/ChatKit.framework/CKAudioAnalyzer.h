/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAudioAnalyzer : NSObject <Endpointer> {
    struct OpaqueAudioComponentInstance { } * _audioUnitEPVAD;
    float  _decoderLatency;
    bool  _detectedMusic;
    double  _endWaitTime;
    int  _endpointMode;
    NSMutableData * _floatSampleBuffer;
    struct { 
        float rms; 
        unsigned long long zc; 
    }  _frameAnalysisArray;
    unsigned int  _frameRate;
    unsigned long long  _framesSeen;
    float  _heuristicTransitionRatio;
    float  _heuristicWindowSec;
    unsigned int  _inMaxSamplesPerBuffer;
    double  _interspeechWaitTime;
    NSDictionary * _modelDict;
    double  _sampleRate;
    double  _samplesSeen;
    float  _speechPaddingFactor;
    double  _startWaitTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) float decoderLatency;
@property (readonly, copy) NSString *description;
@property double endWaitTime;
@property int endpointMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) float heuristicTransitionRatio;
@property (nonatomic) float heuristicWindowSec;
@property (nonatomic) unsigned int inMaxSamplesPerBuffer;
@property double interspeechWaitTime;
@property (nonatomic) float speechPaddingFactor;
@property double startWaitTime;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (bool)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned int)arg2;
- (void)dealloc;
- (float)decoderLatency;
- (double)endWaitTime;
- (int)endpointMode;
- (int)getStatus:(struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)arg1;
- (float)heuristicTransitionRatio;
- (float)heuristicWindowSec;
- (unsigned int)inMaxSamplesPerBuffer;
- (id)init;
- (double)interspeechWaitTime;
- (void)reset;
- (void)setDecoderLatency:(float)arg1;
- (void)setEndWaitTime:(double)arg1;
- (void)setEndpointMode:(int)arg1;
- (void)setHeuristicTransitionRatio:(float)arg1;
- (void)setHeuristicWindowSec:(float)arg1;
- (void)setInMaxSamplesPerBuffer:(unsigned int)arg1;
- (void)setInterspeechWaitTime:(double)arg1;
- (void)setSpeechPaddingFactor:(float)arg1;
- (void)setStartWaitTime:(double)arg1;
- (float)speechPaddingFactor;
- (double)startWaitTime;

@end
