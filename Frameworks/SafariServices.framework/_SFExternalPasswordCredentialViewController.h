/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFExternalPasswordCredentialViewController : _SFPasswordViewController <SFExternalPasswordCredentialRemoteViewControllerDelegate> {
    SFExternalPasswordCredentialRemoteViewController * _remoteViewController;
    SFQueueingServiceViewControllerProxy<SFExternalPasswordCredentialServiceViewControllerProtocol> * _serviceProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFExternalPasswordCredentialViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_connectToServiceWithCompletion:(id /* block */)arg1;
- (id)_remoteViewController;
- (void)_setUpServiceProxyIfNeeded;
- (void)autoFillWithExternalCredential:(id)arg1;
- (void)presentExternalPasswordCredentialRemoteViewController:(id)arg1;
- (void)viewDidLoad;

@end
