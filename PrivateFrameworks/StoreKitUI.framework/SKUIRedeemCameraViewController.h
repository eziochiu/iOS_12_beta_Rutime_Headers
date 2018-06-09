/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemCameraViewController : SKUIRedeemStepViewController <CRCodeRedeemerControllerDelegate, SKUIRedeemCameraViewControllerDelegate, SKUIRedeemCameraViewDelegate> {
    UIBarButtonItem * _activityBarButtonItem;
    bool  _alreadyPushed;
    CRCodeRedeemerController * _camera;
    <SKUIRedeemViewCameraOverrideDelegate> * _cameraOverrideDelegate;
    long long  _category;
    <SKUIRedeemCameraViewControllerDelegate> * _delegate;
    UIBarButtonItem * _flipButton;
    bool  _fullscreen;
    NSString * _initialCode;
    UIBarButtonItem * _redeemButton;
    SKUIRedeem * _successfulRedeem;
}

@property (nonatomic) <SKUIRedeemViewCameraOverrideDelegate> *cameraOverrideDelegate;
@property (nonatomic, readonly) long long category;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIRedeemCameraViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *initialCode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)SKUIRedeemCameraView:(id)arg1 textFieldDidChange:(id)arg2;
- (void)SKUIRedeemCameraView:(id)arg1 textFieldDidRedeem:(id)arg2;
- (void)SKUIRedeemPreflightImagesDidLoad:(id)arg1;
- (void)_cameraRedeemDidFinish:(id)arg1 error:(id)arg2;
- (void)_cancelAction:(id)arg1;
- (bool)_enabled;
- (void)_flipAction:(id)arg1;
- (void)_performRedeemOperationWithCode:(id)arg1 cameraRecognized:(bool)arg2 allowOverride:(bool)arg3 completion:(id /* block */)arg4;
- (void)_redeemAction:(id)arg1;
- (void)_redeemDidFinish:(id)arg1 error:(id)arg2;
- (void)_setEnabled:(bool)arg1;
- (void)_updateRightBarButtonItemsForRedeemInputState:(long long)arg1;
- (id)cameraOverrideDelegate;
- (void)cancelRedeemerViewForSKUIRedeemCameraView:(id)arg1;
- (long long)category;
- (void)codeRedeemerController:(id)arg1 didEndWithInfo:(id)arg2;
- (void)codeRedeemerControllerDidCancel:(id)arg1;
- (void)codeRedeemerControllerDidDisplayMessage:(id)arg1;
- (id)contentScrollView;
- (void)dealloc;
- (id)delegate;
- (bool)disablesAutomaticKeyboardDismissal;
- (id)initWithRedeemCategory:(long long)arg1;
- (id)initWithRedeemCategoryFullscreen:(long long)arg1;
- (id)initialCode;
- (void)loadView;
- (void)performRedeemOperationWithCode:(id)arg1 cameraRecognized:(bool)arg2 completion:(id /* block */)arg3;
- (void)presentFullScreenCameraViewForSKUIRedeemCameraView:(id)arg1;
- (void)redeemCameraViewController:(id)arg1 didFinishWithRedeem:(id)arg2;
- (id)redeemerViewForSKUIRedeemCameraView:(id)arg1;
- (void)setCameraOverrideDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInitialCode:(id)arg1;
- (void)showITunesPassLearnMoreForSKUIRedeemCameraView:(id)arg1;
- (void)startRedeemerViewForSKUIRedeemCameraView:(id)arg1;

@end
