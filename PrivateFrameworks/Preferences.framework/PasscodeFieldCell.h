/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PasscodeFieldCell : PSTableCell <PSPasscodeFieldDelegate> {
    bool  _convertsNumeralsToASCII;
    <KeychainSyncPasscodeFieldDelegate> * _delegate;
    bool  _denyFirstResponder;
    PSPasscodeField * _passcodeField;
}

@property (nonatomic) bool convertsNumeralsToASCII;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <KeychainSyncPasscodeFieldDelegate> *delegate;
@property (nonatomic) bool denyFirstResponder;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PSPasscodeField *passcodeField;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setSecureTextEntry:(bool)arg1;
- (bool)becomeFirstResponder;
- (void)cellTapped:(id)arg1;
- (bool)convertsNumeralsToASCII;
- (id)delegate;
- (void)deleteBackward;
- (bool)denyFirstResponder;
- (bool)hasText;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (long long)keyboardType;
- (void)layoutSubviews;
- (id)passcodeField;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (id)passcodeField:(id)arg1 shouldInsertText:(id)arg2;
- (id)passcodeText;
- (void)setConvertsNumeralsToASCII:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDenyFirstResponder:(bool)arg1;
- (void)setPasscodeText:(id)arg1;

@end
