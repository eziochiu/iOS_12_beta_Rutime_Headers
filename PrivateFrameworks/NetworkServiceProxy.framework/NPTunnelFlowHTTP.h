/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPTunnelFlowHTTP : NPTunnelFlow {
    id /* block */  _postCompletionHandler;
    bool  _receivedHeaders;
    NSNumber * _responseContentLength;
    NSMutableData * _responseData;
    bool  _responseSuccess;
    NSURL * _url;
}

@property (copy) id /* block */ postCompletionHandler;
@property bool receivedHeaders;
@property (retain) NSNumber *responseContentLength;
@property (retain) NSMutableData *responseData;
@property bool responseSuccess;
@property (retain) NSURL *url;

- (void).cxx_destruct;
- (void)closeClientFlowWithError:(int)arg1;
- (id)initWithTunnel:(id)arg1 URL:(id)arg2 extraFlowProperties:(id)arg3;
- (bool)isClientFlowClosed;
- (id /* block */)postCompletionHandler;
- (void)postData:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)receivedHeaders;
- (id)responseContentLength;
- (id)responseData;
- (bool)responseSuccess;
- (void)sendDataToClient:(id)arg1 fromTunnel:(bool)arg2;
- (void)setPostCompletionHandler:(id /* block */)arg1;
- (void)setReceivedHeaders:(bool)arg1;
- (void)setResponseContentLength:(id)arg1;
- (void)setResponseData:(id)arg1;
- (void)setResponseSuccess:(bool)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
