/* made by EzioChiu.
 */

@protocol PINEntryView <UITextFieldDelegate>

@required

- (void)appendString:(NSString *)arg1;
- (bool)becomeFirstResponder;
- (void)deleteLastCharacter;
- (double)getCurrentTitleFontSize;
- (void)hideError;
- (void)hideFailedAttempts;
- (void)hidePasscodeField:(bool)arg1;
- (void)setBlocked:(bool)arg1;
- (void)setDelegate:(id <PSPINEntryViewDelegate>)arg1;
- (void)setPINPolicyString:(NSString *)arg1 visible:(bool)arg2;
- (void)setShowsOptionsButton:(bool)arg1;
- (void)setStringValue:(NSString *)arg1;
- (void)setTextFieldKeyboardAppearance:(long long)arg1;
- (void)setTextFieldKeyboardType:(long long)arg1;
- (void)setTitle:(NSString *)arg1 font:(UIFont *)arg2;
- (void)showError:(NSString *)arg1 animate:(bool)arg2;
- (void)showFailedAttempts:(long long)arg1;
- (NSString *)stringValue;

@end
