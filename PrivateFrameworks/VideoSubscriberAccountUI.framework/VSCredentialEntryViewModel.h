/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSCredentialEntryViewModel : VSCuratedViewModel {
    NSString * _additionalMessage;
    VSExpressionEvaluator * _buttonExpressionEvaluator;
    NSString * _linkTitle;
    NSURL * _linkURL;
    NSString * _originalPassword;
    NSString * _originalUsername;
    VSCredentialEntryField * _passwordField;
    NSString * _recentsMessage;
    NSString * _recentsTitle;
    VSCredentialEntryField * _usernameField;
}

@property (nonatomic, copy) NSString *additionalMessage;
@property (nonatomic, retain) VSExpressionEvaluator *buttonExpressionEvaluator;
@property (nonatomic, copy) NSString *linkTitle;
@property (nonatomic, copy) NSURL *linkURL;
@property (nonatomic, copy) NSString *originalPassword;
@property (nonatomic, copy) NSString *originalUsername;
@property (nonatomic, retain) VSCredentialEntryField *passwordField;
@property (nonatomic, copy) NSString *recentsMessage;
@property (nonatomic, copy) NSString *recentsTitle;
@property (nonatomic, retain) VSCredentialEntryField *usernameField;

- (void).cxx_destruct;
- (void)_bindField:(id)arg1;
- (void)_unbindField:(id)arg1;
- (id)additionalMessage;
- (id)buttonExpressionEvaluator;
- (void)configureWithRequest:(id)arg1;
- (id)init;
- (id)linkTitle;
- (id)linkURL;
- (id)originalPassword;
- (id)originalUsername;
- (id)passwordField;
- (id)recentsMessage;
- (id)recentsTitle;
- (void)setAdditionalMessage:(id)arg1;
- (void)setButtonExpressionEvaluator:(id)arg1;
- (void)setLinkTitle:(id)arg1;
- (void)setLinkURL:(id)arg1;
- (void)setOriginalPassword:(id)arg1;
- (void)setOriginalUsername:(id)arg1;
- (void)setPasswordField:(id)arg1;
- (void)setRecentsMessage:(id)arg1;
- (void)setRecentsTitle:(id)arg1;
- (void)setUsernameField:(id)arg1;
- (id)usernameField;

@end
