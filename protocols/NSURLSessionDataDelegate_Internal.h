/* made by EzioChiu.
 */

@protocol NSURLSessionDataDelegate_Internal <NSURLSessionDataDelegate>

@required

- (void)_URLSession:(void *)arg1 dataTask:(void *)arg2 didReceiveData:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: NSURLSession *, NSURLSessionDataTask *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
