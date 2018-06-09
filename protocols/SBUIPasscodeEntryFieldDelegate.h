/* made by EzioChiu.
 */

@protocol SBUIPasscodeEntryFieldDelegate <NSObject>

@optional

- (bool)passcodeEntryField:(SBUIPasscodeEntryField *)arg1 shouldInsertText:(NSString *)arg2;
- (void)passcodeEntryFieldDidAcceptEntry:(SBUIPasscodeEntryField *)arg1;
- (void)passcodeEntryFieldDidCancelEntry:(SBUIPasscodeEntryField *)arg1;
- (void)passcodeEntryFieldDidResignFirstResponder:(SBUIPasscodeEntryField *)arg1;
- (bool)passcodeEntryFieldShouldShowSystemKeyboard:(SBUIPasscodeEntryField *)arg1;
- (void)passcodeEntryFieldTextDidChange:(SBUIPasscodeEntryField *)arg1;

@end
