/* made by EzioChiu.
 */

@protocol _TVRAlertControllerDelegate <NSObject>

@required

- (void)alertController:(_TVRAlertController *)arg1 enteredText:(NSString *)arg2;
- (void)alertController:(_TVRAlertController *)arg1 generatedTextInputPayload:(RTIDataPayload *)arg2;
- (void)alertControllerCancelled:(_TVRAlertController *)arg1;
- (void)alertControllerHitKeyboardReturnKey:(_TVRAlertController *)arg1;
- (void)alertControllerPressedDictationButton:(_TVRAlertController *)arg1;
- (void)alertControllerReleasedDictationButton:(_TVRAlertController *)arg1;

@end
