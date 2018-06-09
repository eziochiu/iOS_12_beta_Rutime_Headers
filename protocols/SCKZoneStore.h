/* made by EzioChiu.
 */

@protocol SCKZoneStore

@required

- (void)addPendingCommands:(NSArray *)arg1;
- (void)applyServerRecordsDiff:(SCKZoneDiff *)arg1;
- (void)clearPendingCommands;
- (NSDate *)lastDirtyDate;
- (NSDate *)lastSyncDate;
- (NSArray *)pendingCommands;
- (CKServerChangeToken *)serverChangeToken;
- (NSArray *)serverRecords;
- (void)setLastDirtyDate:(NSDate *)arg1;
- (void)setLastSyncDate:(NSDate *)arg1;
- (void)setServerChangeToken:(CKServerChangeToken *)arg1;

@end
