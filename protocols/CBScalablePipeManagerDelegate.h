/* made by EzioChiu.
 */

@protocol CBScalablePipeManagerDelegate <NSObject>

@required

- (void)scalablePipeManager:(CBScalablePipeManager *)arg1 didRegisterEndpoint:(NSString *)arg2 error:(NSError *)arg3;
- (void)scalablePipeManager:(CBScalablePipeManager *)arg1 didUnregisterEndpoint:(NSString *)arg2;
- (void)scalablePipeManager:(CBScalablePipeManager *)arg1 pipeDidConnect:(CBScalablePipe *)arg2;
- (void)scalablePipeManager:(CBScalablePipeManager *)arg1 pipeDidDisconnect:(CBScalablePipe *)arg2 error:(NSError *)arg3;
- (void)scalablePipeManagerDidUpdateState:(CBScalablePipeManager *)arg1;

@end
