/* made by EzioChiu.
 */

@protocol FAChildAccountCreationDelegate <NSObject>

@required

- (void)childAccountCreationController:(FAChildAccountCreationController *)arg1 didCompleteWithSuccess:(bool)arg2 error:(NSError *)arg3;
- (void)childAccountCreationController:(FAChildAccountCreationController *)arg1 didLoadRemoteUIWithSuccess:(bool)arg2;
- (UINavigationItem *)navigationItemToShowInitialLoadingForChildAccountCreationController:(FAChildAccountCreationController *)arg1;

@end
