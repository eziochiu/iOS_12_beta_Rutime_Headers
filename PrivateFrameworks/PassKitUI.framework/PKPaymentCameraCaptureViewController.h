/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentCameraCaptureViewController : CRCameraReader <CRCameraReaderDelegate, PKPaymentSetupHideSetupLaterButtonProtocol> {
    PKPaymentSetupBrowseProductsViewController * _browseCardsController;
    <PKPaymentCameraCaptureViewControllerDelegate> * _cameraCaptureDelegate;
    UIView * _cameraInstructionContainerView;
    PKCameraCaptureInstructionView * _cameraInstructionView;
    UIView * _cameraView;
    long long  _context;
    bool  _hideSetupLaterButton;
    PKPaymentCardManualEntryViewController * _manualEntryController;
    NSArray * _outputObjects;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideSetupLaterButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_manualEntryButtonPressed:(id)arg1;
- (void)_pushManualEntryViewController;
- (void)_setupLater:(id)arg1;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)cameraReaderDidEnd:(id)arg1;
- (void)dealloc;
- (bool)hideSetupLaterButton;
- (id)init;
- (id)initWithCameraCaptureDelegate:(id)arg1;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3;
- (void)loadView;
- (void)pk_applyAppearance:(id)arg1;
- (void)setHideSetupLaterButton:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
