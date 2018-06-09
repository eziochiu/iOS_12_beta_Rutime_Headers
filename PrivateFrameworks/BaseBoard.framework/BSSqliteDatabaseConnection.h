/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSSqliteDatabaseConnection : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    struct sqlite3 { } * _queue_dbConnection;
    NSHashTable * _queue_observers;
    NSCache * _queue_queryCache;
}

+ (int)_sqliteOpenFlagsForDataProtectionClass:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_closeConnection;
- (id)_initWithSqlitePath:(id)arg1 dataProtectionClass:(unsigned long long)arg2;
- (void)_queue_close;
- (id)_sqliteErrorForResult:(int)arg1 errorMessage:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)close;
- (void)dealloc;
- (id)init;
- (id)initWithFileURL:(id)arg1 dataProtectionClass:(unsigned long long)arg2;
- (id)initWithInMemoryDatabase;
- (id)lastErrorMessage;
- (void)performSyncWithDatabase:(id /* block */)arg1;
- (void)performWithDatabase:(id /* block */)arg1;
- (id)prepareStatement:(id)arg1;
- (void)removeObserver:(id)arg1;
- (bool)truncateDatabaseAndReturnError:(out id*)arg1;

@end
