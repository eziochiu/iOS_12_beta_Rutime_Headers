/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFSessionRequestInfo : NSObject {
    NSDictionary * _options;
    NSDictionary * _request;
    NSString * _requestID;
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic, copy) NSDictionary *request;
@property (nonatomic, copy) NSString *requestID;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (id)options;
- (id)request;
- (id)requestID;
- (id /* block */)responseHandler;
- (void)setOptions:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestID:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
