/* made by EzioChiu.
 */

@protocol PLCloudPersistentHistoryMigratorContext

@required

- (id)readObjectFromCPLPlistWithKey:(NSString *)arg1;
- (void)resetSyncDueToMigrationMarker;
- (void)updateTransferCountsWithInsertedPhotoCount:(unsigned long long)arg1 insertedVideoCount:(unsigned long long)arg2;
- (void)writeObject:(id)arg1 toCPLPlistWithKey:(NSString *)arg2;

@end
