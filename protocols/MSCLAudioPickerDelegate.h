/* made by EzioChiu.
 */

@protocol MSCLAudioPickerDelegate <NSObject>

@optional

- (void)audioPicker:(MSCLAudioPickerViewController *)arg1 didFinishWithAttachment:(MSCLAttachment *)arg2;
- (void)audioPickerDidCancel:(MSCLAudioPickerViewController *)arg1;

@end
