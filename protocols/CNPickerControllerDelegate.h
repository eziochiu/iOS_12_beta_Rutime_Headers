/* made by EzioChiu.
 */

@protocol CNPickerControllerDelegate <UINavigationControllerDelegate>

@required

- (void)picker:(UIViewController *)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(UIViewController *)arg1;

@end
