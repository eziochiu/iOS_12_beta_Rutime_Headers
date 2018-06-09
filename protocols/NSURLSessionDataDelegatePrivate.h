/* made by EzioChiu.
 */

@protocol NSURLSessionDataDelegatePrivate <NSURLSessionDataDelegate>

@optional

- (void)URLSession:(NSURLSession *)arg1 _willRetryBackgroundDataTask:(NSURLSessionDataTask *)arg2;
- (void)URLSession:(NSURLSession *)arg1 _willRetryBackgroundDataTask:(NSURLSessionDataTask *)arg2 withError:(NSError *)arg3;

@end
