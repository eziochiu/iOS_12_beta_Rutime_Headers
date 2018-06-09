/* made by EzioChiu
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface _ASCredentialProviderExtensionConfigurationViewController : UIViewController <_ASCredentialProviderExtensionHostContextDelegate> {
    <_ASCredentialProviderExtensionConfigurationViewControllerDelegate> * _delegate;
    NSExtension * _extension;
    UIViewController * _remoteViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_ASCredentialProviderExtensionConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didInstantiateViewController:(id)arg1 withRequestID:(id)arg2 error:(id)arg3;
- (void)_finishWithSuccess:(bool)arg1 completion:(id /* block */)arg2;
- (void)_setRemoteViewController:(id)arg1;
- (void)beginConfiguringExtension;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (id)delegate;
- (id)initWithExtension:(id)arg1;
- (void)prepareToCancelRequestWithHostContext:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)prepareToCompleteExtensionConfigurationRequestWithHost:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
