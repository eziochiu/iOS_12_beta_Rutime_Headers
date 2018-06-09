/* made by EzioChiu.
 */

@protocol PHVideoRequestDelegate <PHMediaRequestDelegate>

@required

- (void)videoRequest:(PDVideoRequest *)arg1 didFinishLoadingVideoURL:(NSURL *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)videoRequest:(PDVideoRequest *)arg1 isRequestingVideoChoosingForSize:(struct CGSize { double x1; double x2; })arg2;

@end
