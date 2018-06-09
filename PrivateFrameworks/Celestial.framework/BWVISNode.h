/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWVISNode : BWNode {
    NSObject<OS_dispatch_semaphore> * _emitSampleBufferSemaphore;
    bool  _fillExtendedRowsOfOutputBuffer;
    bool  _flushingSBP;
    bool  _irisVIS;
    struct OpaqueFigCaptureISPProcessingSession { } * _ispProcessingSession;
    bool  _logStripProcessingTiming;
    int  _numberOfBuffersEmitted;
    int  _numberOfTimesWaited;
    bool  _offline;
    NSDictionary * _offlineCameraInfoByPortType;
    struct { 
        int width; 
        int height; 
    }  _offlineOutputDimensions;
    NSMutableDictionary * _optionsDict;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    unsigned long long  _outputHeight;
    unsigned long long  _outputWidth;
    struct OpaqueFigSampleBufferProcessor { } * _sampleBufferProcessor;
    NSMutableArray * _sbufsBeingProcessed;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sbufsBeingProcessedLock;
    bool  _sphereVideoEnabled;
    int  _stabilizationMethod;
    int  _stabilizationType;
    bool  _stabilizationTypeIsISPProcessingBased;
    NSArray * _supportedOutputPixelFormats;
}

+ (void)initialize;

- (int)_asynchronouslyStripProcessSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 withStabilizationParameters:(id)arg2;
- (void)_didStripProcessSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_ensureSemaphoreIsBalanced;
- (void)_flushBuffers;
- (void)_logSampleBuffersStuckInISPProcessingSession;
- (struct __CVBuffer { }*)_newOutputPixelBuffer;
- (void)_prepareISPProcessingSession;
- (int)_setupSampleBufferProcessor;
- (void)_tallyAndEmitDroppedSample:(id)arg1;
- (void)_tallyAndEmitSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_updateOutputRequirements;
- (void)_willStripProcessSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)emitSampleBufferSemaphore;
- (id)initWithSensorIDDict:(id)arg1 stabilizationMethod:(int)arg2 stabilizationType:(int)arg3 ispProcessingSession:(struct OpaqueFigCaptureISPProcessingSession { }*)arg4 requiredFormat:(id)arg5 activeMaxFrameRate:(float)arg6 motionAttachmentsSource:(int)arg7 fillExtendedRowsOfOutputBuffer:(bool)arg8 offlineOutputDimensions:(struct { int x1; int x2; })arg9 irisVISCleanOutputRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg10 cameraInfoByPortType:(id)arg11;
- (id)nodeSubType;
- (id)nodeType;
- (unsigned long long)outputHeight;
- (unsigned long long)outputWidth;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setEmitSampleBufferSemaphore:(id)arg1;
- (void)setOutputHeight:(unsigned long long)arg1;
- (void)setOutputWidth:(unsigned long long)arg1;
- (void)setSphereVideoEnabled:(bool)arg1;
- (bool)sphereVideoEnabled;

@end
