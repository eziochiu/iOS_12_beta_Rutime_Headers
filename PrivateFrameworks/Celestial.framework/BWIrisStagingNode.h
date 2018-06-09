/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWIrisStagingNode : BWNode {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _beginIrisMovieCaptureTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _bufferingTime;
    <BWIrisStagingNodeEmitIrisRequestDelegate> * _delegate;
    int  _emittedIrisRequestCount;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _endIrisMovieCaptureTime;
    struct { long long x1; int x2; unsigned int x3; long long x4; } * _firstEmittedPTSArray;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _firstTrimStartPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _frameGovernorNextFrameThreshold;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _frameGovernorReferenceTime;
    unsigned long long  _inferencesInputIndex;
    NSMutableArray * _irisRequestsInFlight;
    NSMutableArray * _irisRequestsSoonToBeEmitted;
    NSMutableArray * _lastEmittedBuffers;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastProcessedVideoPTS;
    struct OpaqueCMClock { } * _masterClock;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _masterMovieStartPTS;
    NSURL * _masterMovieURL;
    BWMotionDataPreserver * _motionDataPreserver;
    int  _numEODMessagesReceived;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _readyToEmitPTS;
    BWIrisSequenceAdjuster * _sequenceAdjuster;
    NSMutableArray * _stagingQueues;
    struct OpaqueFigSimpleMutex { } * _stateMutex;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _targetFrameDuration;
    NSURL * _temporaryMovieDirectoryURL;
    int  _trimMethod;
    FigIrisAutoTrimmer * _trimmer;
    bool  _valveDraining;
    bool  _valveOpen;
}

@property struct { long long x1; int x2; unsigned int x3; long long x4; } beginIrisMovieCaptureTime;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } endIrisMovieCaptureTime;
@property (readonly) NSURL *temporaryMovieDirectoryURL;

+ (void)initialize;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })_adjustedStartTimeForTrimmedStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 ensuringAtLeast3FramesBeforeStillTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 ensuringFrameIsAfterTrimmedStartTime:(bool)arg3 butNotEarlierThanOriginalStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (int)_emissionStatusForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_emitBuffersThroughPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_emitBuffersThroughPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forInputIndex:(unsigned long long)arg2;
- (void)_emitIrisRequest:(id)arg1 withEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_emitIrisRequestsOlderThanTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 withEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_emitSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInputIndex:(unsigned long long)arg2;
- (unsigned long long)_emittingInputsCount;
- (void)_enqueueIrisRequest:(id)arg1;
- (void)_feedTrimmerWithInferencesSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_feedTrimmerWithVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)_fillInRefMovieStartAndTrimTimesForStillImageTimesBeforeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)_fillInStartAndTrimTimesForMasterMovieWithInfo:(id)arg1;
- (bool)_haveEnoughVideoStagedToStartFirstIrisRecording:(id)arg1 currentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_hostPTSForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (unsigned long long)_indexOfBufferBeforeOrEqualToHostPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inputIndex:(unsigned long long)arg2 tolerance:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (unsigned long long)_indexOfBufferBeforeOrEqualToPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inputIndex:(unsigned long long)arg2;
- (void)_informDelegateOfSoonToBeEmittedIrisRequestsForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_prepareToEmitFramesFromStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 throughEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_processQueuedVideoFrames;
- (void)_serviceIrisRequestsForCurrentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 emitBuffers:(bool)arg2 ensureStillImageTimesAreStaged:(bool)arg3;
- (void)_tagStillImageVISKeyFrames;
- (id)_temporaryURLForIrisWithSettingsID:(long long)arg1 isOriginalRecording:(bool)arg2;
- (void)_trimQueueForInputIndex:(unsigned long long)arg1;
- (void)_updateRetainedBufferCount;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })beginIrisMovieCaptureTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })bufferingTime;
- (void)closeValve;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })endIrisMovieCaptureTime;
- (bool)enqueueIrisRequest:(id)arg1;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithNumberOfVideoInputs:(unsigned long long)arg1 numberOfAudioInputs:(unsigned long long)arg2 numberOfMetadataInputs:(unsigned long long)arg3 autoTrimMethod:(int)arg4 temporaryMovieDirectoryURL:(id)arg5 emitIrisRequestDelegate:(id)arg6;
- (struct OpaqueCMClock { }*)masterClock;
- (bool)openValveWithIrisRequest:(id)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setBeginIrisMovieCaptureTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setBufferingTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setEndIrisMovieCaptureTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)setTargetFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })targetFrameDuration;
- (id)temporaryMovieDirectoryURL;

@end
