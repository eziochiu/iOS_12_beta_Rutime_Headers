/* made by EzioChiu.
 */

@protocol SiriUIObjectPickerViewControllerDelegate <NSObject>

@required

- (UIViewController *)viewControllerForPickerPresentation:(SiriUIObjectPickerViewController *)arg1;

@optional

- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 didDismissPicker:(UIViewController *)arg2;
- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 didRequestKeyboardWithVisibility:(bool)arg2;
- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 didSelectObject:(SAUIDomainObjectPickerSelection *)arg2 fromPicker:(UIViewController *)arg3;
- (void)pickerViewController:(void *)arg1 shouldPresentPicker:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: SiriUIObjectPickerViewController *, UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 willDismissPicker:(UIViewController *)arg2;
- (void)pickerViewController:(SiriUIObjectPickerViewController *)arg1 willPresentPicker:(UIViewController *)arg2;

@end
