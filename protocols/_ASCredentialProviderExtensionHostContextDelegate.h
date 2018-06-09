/* made by EzioChiu.
 */

@protocol _ASCredentialProviderExtensionHostContextDelegate <NSObject>

@optional

- (void)prepareToCancelRequestWithHostContext:(void *)arg1 error:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: _ASCredentialProviderExtensionHostContext *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareToCompleteExtensionConfigurationRequestWithHost:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: _ASCredentialProviderExtensionHostContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareToCompleteRequestWithHostContext:(void *)arg1 credential:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: _ASCredentialProviderExtensionHostContext *, ASPasswordCredential *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
