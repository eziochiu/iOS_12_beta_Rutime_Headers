/* made by EzioChiu.
 */

@protocol _TVRKeyboardViewDelegate <NSObject>

@required

- (void)keyboardView:(_TVRKeyboardView *)arg1 didUpdateText:(NSString *)arg2;
- (void)keyboardView:(_TVRKeyboardView *)arg1 generatedTextInputPayload:(RTIDataPayload *)arg2;
- (void)keyboardViewDidCancel:(_TVRKeyboardView *)arg1;
- (void)keyboardViewDidHitReturnKey:(_TVRKeyboardView *)arg1;
- (void)keyboardViewPressedDictationButton:(_TVRKeyboardView *)arg1;
- (void)keyboardViewReleasedDictationButton:(_TVRKeyboardView *)arg1;

@end
