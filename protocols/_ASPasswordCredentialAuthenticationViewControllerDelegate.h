/* made by EzioChiu.
 */

@protocol _ASPasswordCredentialAuthenticationViewControllerDelegate <NSObject>

@required

- (void)passwordCredentialAuthenticationViewController:(void *)arg1 didFinishWithCredential:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: _ASPasswordCredentialAuthenticationViewController *, ASPasswordCredential *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)presentUIForPasswordCredentialAuthenticationViewController:(_ASPasswordCredentialAuthenticationViewController *)arg1;

@end
