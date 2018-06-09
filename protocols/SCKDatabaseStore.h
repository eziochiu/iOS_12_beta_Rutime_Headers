/* made by EzioChiu.
 */

@protocol SCKDatabaseStore

@required

- (NSDate *)lastDirtyDate;
- (NSDate *)lastSyncDate;
- (CKServerChangeToken *)serverChangeToken;
- (void)setLastDirtyDate:(NSDate *)arg1;
- (void)setLastSyncDate:(NSDate *)arg1;
- (void)setServerChangeToken:(CKServerChangeToken *)arg1;
- (<SCKZoneStore> *)zoneStoreForSchema:(SCKZoneSchema *)arg1;

@end
