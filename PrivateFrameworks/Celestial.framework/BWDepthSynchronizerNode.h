/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWDepthSynchronizerNode : BWNode {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bufferServicingLock;
    NSMutableArray * _depthBufferQueue;
    int  _depthIDWrapAroundCounter;
    BWNodeInput * _depthInput;
    bool  _discardsDegradedDepthBuffers;
    BWNodeError * _errorForDepthInput;
    BWNodeError * _errorForImageInput;
    NSMutableArray * _imageBufferQueue;
    int  _imageIDWrapAroundCounter;
    BWNodeInput * _imageInput;
    int  _lastEmittedFrameCaptureID;
    int  _lastReceivedDepthID;
    int  _lastReceivedImageID;
    int  _maxQueueDepth;
    int  _numEODMessagesReceived;
    bool  _streaming;
}

@property (readonly) BWNodeInput *depthInput;
@property (nonatomic) bool discardsDegradedDepthBuffers;
@property (readonly) BWNodeInput *imageInput;

+ (void)initialize;

- (bool)_attachDepthDataToSampleBufferOrReportDepthMissing:(struct opaqueCMSampleBuffer { }*)arg1 isDepthMissing:(bool*)arg2;
- (id)_bufferArrayToString:(id)arg1;
- (void)_cleanupDepthBufferQueue;
- (int)_frameCaptureID:(struct opaqueCMSampleBuffer { }*)arg1;
- (bool)_isDepthExpectedForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)_tryToEmitBuffers;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (id)depthInput;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (bool)discardsDegradedDepthBuffers;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2;
- (id)imageInput;
- (id)initForStreaming:(bool)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setDiscardsDegradedDepthBuffers:(bool)arg1;

@end
