/* made by EzioChiu.
 */

@protocol PKColorPickerDelegatePrivate <PKColorPickerDelegate>

@required

- (void)_colorPicker:(PKColorPicker *)arg1 willDismissAnimated:(bool)arg2;
- (void)_colorPickerUserDidTouchUpInside:(PKColorPicker *)arg1;

@end
