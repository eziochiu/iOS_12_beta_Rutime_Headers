/* made by EzioChiu.
 */

@protocol MKPlaceCardPhotosControllerDelegate <NSObject>

@optional

- (void)placeCardPhotosController:(MKPlacePhotosViewController *)arg1 didSelectViewPhotoWithID:(NSString *)arg2;
- (bool)shouldUseSmallPhotosWithPhotosController:(MKPlacePhotosViewController *)arg1;

@end
