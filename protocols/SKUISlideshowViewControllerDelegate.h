/* made by EzioChiu.
 */

@protocol SKUISlideshowViewControllerDelegate <NSObject>

@optional

- (UIImageView *)slideshowViewController:(UIViewController *)arg1 poppedImageViewAtIndex:(long long)arg2;
- (void)slideshowViewController:(UIViewController *)arg1 scrollToImageAtIndex:(long long)arg2;
- (void)slideshowViewControllerDidFinish:(UIViewController *)arg1;

@end
