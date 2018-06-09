/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKVideoRecorder : UIViewController <AVCaptureFileOutputRecordingDelegate> {
    AVCaptureDeviceInput * _audioInput;
    NSObject<OS_dispatch_queue> * _avCaptureSessionDispatchQueue;
    bool  _canceled;
    AVCaptureVideoPreviewLayer * _captureVideoPreviewLayer;
    long long  _currentDevice;
    <CKVideoRecorderDelegate> * _delegate;
    AVCaptureDevice * _frontFacingCamera;
    AVCaptureDeviceInput * _frontVideoInput;
    NSURL * _outputFileURL;
    bool  _previousStatusBarHidden;
    AVCaptureDevice * _rearFacingCamera;
    AVCaptureDeviceInput * _rearVideoInput;
    AVCaptureSession * _session;
    AVCaptureStillImageOutput * _stillImageOutput;
    AVCaptureMovieFileOutput * _videoOutput;
}

@property (nonatomic, retain) AVCaptureDeviceInput *audioInput;
@property (nonatomic) long long cameraDevice;
@property (nonatomic) bool canceled;
@property (nonatomic, retain) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKVideoRecorderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AVCaptureDeviceInput *frontVideoInput;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *outputFileURL;
@property (nonatomic, retain) AVCaptureDeviceInput *rearVideoInput;
@property (nonatomic, retain) AVCaptureSession *session;
@property (nonatomic, retain) AVCaptureStillImageOutput *stillImageOutput;
@property (readonly) Class superclass;
@property (nonatomic, retain) AVCaptureMovieFileOutput *videoOutput;

- (void).cxx_destruct;
- (id)_cameraWithPosition:(long long)arg1;
- (id)_configureFrontVideoInput;
- (id)_configureRearVideoInput;
- (id)audioDevice;
- (id)audioInput;
- (long long)cameraDevice;
- (void)cancel;
- (bool)canceled;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (id)captureVideoPreviewLayer;
- (void)dealloc;
- (id)delegate;
- (id)frontFacingCamera;
- (id)frontVideoInput;
- (id)init;
- (void)loadView;
- (id)outputFileURL;
- (id)rearFacingCamera;
- (id)rearVideoInput;
- (id)session;
- (void)setAudioInput:(id)arg1;
- (void)setCameraDevice:(long long)arg1;
- (void)setCanceled:(bool)arg1;
- (void)setCaptureVideoPreviewLayer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrontVideoInput:(id)arg1;
- (void)setOutputFileURL:(id)arg1;
- (void)setRearVideoInput:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setStillImageOutput:(id)arg1;
- (void)setVideoOutput:(id)arg1;
- (void)setupCamera:(id)arg1;
- (bool)startVideoCapture;
- (id)stillImageOutput;
- (void)stopVideoCapture;
- (void)takePicture;
- (id)videoOutput;
- (void)viewWillAppear:(bool)arg1;

@end
