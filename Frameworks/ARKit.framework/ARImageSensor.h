/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARImageSensor : NSObject <ARSensor, AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureDataOutputSynchronizerDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {
    AVCaptureAudioDataOutput * _audioOutput;
    AVCaptureDevice * _captureDevice;
    long long  _captureFramesPerSecond;
    NSObject<OS_dispatch_queue> * _captureQueue;
    AVCaptureSession * _captureSession;
    float  _defaultLensPosition;
    <ARSensorDelegate> * _delegate;
    bool  _interrupted;
    AVCaptureDataOutputSynchronizer * _outputSynchronizer;
    NSObject<OS_dispatch_queue> * _outputSynchronizerQueue;
    unsigned long long  _powerUsage;
    NSObject<OS_dispatch_queue> * _previousOutputCallbackQueue;
    <AVCaptureVideoDataOutputSampleBufferDelegate> * _previousOutputDelegate;
    bool  _previouslyRunning;
    bool  _running;
    ARImageSensorSettings * _settings;
    AVCaptureVideoDataOutput * _videoOutput;
}

@property (nonatomic, readonly) AVCaptureAudioDataOutput *audioOutput;
@property (nonatomic, readonly) AVCaptureDevice *captureDevice;
@property long long captureFramesPerSecond;
@property (nonatomic, readonly) AVCaptureSession *captureSession;
@property (readonly, copy) NSString *debugDescription;
@property float defaultLensPosition;
@property (nonatomic) <ARSensorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool interrupted;
@property (nonatomic, readonly) AVCaptureDataOutputSynchronizer *outputSynchronizer;
@property (nonatomic, readonly) NSArray *outputsForSynchronizer;
@property (nonatomic) unsigned long long powerUsage;
@property bool running;
@property (nonatomic, readonly, copy) ARImageSensorSettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AVCaptureVideoDataOutput *videoOutput;

+ (float)defaultLensPosition;

- (void).cxx_destruct;
- (void)_configureAudioCapturingForSession:(id)arg1;
- (void)_configureCameraExposureForDevice:(id)arg1;
- (void)_configureCameraFocusForDevice:(id)arg1;
- (void)_configureCameraWhiteBalanceForDevice:(id)arg1;
- (void)_configureFrameRateForDevice:(id)arg1;
- (void)_dispatchImageData:(id)arg1;
- (id)_setActiveFormat;
- (bool)_validateCameraAuthorization;
- (bool)_validateMicrophoneAuthorization;
- (id)audioOutput;
- (bool)canReconfigure:(id)arg1;
- (id)captureDevice;
- (long long)captureFramesPerSecond;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (id)captureSession;
- (void)captureSessionStateChanged:(id)arg1;
- (void)configureCaptureDevice;
- (id)configureCaptureSession;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (void)dealloc;
- (float)defaultLensPosition;
- (id)delegate;
- (void)enableAutoFocusForDevice:(id)arg1;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (bool)interrupted;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputSynchronizer;
- (id)outputsForSynchronizer;
- (unsigned long long)powerUsage;
- (unsigned long long)providedDataTypes;
- (void)reconfigure:(id)arg1;
- (bool)running;
- (void)setCaptureFramesPerSecond:(long long)arg1;
- (void)setDefaultLensPosition:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInterrupted:(bool)arg1;
- (void)setPowerUsage:(unsigned long long)arg1;
- (void)setRunning:(bool)arg1;
- (id)settings;
- (void)start;
- (void)stop;
- (id)videoOutput;

@end