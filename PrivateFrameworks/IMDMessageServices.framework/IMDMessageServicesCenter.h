/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDMessageServices.framework/IMDMessageServices
 */

@interface IMDMessageServicesCenter : NSObject {
    NSObject<OS_xpc_object> * _connection;
}

+ (id)sharedInstance;

- (bool)_connect;
- (bool)_disconnect;
- (void)_disconnected;
- (void)_requestExpireStateWithGUID:(id)arg1 handler:(id /* block */)arg2;
- (void)_requestRoutingWithGUID:(id)arg1 chatGUID:(id)arg2 error:(unsigned int)arg3 handler:(id /* block */)arg4;
- (void)_requestWatchdogWithGUID:(id)arg1 handler:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (void)requestExpireStateForMessageGuid:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)requestExpireStateWithCompletion:(id /* block */)arg1;
- (void)requestRoutingForMessageGuid:(id)arg1 inChat:(id)arg2 error:(unsigned int)arg3 completionBlock:(id /* block */)arg4;
- (void)requestRoutingWithCompletion:(id /* block */)arg1;
- (void)requestWatchdogForMessageGuid:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)requestWatchdogWithCompletion:(id /* block */)arg1;

@end
