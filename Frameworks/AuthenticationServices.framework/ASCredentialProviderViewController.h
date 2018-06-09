/* made by EzioChiu
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface ASCredentialProviderViewController : UIViewController

@property (nonatomic, readonly) ASCredentialProviderExtensionContext *extensionContext;

- (id)extensionContext;
- (void)prepareCredentialListForServiceIdentifiers:(id)arg1;
- (void)prepareInterfaceForExtensionConfiguration;
- (void)prepareInterfaceToProvideCredentialForIdentity:(id)arg1;
- (void)provideCredentialWithoutUserInteractionForIdentity:(id)arg1;

@end
