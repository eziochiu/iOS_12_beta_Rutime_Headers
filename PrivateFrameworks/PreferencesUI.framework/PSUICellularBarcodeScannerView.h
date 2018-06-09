/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICellularBarcodeScannerView : UIView <AVCaptureMetadataOutputObjectsDelegate> {
    bool  _canUseCamera;
    AVCaptureSession * _captureSession;
    <PSUICellularBarcodeScannerCaptureDelegate> * _delegate;
    AVCaptureDeviceInput * _deviceInput;
    NSObject<OS_dispatch_queue> * _metadataQueue;
    AVCaptureVideoPreviewLayer * _previewLayer;
}

@property (nonatomic, readonly) bool canUseCamera;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSUICellularBarcodeScannerCaptureDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRunning;
@property (nonatomic, readonly) AVCaptureVideoPreviewLayer *previewLayer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_changeCameraConfiguration;
- (void)autoExposeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)autoFocusAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)canUseCamera;
- (void)dealloc;
- (id)delegate;
- (void)handleRuntimeError:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (bool)isRunning;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)previewLayer;
- (void)setDelegate:(id)arg1;
- (void)setupCameraSession;
- (void)startRunning;
- (void)stopRunning;

@end
