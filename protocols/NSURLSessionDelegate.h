/* made by EzioChiu.
 */

@protocol NSURLSessionDelegate <NSObject>

@optional

- (void)URLSession:(NSURLSession *)arg1 didBecomeInvalidWithError:(NSError *)arg2;
- (void)URLSession:(void *)arg1 didReceiveChallenge:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSURLSession *, NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURLCredential *, void*
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(NSURLSession *)arg1;

@end
