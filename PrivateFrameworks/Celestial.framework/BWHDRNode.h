/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWHDRNode : BWNode {
    bool  _alwaysRequestsPreBracketedEV0;
    int  _bracketCount;
    int  _clientPID;
    int (* _createSampleBufferProcessorFunction;
    FigCaptureStillImageSettings * _currentRequestedStillImageCaptureSettings;
    BWStillImageCaptureSettings * _currentResolvedStillImageCaptureSettings;
    unsigned int  _emittedFrameOrErrorCount;
    NSArray * _exposureValues;
    struct opaqueCMSampleBuffer {} * _pendingBracketBuffers;
    bool  _preBracketedFrameExpected;
    bool  _preBracketedFrameReceived;
    NSMutableArray * _receivedNodeErrors;
    struct OpaqueFigSampleBufferProcessor { } * _sampleBufferProcessor;
    NSDictionary * _sensorIDDictionary;
    FigCapturePixelConverter * _stereoFusionPixelConverter;
    bool  _supportsStereoFusionCaptures;
    BWPixelBufferPool * _telephotoHDREV0DisparityBufferPool;
    struct OpaqueVTPixelTransferSession { } * _telephotoHDREV0DisparityCopySession;
    struct opaqueCMFormatDescription { } * _telephotoHDREV0DisparityFormatDescription;
}

+ (void)initialize;

- (void)_clearCaptureRequestState;
- (void)_configureCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2;
- (void)_emitNodeErrorToReportFailedOutputFrame;
- (void)_emitNodeErrorsIfNecessary;
- (void)_hdrProcessorOutputReady:(int)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (id)_initWithClientPID:(int)arg1 sensorIDDictionary:(id)arg2 sbpCreationFunction:(int (*)arg3;
- (bool)_receivedExpectedNumberOfInputFramesOrErrors;
- (int)_setupSampleBufferProcessor;
- (bool)alwaysRequestsPreBracketedEV0;
- (bool)attachesInputBracketToOutputSampleBuffer;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithClientPID:(int)arg1 sensorIDDictionary:(id)arg2;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setAlwaysRequestsPreBracketedEV0:(bool)arg1;
- (void)setAttachesInputBracketToOutputSampleBuffer:(bool)arg1;
- (void)setSupportsStereoFusionCaptures:(bool)arg1;
- (bool)supportsStereoFusionCaptures;

@end
