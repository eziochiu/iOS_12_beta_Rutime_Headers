/* made by EzioChiu.
 */

@protocol PXCMMViewControllerDelegate <NSObject>

@optional

- (void)completeMyMomentViewController:(PXCMMViewController *)arg1 showPhotoPickerForSession:(PXCMMSession *)arg2;
- (void)didCancelCompleteMyMomentViewController:(PXCMMViewController *)arg1;

@end
