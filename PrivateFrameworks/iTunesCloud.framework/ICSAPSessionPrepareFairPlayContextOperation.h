/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICSAPSessionPrepareFairPlayContextOperation : ICAsyncOperation {
    id /* block */  _responseHandler;
    ICSAPSession * _sapSession;
}

@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic, retain) ICSAPSession *sapSession;

- (void).cxx_destruct;
- (void)_exchangeDataWithSAPContext:(id)arg1 requestContext:(id)arg2 setupURL:(id)arg3 responseData:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)execute;
- (id /* block */)responseHandler;
- (id)sapSession;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setSapSession:(id)arg1;

@end
