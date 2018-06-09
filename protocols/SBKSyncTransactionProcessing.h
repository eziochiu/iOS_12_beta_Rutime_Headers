/* made by EzioChiu.
 */

@protocol SBKSyncTransactionProcessing <NSObject>

@required

- (void)transaction:(SBKSyncTransaction *)arg1 didProcessResponseData:(SBKSyncResponseData *)arg2;
- (<SBKKeyValuePayloadPair> *)transaction:(SBKSyncTransaction *)arg1 keyValuePairForUpdatedKey:(NSString *)arg2;
- (void)transaction:(SBKSyncTransaction *)arg1 processDeletedKey:(NSString *)arg2 isDirty:(bool*)arg3;
- (void)transaction:(SBKSyncTransaction *)arg1 processUpdatedKey:(NSString *)arg2 data:(NSData *)arg3 conflict:(bool)arg4 isDirty:(bool*)arg5;
- (void)transaction:(SBKSyncTransaction *)arg1 willProcessResponseData:(SBKSyncResponseData *)arg2;

@optional

- (NSNumber *)transaction:(SBKSyncTransaction *)arg1 conflictDetectionOrdinalForKey:(NSString *)arg2;
- (long long)transaction:(SBKSyncTransaction *)arg1 conflictDetectionTypeForTransactionDetectionType:(long long)arg2;
- (NSArray *)transaction:(SBKSyncTransaction *)arg1 keysForTransactionForTransactionKeysToDelete:(NSArray *)arg2;
- (NSArray *)transaction:(SBKSyncTransaction *)arg1 keysForTransactionForTransactionKeysToUpdate:(NSArray *)arg2;
- (NSString *)transaction:(SBKSyncTransaction *)arg1 syncAnchorForTransactionSyncAnchor:(NSString *)arg2;

@end
