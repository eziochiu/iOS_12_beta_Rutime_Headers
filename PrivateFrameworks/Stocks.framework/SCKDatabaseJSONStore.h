/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface SCKDatabaseJSONStore : NSObject <NSFilePresenter, SCKDatabaseStore, SCKDatabaseStoreCoordinator, SCKOperationThrottlerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    unsigned long long  _diskReadCount;
    unsigned long long  _diskWriteCount;
    NSFileCoordinator * _fileCoordinator;
    bool  _havePendingChanges;
    NSDate * _lastDirtyDate;
    unsigned int  _lastKnownStoreChangeTag;
    NSDate * _lastSyncDate;
    bool  _loadedFromDisk;
    NSHashTable * _observers;
    NSOperationQueue * _presentedItemOperationQueue;
    NSURL * _presentedItemURL;
    SCKTimedOperationThrottler * _saveThrottler;
    SCKDatabaseSchema * _schema;
    CKServerChangeToken * _serverChangeToken;
    NSURL * _storeURL;
    NSMutableDictionary * _zoneStoresByName;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long diskReadCount;
@property (nonatomic, readonly) unsigned long long diskWriteCount;
@property (nonatomic, retain) NSFileCoordinator *fileCoordinator;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool havePendingChanges;
@property (nonatomic, copy) NSDate *lastDirtyDate;
@property (nonatomic) unsigned int lastKnownStoreChangeTag;
@property (nonatomic, copy) NSDate *lastSyncDate;
@property (nonatomic) bool loadedFromDisk;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (nonatomic, retain) NSHashTable *observers;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (nonatomic, retain) SCKTimedOperationThrottler *saveThrottler;
@property (nonatomic, readonly) SCKDatabaseSchema *schema;
@property (nonatomic, copy) CKServerChangeToken *serverChangeToken;
@property (nonatomic, readonly, copy) NSURL *storeURL;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *zoneStoresByName;

- (void).cxx_destruct;
- (id)_decodeCodableObjectOfClass:(Class)arg1 from:(id)arg2 error:(id*)arg3;
- (id)_decodeDate:(id)arg1;
- (id)_encodeCodableObject:(id)arg1;
- (id)_encodeDate:(id)arg1;
- (void)_loadFromFileURL:(id)arg1;
- (void)_reloadIfNeededFromFileURL:(id)arg1;
- (void)_saveIfNeededToFileURL:(id)arg1;
- (void)_saveToFileURL:(id)arg1;
- (id)accessQueue;
- (void)addObserver:(id)arg1;
- (unsigned long long)diskReadCount;
- (unsigned long long)diskWriteCount;
- (id)fileCoordinator;
- (bool)flushToDiskWithTimeout:(double)arg1;
- (bool)havePendingChanges;
- (id)initWithSchema:(id)arg1 parentDirectoryURL:(id)arg2;
- (id)lastDirtyDate;
- (unsigned int)lastKnownStoreChangeTag;
- (id)lastSyncDate;
- (bool)loadedFromDisk;
- (id)observers;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)readWithAccessor:(id /* block */)arg1;
- (void)readZone:(id)arg1 withAccessor:(id /* block */)arg2;
- (void)relinquishPresentedItemToWriter:(id /* block */)arg1;
- (void)reloadWithAccessor:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(id /* block */)arg1;
- (id)saveThrottler;
- (id)schema;
- (id)serverChangeToken;
- (void)setAccessQueue:(id)arg1;
- (void)setFileCoordinator:(id)arg1;
- (void)setHavePendingChanges:(bool)arg1;
- (void)setLastDirtyDate:(id)arg1;
- (void)setLastKnownStoreChangeTag:(unsigned int)arg1;
- (void)setLastSyncDate:(id)arg1;
- (void)setLoadedFromDisk:(bool)arg1;
- (void)setObservers:(id)arg1;
- (void)setSaveThrottler:(id)arg1;
- (void)setServerChangeToken:(id)arg1;
- (void)setZoneStoresByName:(id)arg1;
- (id)storeURL;
- (void)writeWithAccessor:(id /* block */)arg1;
- (void)writeZone:(id)arg1 withAccessor:(id /* block */)arg2;
- (id)zoneStoreForSchema:(id)arg1;
- (id)zoneStoresByName;

@end
