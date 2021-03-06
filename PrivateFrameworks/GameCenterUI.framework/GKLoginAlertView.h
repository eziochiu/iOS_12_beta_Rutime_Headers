/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKLoginAlertView : UIAlertView <UITextFieldDelegate> {
    unsigned long long  _passwordFieldIndex;
    NSString * _username;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *password;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *username;

- (void)_updateFrameForDisplay;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 uneditableUsername:(id)arg2;
- (id)password;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)username;

@end
