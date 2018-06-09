/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCloudPhotoWelcomeViewController : UIViewController <AAUIGenericTermsRemoteUIDelegate, PSCloudStorageOffersManagerDelegate, PXCloudPhotoWelcomeViewDelegate> {
    bool  _enableOnAppear;
    PSCloudStorageOffersManager * _offersManager;
    bool  _requireStorageUpgrade;
    AAUIGenericTermsRemoteUI * _termsManager;
    PXCloudPhotoWelcomeView * _welcomeView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXCloudPhotoWelcomeView *welcomeView;

+ (bool)shouldPresentCloudPhotoWelcomeViewController;

- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_continueWithoutStoragePurchase:(id)arg1;
- (void)_dismiss;
- (void)_enableButtons;
- (void)_enableCPLDataClass;
- (void)_enableCloudPhotoLibrary;
- (void)_handleEnableError:(id)arg1;
- (void)_handleGoButtonTapped;
- (void)_presentStoragePurchaseController;
- (void)_updateCurrentActivity;
- (void)cloudPhotoWelcomeViewGoButtonTapped:(id)arg1;
- (void)cloudPhotoWelcomeViewLearnMoreTapped:(id)arg1;
- (void)cloudPhotoWelcomeViewNotNowButtonTapped:(id)arg1;
- (void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(bool)arg2;
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)manager:(id)arg1 willPresentViewController:(id)arg2;
- (void)managerDidCancel:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)setWelcomeView:(id)arg1;
- (bool)shouldAutorotate;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)welcomeView;

@end
