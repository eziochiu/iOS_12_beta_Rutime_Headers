/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSAutoAuthenticationViewModel : VSCuratedViewModel {
    NSString * _accountName;
    <VSAutoAuthenticationViewModelDelegate> * _delegate;
    NSString * _manualSignInButtonText;
    NSString * _manualSignInTitle;
    NSString * _messageTitle;
}

@property (nonatomic, copy) NSString *accountName;
@property (nonatomic) <VSAutoAuthenticationViewModelDelegate> *delegate;
@property (nonatomic, copy) NSString *manualSignInButtonText;
@property (nonatomic, copy) NSString *manualSignInTitle;
@property (nonatomic, copy) NSString *messageTitle;

- (void).cxx_destruct;
- (id)accountName;
- (void)configureWithRequest:(id)arg1;
- (id)delegate;
- (void)didSelectManualSignInButton;
- (id)init;
- (id)manualSignInButtonText;
- (id)manualSignInTitle;
- (id)messageTitle;
- (void)setAccountName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setManualSignInButtonText:(id)arg1;
- (void)setManualSignInTitle:(id)arg1;
- (void)setMessageTitle:(id)arg1;

@end
