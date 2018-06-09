/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPQLCache : NSObject {
    NSHashTable * _contexts;
    NSObject<OS_dispatch_queue> * _dbQueue;
    unsigned long long  _openHandles;
    PQLConnection * _pdb;
}

@property (nonatomic, readonly) NSHashTable *contexts;
@property (nonatomic, readonly) NSArray *createInitialTablesSQL;
@property (nonatomic, readonly) PQLConnection *database;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dbQueue;
@property (nonatomic, readonly) bool isOpen;
@property (nonatomic) unsigned long long openHandles;
@property (nonatomic, readonly) NSString *path;

- (void).cxx_destruct;
- (bool)_closeWithError:(id*)arg1 force:(bool)arg2;
- (bool)_lockedOpenDatabase:(id*)arg1;
- (id)_newConnection:(id)arg1;
- (bool)_setupCacheWithError:(id*)arg1;
- (bool)_setupConnectionWithError:(id*)arg1;
- (bool)_truncateAndReconnectToDatabaseWithError:(id*)arg1;
- (bool)closeWithError:(id*)arg1;
- (id)contexts;
- (id)createInitialTablesSQL;
- (id)database;
- (id)dbQueue;
- (bool)forceCloseWithError:(id*)arg1;
- (id)infoToUpgradeFromVersion:(unsigned long long)arg1;
- (id)initWithClientContext:(id)arg1;
- (bool)isOpen;
- (unsigned long long)openHandles;
- (bool)openWithError:(id*)arg1;
- (id)path;
- (void)performOnDBQueue:(id /* block */)arg1;
- (bool)removeCorruptDatabaseWithError:(id*)arg1;
- (bool)removeDatabaseFilesWithError:(id*)arg1;
- (bool)resetWithError:(id*)arg1;
- (void)setDbQueue:(id)arg1;
- (void)setOpenHandles:(unsigned long long)arg1;

@end
