/* made by EzioChiu.
 */

@protocol PLImageLoadingQueueDelegate <NSObject>

@required

- (void)imageLoadingQueue:(PLImageLoadingQueue *)arg1 didLoadImage:(PLCachedImage *)arg2 forAsset:(PLManagedAsset *)arg3 fromSource:(PLImageSource *)arg4;

@end
