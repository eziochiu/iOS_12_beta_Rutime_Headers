/* made by EzioChiu
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface _ASCredentialProviderExtensionHostContext : NSExtensionContext <_ASCredentialProviderExtensionHostContextProtocol> {
    <_ASCredentialProviderExtensionHostContextDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_ASCredentialProviderExtensionHostContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)delegate;
- (void)prepareToCancelRequestWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)prepareToCompleteExtensionConfigurationRequestWithCompletion:(id /* block */)arg1;
- (void)prepareToCompleteRequestWithSelectedCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
