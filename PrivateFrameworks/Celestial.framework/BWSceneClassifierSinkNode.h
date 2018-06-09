/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWSceneClassifierSinkNode : BWSinkNode {
    BWFigVideoCaptureDevice * _device;
    NSObject<OS_dispatch_queue> * _deviceQueue;
    struct { 
        unsigned short major; 
        unsigned short minor; 
        unsigned short patch; 
    }  _expectedVersion;
    int  _maxDebugOverlaySceneCount;
    BWInferenceResult * _mostRecentSmartCameraResult;
    <BWQRCodeSceneObserver> * _qrCodeSceneObserver;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _resultLock;
}

@property (readonly) NSString *babySceneConfidence;
@property (readonly) NSString *brightStageSceneConfidence;
@property (readonly) NSString *documentSceneConfidence;
@property (readonly) NSString *petSceneConfidence;
@property (nonatomic) <BWQRCodeSceneObserver> *qrCodeSceneObserver;
@property (readonly) NSString *qrSceneConfidence;
@property (readonly) NSArray *sceneConfidences;
@property (readonly) NSString *sunsetSunriseSceneConfidence;

+ (void)initialize;

- (id)_stringRepresentationOfMostRecentInferenceForKey:(id)arg1;
- (id)babySceneConfidence;
- (id)brightStageSceneConfidence;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)documentSceneConfidence;
- (id)initWithCaptureDevice:(id)arg1 version:(struct { unsigned short x1; unsigned short x2; unsigned short x3; })arg2;
- (id)nodeSubType;
- (id)petSceneConfidence;
- (id)qrCodeSceneObserver;
- (id)qrSceneConfidence;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)sceneConfidences;
- (void)setQrCodeSceneObserver:(id)arg1;
- (id)sunsetSunriseSceneConfidence;

@end
