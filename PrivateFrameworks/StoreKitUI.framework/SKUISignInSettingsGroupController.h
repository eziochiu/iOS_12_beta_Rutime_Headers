/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISignInSettingsGroupController : SKUISettingsGroupController {
    NSString * _accountName;
    bool  _authenticating;
    NSMapTable * _keyMapping;
    NSString * _password;
    bool  _valid;
}

- (void).cxx_destruct;
- (void)_attemptSignInWithAccountName:(id)arg1 password:(id)arg2;
- (void)_becomeFirstResponderWithKey:(id)arg1;
- (id)_keyForSettingDescription:(id)arg1;
- (void)_resignFirstResponder;
- (id)_settingDescriptionForKey:(id)arg1;
- (void)_signInFailed:(id)arg1 error:(id)arg2;
- (void)_signInSuccess:(id)arg1;
- (id)_submitSettingDescription;
- (void)_updateFieldsAuthenticating:(bool)arg1;
- (void)_updateValidation;
- (bool)isAuthenticating;
- (void)returnInSettingDescription:(id)arg1;
- (void)setValue:(id)arg1 forSettingDescription:(id)arg2;
- (void)submitSettingDescription:(id)arg1;
- (id)valueForSettingDescription:(id)arg1;

@end
