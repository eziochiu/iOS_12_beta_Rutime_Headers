/* made by EzioChiu
   Image: /usr/lib/libTelephonyUtilDynamic.dylib
 */

@interface URLConnectionDelegate : NSObject <NSURLConnectionDelegate> {
    NSMutableData * fData;
    struct weak_ptr<ctu::Http::HttpRequestCallbackHandler> { 
        struct HttpRequestCallbackHandler {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  fHandler;
    NSMutableData * fPostData;
    struct shared_ptr<ctu::Http::HttpResponse> { 
        struct HttpResponse {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  fResponse;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (struct shared_ptr<ctu::Http::HttpRequestCallbackHandler> { struct HttpRequestCallbackHandler {} *x1; struct __shared_weak_count {} *x2; })getHandler;
- (id)initWithCallbackHandler:(struct shared_ptr<ctu::Http::HttpRequestCallbackHandler> { struct HttpRequestCallbackHandler {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end
