/* made by EzioChiu.
 */

@protocol SKUISlideshowViewControllerDataSource <NSObject>

@required

- (long long)numberOfItemsInSlideshowViewController:(UIViewController *)arg1;
- (SKUIScreenshotDataConsumer *)slideshowViewController:(UIViewController *)arg1 dataConsumerAtIndex:(long long)arg2;
- (NSURL *)slideshowViewController:(UIViewController *)arg1 imageURLAtIndex:(long long)arg2;
- (UIImage *)slideshowViewController:(UIViewController *)arg1 placeholderImageAtIndex:(long long)arg2;

@end
