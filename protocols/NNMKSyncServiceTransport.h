/* made by EzioChiu.
 */

@protocol NNMKSyncServiceTransport <NSObject>

@required

- (unsigned long long)connectivityState;
- (id)initWithServiceName:(NSString *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 delegate:(id <NNMKSyncServiceTransportDelegate>)arg3;
- (NSString *)sendProtobufData:(NSData *)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 shortTimeout:(bool)arg4 allowCloudDelivery:(bool)arg5;
- (NSString *)sendProtobufData:(NSData *)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 allowCloudDelivery:(bool)arg5;

@optional

- (bool)forceFailureForAllRequests;
- (void)forceFailureForNextRequest;
- (void)setForceFailureForAllRequests:(bool)arg1;
- (void)setSimulateCloudConnectedOnly:(bool)arg1;
- (bool)simulateCloudConnectedOnly;

@end
