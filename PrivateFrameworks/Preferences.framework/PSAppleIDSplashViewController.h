/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSAppleIDSplashViewController : PSListController <AKAppleIDAuthenticationInAppContextPasswordDelegate, RemoteUIControllerDelegate> {
    AKAppleIDAuthenticationController * _authController;
    UIBarButtonItem * _cancelButtonBarItem;
    PSSpecifier * _createNewAccountButtonSpecifier;
    PSSpecifier * _createNewAccountGroupSpecifier;
    NSTimer * _idleJiggleTimer;
    bool  _isPasswordDirty;
    bool  _isPresentedModally;
    CNMonogrammer * _monogrammer;
    UIBarButtonItem * _nextButtonBarItem;
    NSString * _password;
    id /* block */  _passwordHandler;
    PSSpecifier * _passwordSpecifier;
    void * _powerAssertion;
    id /* block */  _remoteUICompletion;
    RemoteUIController * _remoteUIController;
    bool  _shouldHideBackButton;
    bool  _shouldShowCreateAppleIDButton;
    UIImageView * _silhouetteView;
    UIActivityIndicatorView * _spinner;
    UIBarButtonItem * _spinnerBarItem;
    id  _textFieldTextDidChangeObserver;
    PSSpecifier * _userSpecifier;
    NSString * _username;
}

@property (nonatomic, readonly) AKAppleIDAuthenticationController *authenticationController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=setPresentedModally:, nonatomic) bool isPresentedModally;
@property (nonatomic) bool shouldShowCreateAppleIDButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginiCloudCreationFlowWithContinuationData:(id)arg1 completion:(id /* block */)arg2;
- (void)_cancelButtonWasTapped:(id)arg1;
- (void)_cancelPasswordDelegateIfNecessary;
- (void)_createNewAppleIDButtonWasTapped:(id)arg1;
- (double)_heightForCreateNewAccountFooterWithWidth:(double)arg1;
- (double)_heightForCreateNewAccountSpecifierWithWidth:(double)arg1;
- (void)_iForgotButtonWasTapped:(id)arg1;
- (id)_monogrammer;
- (void)_openWebBasedCredentialRecoveryFlow;
- (id)_passwordForSpecifier:(id)arg1;
- (void)_presentAppleIDPrivacyInformationPane;
- (void)_presentInvalidUsernameAlert;
- (void)_reloadPasswordSpecifier;
- (bool)_runningInMail;
- (void)_setInteractionEnabled:(bool)arg1;
- (void)_setPassword:(id)arg1 withSpecifier:(id)arg2;
- (void)_setUsername:(id)arg1 withSpecifier:(id)arg2;
- (bool)_shouldAnchorCreateAccountButton;
- (bool)_shouldShowCancelDone;
- (void)_signInButtonWasTapped:(id)arg1;
- (void)_signInWithUsername:(id)arg1 password:(id)arg2;
- (id)_specifierForGroupWithiForgotLink;
- (id)_specifierForLoginPasswordForm;
- (id)_specifierForLoginUserForm;
- (id)_specifiersForCreateNewAccount;
- (void)_textFieldValueDidChange:(id)arg1;
- (void)_updateSignInButton;
- (id)_usernameForSpecifier:(id)arg1;
- (id)authenticationController;
- (void)context:(id)arg1 needsPasswordWithCompletion:(id /* block */)arg2;
- (void)createNewAppleIDWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)didFinishAuthWithContext:(id)arg1 results:(id)arg2 error:(id)arg3;
- (void)handleAuthCompletionWithResults:(id)arg1;
- (void)hideBusyUI;
- (bool)isPresentedModally;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)returnPressedAtEnd;
- (id)serviceDescription;
- (id)serviceIcon;
- (id)serviceName;
- (void)setPresentedModally:(bool)arg1;
- (void)setShouldShowCreateAppleIDButton:(bool)arg1;
- (void)setUsername:(id)arg1;
- (void)setUsernameEnabled:(bool)arg1;
- (bool)shouldShowCreateAppleIDButton;
- (void)showBusyUI;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willBeginAuthWithContext:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
