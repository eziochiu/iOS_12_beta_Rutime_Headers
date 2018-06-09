/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKVideoMessageRecordingViewController : UIViewController <CKActionMenuControllerDelegate, CKVideoRecorderDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    UIImagePickerController * _cameraViewController;
    bool  _canceled;
    NSError * _captureError;
    unsigned long long  _enableCancel;
    id /* block */  _mediaExportCompletionBlock;
    CKMediaObject * _mediaObjectForSending;
    UIWindow * _overlayWindow;
    CKActionMenuItem * _photoMenuItem;
    UIView * _presentationView;
    bool  _presented;
    bool  _previewWarmedUp;
    bool  _recording;
    bool  _sending;
    bool  _showingVideo;
    UIButton * _swapCameraButton;
    CKRecordingElapsedTimeView * _timerView;
    UIView * _topBackgroundView;
    bool  _triedToRecord;
    CKActionMenuController * _videoActionMenuController;
    <CKVideoMessageRecordingViewControllerDelegate> * _videoMessageDelegate;
}

@property (nonatomic, retain) UIImagePickerController *cameraViewController;
@property (nonatomic) bool canceled;
@property (nonatomic, retain) NSError *captureError;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long enableCancel;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ mediaExportCompletionBlock;
@property (nonatomic, retain) CKMediaObject *mediaObjectForSending;
@property (nonatomic, retain) CKActionMenuItem *photoMenuItem;
@property (nonatomic) bool recording;
@property (nonatomic) bool sending;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIButton *swapCameraButton;
@property (nonatomic, retain) CKRecordingElapsedTimeView *timerView;
@property (nonatomic, retain) UIView *topBackgroundView;
@property (nonatomic) bool triedToRecord;
@property (nonatomic, retain) CKActionMenuController *videoActionMenuController;
@property (nonatomic) <CKVideoMessageRecordingViewControllerDelegate> *videoMessageDelegate;

- (void).cxx_destruct;
- (void)_animateVideoIn;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_cameraOrientationChanged:(id)arg1;
- (void)_cleanupCamera;
- (void)_previewWarmedUp:(id)arg1;
- (void)actionMenuControllerWillDismissActionMenu:(id)arg1 animated:(bool)arg2;
- (id)cameraViewController;
- (void)cancel;
- (void)cancelMenuItemAction:(id)arg1;
- (bool)canceled;
- (id)captureError;
- (id)childViewControllerForStatusBarHidden;
- (void)ckVideoRecorder:(id)arg1 imageDataCaptured:(id)arg2 error:(id)arg3;
- (void)ckVideoRecorder:(id)arg1 videoCaptured:(id)arg2 error:(id)arg3;
- (void)ckVideoRecorderRecordingCanceled:(id)arg1;
- (void)dealloc;
- (void)dismissWithCompletion:(id /* block */)arg1;
- (unsigned long long)enableCancel;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithPresentationView:(id)arg1;
- (id /* block */)mediaExportCompletionBlock;
- (id)mediaObjectForSending;
- (id)photoMenuItem;
- (void)photoMenuItemAction:(id)arg1;
- (void)presentVideoActionMenuController;
- (void)presentWithCompletion:(id /* block */)arg1;
- (void)record;
- (bool)recording;
- (void)send;
- (bool)sending;
- (void)setCameraViewController:(id)arg1;
- (void)setCanceled:(bool)arg1;
- (void)setCaptureError:(id)arg1;
- (void)setEnableCancel:(unsigned long long)arg1;
- (void)setMediaExportCompletionBlock:(id /* block */)arg1;
- (void)setMediaObjectForSending:(id)arg1;
- (void)setPhotoMenuItem:(id)arg1;
- (void)setRecording:(bool)arg1;
- (void)setSending:(bool)arg1;
- (void)setSwapCameraButton:(id)arg1;
- (void)setTimerView:(id)arg1;
- (void)setTopBackgroundView:(id)arg1;
- (void)setTriedToRecord:(bool)arg1;
- (void)setVideoActionMenuController:(id)arg1;
- (void)setVideoMessageDelegate:(id)arg1;
- (bool)shouldAutorotate;
- (void)stopRecordingWithCompletionBlock:(id /* block */)arg1;
- (void)swapCamera:(id)arg1;
- (id)swapCameraButton;
- (void)takePictureWithCompletionBlock:(id /* block */)arg1;
- (id)timerView;
- (id)topBackgroundView;
- (bool)triedToRecord;
- (id)videoActionMenuController;
- (void)videoMenuItemAction:(id)arg1;
- (id)videoMessageDelegate;
- (void)viewDidLoad;

@end
