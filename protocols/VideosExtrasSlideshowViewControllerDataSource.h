/* made by EzioChiu.
 */

@protocol VideosExtrasSlideshowViewControllerDataSource <NSObject>

@required

- (unsigned long long)numberOfImagesForSlideshowViewController:(VideosExtrasSlideshowViewController *)arg1;
- (void)slideshowViewController:(void *)arg1 loadImageAtIndex:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: VideosExtrasSlideshowViewController *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, void*

@end
