/* made by EzioChiu.
 */

@protocol CKPhotoPickerItemForSendingDelegate <NSObject>

@required

- (void)item:(CKPhotoPickerItemForSending *)arg1 encounteredError:(NSError *)arg2 forAsset:(PHAsset *)arg3;
- (void)item:(CKPhotoPickerItemForSending *)arg1 requiresCloudDownloadForAsset:(PHAsset *)arg2;

@end
