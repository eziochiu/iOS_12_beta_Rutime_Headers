/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceSynchronizerNode : BWNode {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bufferServicingLock;
    unsigned short  _errorHandlingModel;
    NSMutableArray * _inferenceBufferQueue;
    BWNodeError * _inferenceError;
    unsigned char  _maximumNumberOfInflightBuffers;
    int  _mostRecentEmittedCaptureIdentifier;
    int  _mostRecentInferenceCaptureIdentifier;
    int  _mostRecentVideoCaptureIdentifier;
    unsigned char  _numberOfEndOfDatasReceived;
    int  _numberOfInferenceWraparounds;
    int  _numberOfVideoWraparounds;
    NSMutableArray * _videoBufferQueue;
    BWNodeError * _videoError;
}

@property (nonatomic, readonly) unsigned short errorHandlingModel;
@property (nonatomic, readonly) BWNodeInput *inferenceInput;
@property (nonatomic, readonly) BWNodeInput *videoInput;

+ (void)initialize;

- (void)_attemptBufferOrErrorEmission;
- (id)_bufferArrayToString:(id)arg1;
- (struct opaqueCMSampleBuffer { }*)_synchronizedInferenceBufferForIdentifier:(unsigned int)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (unsigned short)errorHandlingModel;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2;
- (id)inferenceInput;
- (id)init;
- (id)initWithErrorHandlingModel:(unsigned short)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)videoInput;

@end
