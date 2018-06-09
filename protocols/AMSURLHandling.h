/* made by EzioChiu.
 */

@protocol AMSURLHandling <NSObject>

@required

- (id)decodeData:(NSData *)arg1 task:(NSURLSessionTask *)arg2 error:(id*)arg3;
- (void)didCreateTask:(NSURLSessionTask *)arg1 fromRequest:(NSURLRequest *)arg2 error:(id*)arg3;
- (AMSURLAction *)handleCompletionWithTask:(NSURLSessionTask *)arg1 metrics:(NSURLSessionTaskMetrics *)arg2 decodedObject:(id)arg3;
- (AMSURLAction *)handleResponse:(NSURLResponse *)arg1 task:(NSURLSessionTask *)arg2;
- (void)reconfigureNewRequest:(NSMutableURLRequest *)arg1 originalTask:(NSURLSessionTask *)arg2 redirect:(bool)arg3 error:(id*)arg4;
- (AMSURLSession *)session;
- (void)setSession:(AMSURLSession *)arg1;

@end
