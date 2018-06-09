/* made by EzioChiu.
 */

@protocol CKPhotoPickerControllerDelegate <NSObject>

@required

- (void)photoPickerController:(CKPhotoPickerController *)arg1 requestsSendAssets:(NSArray *)arg2 sendImmediately:(bool)arg3;
- (void)photoPickerControllerRequestPresentCamera:(CKPhotoPickerController *)arg1;
- (void)photoPickerControllerRequestPresentPhotoLibrary:(CKPhotoPickerController *)arg1;
- (void)photoPickerControllerWillCancel:(CKPhotoPickerController *)arg1;
- (NSArray *)supportedMediaTypesForPhotoPicker:(CKPhotoPickerController *)arg1;

@end
