/* made by EzioChiu.
 */

@protocol _ASCredentialProviderExtensionContextProtocol <NSObject>

@required

- (void)prepareCredentialListForServiceIdentifiers:(NSArray *)arg1;
- (void)prepareInterfaceForExtensionConfiguration;
- (void)prepareInterfaceToProvideCredentialForIdentity:(ASPasswordCredentialIdentity *)arg1;
- (void)provideCredentialWithoutUserInteractionForIdentity:(ASPasswordCredentialIdentity *)arg1;

@end
