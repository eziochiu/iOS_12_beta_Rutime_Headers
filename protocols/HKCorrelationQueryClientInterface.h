/* made by EzioChiu.
 */

@protocol HKCorrelationQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverCorrelations:(NSArray *)arg1 clearPendingSamples:(bool)arg2 isFinalBatch:(bool)arg3 queryUUID:(NSUUID *)arg4;

@end
