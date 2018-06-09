/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptAppleIdAuthenticationOperation : ISOperation {
    AKAppleIDAuthenticationInAppContext * _authenticationContext;
    NSString * _status;
    UIViewController * _viewController;
}

@property (nonatomic, retain) NSString *status;

- (void).cxx_destruct;
- (id)initWithUsername:(id)arg1 password:(id)arg2 viewController:(id)arg3;
- (void)run;
- (void)sendCompletionCallback:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end
