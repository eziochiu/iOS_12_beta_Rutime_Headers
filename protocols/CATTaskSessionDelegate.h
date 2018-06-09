/* made by EzioChiu.
 */

@protocol CATTaskSessionDelegate <NSObject>

@required

- (CATTaskOperation *)session:(CATTaskSession *)arg1 prepareOperationForRequest:(CATTaskRequest *)arg2 error:(id*)arg3;
- (bool)session:(CATTaskSession *)arg1 shouldAcceptConnectionFromTransport:(CATTransport *)arg2;

@optional

- (void)session:(CATTaskSession *)arg1 didInterruptWithError:(NSError *)arg2;
- (void)session:(CATTaskSession *)arg1 didReceiveNotificationWithName:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)session:(CATTaskSession *)arg1 enqueueOperation:(NSOperation *)arg2;
- (void)sessionDidConnect:(CATTaskSession *)arg1;
- (void)sessionDidDisconnect:(CATTaskSession *)arg1;
- (void)sessionDidInvalidate:(CATTaskSession *)arg1;
- (void)sessionWillInvalidate:(CATTaskSession *)arg1;

@end
