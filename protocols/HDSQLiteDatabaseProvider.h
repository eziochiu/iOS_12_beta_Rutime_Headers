/* made by EzioChiu.
 */

@protocol HDSQLiteDatabaseProvider <NSObject>

@required

- (void)checkInDatabase:(HDSQLiteDatabase *)arg1 type:(long long)arg2;
- (HDSQLiteDatabase *)databaseTransaction:(HDDatabaseTransaction *)arg1 checkOutDatabaseWithType:(long long)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (void)lockWriteConnectionLock;
- (void)unlockWriteConnectionLock;

@end
