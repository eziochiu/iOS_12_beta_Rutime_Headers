/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupBuiltInCardOnFilePrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell {
    bool  _hasDarkAppearance;
    long long  _paymentCredentialType;
}

@property (nonatomic) bool hasDarkAppearance;
@property (nonatomic) long long paymentCredentialType;

- (id)_imageForPaymentCredentialType:(long long)arg1;
- (void)dealloc;
- (bool)hasDarkAppearance;
- (id)init;
- (bool)isEnabled;
- (long long)paymentCredentialType;
- (void)pk_applyAppearance:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHasDarkAppearance:(bool)arg1;
- (void)setPaymentCredentialType:(long long)arg1;
- (void)setPaymentSetupField:(id)arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldClear:(id)arg1;

@end
