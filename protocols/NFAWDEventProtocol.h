/* made by EzioChiu.
 */

@protocol NFAWDEventProtocol <NSObject>

@optional

- (PBCodable *)getMetric;
- (unsigned int)getMetricId;
- (unsigned long long)updateCardIngestionSessionStateChangeInfoWithPreviousState:(unsigned long long)arg1;
- (void)updateExceptionUUID:(NSData *)arg1;
- (unsigned long long)updateExpressTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
- (unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
- (void)updateUUID:(NSData *)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;
- (unsigned long long)updateVASTransactionStateInfoWithPreviousState:(unsigned long long)arg1;

@end
