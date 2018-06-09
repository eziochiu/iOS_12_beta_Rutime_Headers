/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOETARemoteProvider : NSObject {
    NSObject<OS_xpc_object> * _connection;
    id /* block */  _errorHandler;
    id /* block */  _finishedHandler;
    id /* block */  _networkActivityHandler;
    id /* block */  _willSendRequestHandler;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *connection;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) id /* block */ finishedHandler;
@property (nonatomic, copy) id /* block */ networkActivityHandler;
@property (nonatomic, copy) id /* block */ willSendRequestHandler;

+ (id)provderWithWillSendRequest:(id /* block */)arg1 finished:(id /* block */)arg2 networkActivity:(id /* block */)arg3 error:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)connection;
- (id /* block */)errorHandler;
- (id /* block */)finishedHandler;
- (id /* block */)networkActivityHandler;
- (void)setConnection:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setFinishedHandler:(id /* block */)arg1;
- (void)setNetworkActivityHandler:(id /* block */)arg1;
- (void)setWillSendRequestHandler:(id /* block */)arg1;
- (id /* block */)willSendRequestHandler;

@end