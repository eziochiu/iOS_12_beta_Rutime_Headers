/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARFaceTrackingImageSensor : ARImageSensor <AVCaptureMetadataOutputObjectsDelegate> {
    NSArray * _availableMetadataObjectTypes;
    AVCaptureDepthDataOutput * _depthDataOutput;
    unsigned long long  _droppedFramesPerSec;
    NSObject<OS_dispatch_semaphore> * _faceDataSemaphore;
    ARFaceData * _latestFaceData;
    AVCaptureMetadataOutput * _metaDataOutput;
    bool  _recordingMode;
    NSString * _requiredFaceMetaDataObjectType;
    bool  _signpostFirstFaceDone;
    bool  _signpostFirstFrameDone;
    double  _startTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool recordingMode;
@property (nonatomic, copy) NSString *requiredFaceMetaDataObjectType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_configureMetaDataOutput;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)capturedSynchedOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromVideoConnection:(id)arg3 metaDataOutput:(id)arg4 didOutputMetadataObjects:(id)arg5 didOutputDepthData:(id)arg6 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7;
- (void)configureCaptureDevice;
- (id)configureCaptureSession;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (id)outputsForSynchronizer;
- (unsigned long long)providedDataTypes;
- (bool)recordingMode;
- (id)requiredFaceMetaDataObjectType;
- (void)setRecordingMode:(bool)arg1;
- (void)setRequiredFaceMetaDataObjectType:(id)arg1;
- (void)start;
- (void)stop;

@end
