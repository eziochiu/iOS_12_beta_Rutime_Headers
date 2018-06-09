/* made by EzioChiu.
 */

@protocol MSCLComposeImagePickerDelegate <NSObject>

@required

- (UIViewController *)parentViewControllerForMSCLComposeImagePicker:(MSCLComposeImagePickerController *)arg1;

@optional

- (void)MSCLComposeImagePicker:(MSCLComposeImagePickerController *)arg1 didFinishWithAttachments:(NSArray *)arg2;
- (void)MSCLComposeImagePickerDidCancel:(MSCLComposeImagePickerController *)arg1;

@end
