/* made by EzioChiu.
 */

@protocol CATTaskServerDelegate <NSObject>

@required

- (void)server:(CATTaskServer *)arg1 clientSession:(CATTaskSession *)arg2 didInterruptWithError:(NSError *)arg3;
- (CATTaskOperation *)server:(CATTaskServer *)arg1 clientSession:(CATTaskSession *)arg2 operationForRequest:(CATTaskRequest *)arg3 error:(id*)arg4;

@optional

- (void)server:(CATTaskServer *)arg1 clientSession:(CATTaskSession *)arg2 didReceiveNotificationWithName:(NSString *)arg3 userInfo:(NSDictionary *)arg4;
- (void)server:(CATTaskServer *)arg1 clientSession:(CATTaskSession *)arg2 enqueueOperation:(NSOperation *)arg3;
- (bool)server:(CATTaskServer *)arg1 clientSession:(CATTaskSession *)arg2 shouldConnectWithTransport:(CATTransport *)arg3;
- (void)server:(CATTaskServer *)arg1 clientSessionDidConnect:(CATTaskSession *)arg2;
- (void)server:(CATTaskServer *)arg1 clientSessionDidDisconnect:(CATTaskSession *)arg2;
- (void)server:(CATTaskServer *)arg1 clientSessionDidInvalidate:(CATTaskSession *)arg2;
- (void)serverDidInvalidate:(CATTaskServer *)arg1;

@end
