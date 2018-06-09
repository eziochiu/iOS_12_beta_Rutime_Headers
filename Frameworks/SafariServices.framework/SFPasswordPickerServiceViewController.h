/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFPasswordPickerServiceViewController : SFPasswordServiceViewController <SFCredentialProviderExtensionManagerObserver, SFPasswordPickerServiceViewControllerProtocol, _ASCredentialProviderExtensionViewControllerDelegate, _ASPasswordCredentialAuthenticationViewControllerDelegate, _SFAuthenticationClient, _SFAuthenticationContextDelegate> {
    double  _authenticationGracePeriod;
    _SFAuthenticationContext * _context;
    _ASPasswordCredentialAuthenticationViewController * _externalCredentialViewController;
    bool  _hasAuthenticationForOtherPasswords;
    _SFPasswordPickerViewController * _passwordPickerViewController;
    bool  _presentInPopover;
    NSString * _remoteAppID;
    NSString * _remoteLocalizedAppName;
    NSString * _remoteUnlocalizedAppName;
    NSURL * _webViewURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (id)_actionForPresentingPasswordManagerExtension:(id)arg1;
- (void)_authenticateToViewOtherPasswordsWithCompletion:(id /* block */)arg1;
- (id)_context;
- (void)_dismiss;
- (void)_fillCredential:(id)arg1 needsAuthentication:(bool)arg2;
- (void)_gatherAndShowPasswordsWithCompletion:(id /* block */)arg1;
- (void)authenticateToPresentInPopover:(bool)arg1 completion:(id /* block */)arg2;
- (id)authenticationCustomUIProgressObserverForContext:(id)arg1;
- (bool)authenticationEnabledForContext:(id)arg1;
- (id)authenticationMessageForContext:(id)arg1;
- (bool)contextRequiresSessionBasedAuthentication:(id)arg1;
- (bool)contextShouldAllowMultipleBiometricFailures:(id)arg1;
- (bool)contextShouldAllowPasscodeFallback:(id)arg1;
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1;
- (void)credentialProviderExtensionViewController:(id)arg1 didFinishWithCredential:(id)arg2 completion:(id /* block */)arg3;
- (bool)displayMessageAsTitleForContext:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)passcodePromptForContext:(id)arg1;
- (void)passwordCredentialAuthenticationViewController:(id)arg1 didFinishWithCredential:(id)arg2 completion:(id /* block */)arg3;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg1;
- (void)setAuthenticationGracePeriod:(double)arg1;
- (void)setRemoteAppID:(id)arg1;
- (void)setRemoteLocalizedAppName:(id)arg1;
- (void)setRemoteUnlocalizedAppName:(id)arg1;
- (void)setWebViewURL:(id)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
