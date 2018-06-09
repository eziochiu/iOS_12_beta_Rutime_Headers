/* made by EzioChiu.
 */

@protocol _UITextFieldVisualStyleSubject <NSObject>

@required

- (UIVisualEffectView *)_contentBackdropView;
- (UIColor *)_currentTextColor;
- (UIView *)_effectiveContentView;
- (bool)_fieldEditorAttached;
- (double)_fieldEditorHeight;
- (bool)_hasFloatingFieldEditor;
- (bool)_inVibrantContentView;
- (bool)_isFocused;
- (long long)_keyboardAppearance;
- (bool)_shouldDetermineInterfaceStyleTextColor;
- (_UITextFieldContentView *)_textContentView;
- (bool)_textShouldFillFieldEditorHeight;
- (bool)_textShouldUseVibrancy;
- (long long)_userInterfaceStyle;

@end