/* made by EzioChiu.
 */

@protocol PKInlineColorPickerDelegate <NSObject>

@optional

- (void)colorPickerColorTappedInCompactChooseToolState:(PKInlineColorPicker *)arg1;
- (void)colorPickerDidSelectColor:(PKInlineColorPicker *)arg1 colorChanged:(bool)arg2;
- (UIViewController *)viewControllerForPopoverPresentationFromColorPicker:(PKInlineColorPicker *)arg1;

@end
