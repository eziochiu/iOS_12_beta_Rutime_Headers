/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFExternalPasswordCredentialServiceViewController : SFPasswordServiceViewController <SFCredentialProviderExtensionManagerObserver, SFExternalPasswordCredentialServiceViewControllerProtocol, _ASPasswordCredentialAuthenticationViewControllerDelegate, _SFAuthenticationClient, _SFAuthenticationContextDelegate> {
    _SFAuthenticationContext * _authenticationContext;
    _ASPasswordCredentialAuthenticationViewController * _extensionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (id)_authenticationContext;
- (void)_dismiss;
- (id)authenticationCustomUIProgressObserverForContext:(id)arg1;
- (bool)authenticationEnabledForContext:(id)arg1;
- (id)authenticationMessageForContext:(id)arg1;
- (void)autoFillWithCredentialIdentity:(id)arg1;
- (bool)contextRequiresSessionBasedAuthentication:(id)arg1;
- (bool)contextShouldAllowMultipleBiometricFailures:(id)arg1;
- (bool)contextShouldAllowPasscodeFallback:(id)arg1;
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1;
- (bool)displayMessageAsTitleForContext:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)passcodePromptForContext:(id)arg1;
- (void)passwordCredentialAuthenticationViewController:(id)arg1 didFinishWithCredential:(id)arg2 completion:(id /* block */)arg3;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg1;

@end
