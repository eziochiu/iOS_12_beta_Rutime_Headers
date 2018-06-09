/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptAuthenticationOperation : ISOperation {
    NSNumber * _authenticatedDSID;
    SSMutableAuthenticationContext * _authenticationContext;
    UIViewController * _presentingViewController;
}

@property (retain) NSNumber *authenticatedDSID;
@property (retain) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (id)authenticatedAccountDSID;
- (id)authenticatedDSID;
- (id)init;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)presentingViewController;
- (void)run;
- (void)sendCompletionCallback:(id)arg1;
- (void)setAuthenticatedDSID:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setScriptOptions:(id)arg1;

@end
