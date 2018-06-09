/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSKVStore.framework/IDSKVStore
 */

@interface IDSKVStore : NSObject {
    unsigned int  _dataProtectionClass;
    NSObject<OS_dispatch_source> * _databaseCloseTimer;
    double  _databaseLastUpdateTime;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    CSDBThreadedRecordStore * _messageStore;
    NSString * _path;
    NSString * _storeName;
}

@property (nonatomic) unsigned int dataProtectionClass;
@property (nonatomic, retain) CSDBThreadedRecordStore *messageStore;
@property (nonatomic, copy) NSString *path;
@property (nonatomic, copy) NSString *storeName;

+ (void)_initializeMessageStoreIfNeeded:(id)arg1 path:(id)arg2 dataProtectionClass:(unsigned int)arg3;
+ (void)_invalidateCachesForMessageStore:(id)arg1;

- (void).cxx_destruct;
- (void)__closeDatabaseOnIvarQueue;
- (void)_clearDatabaseCloseTimerOnIvarQueue;
- (void)_onIvarQueue_deleteSerializedValueForKey:(id)arg1 valueType:(BOOL)arg2;
- (void)_onIvarQueue_deleteUpToRowID:(unsigned long long)arg1 valueType:(BOOL)arg2;
- (void)_onIvarQueue_performBlock:(id /* block */)arg1 initializeStore:(bool)arg2;
- (void)_onIvarQueue_performBlock:(id /* block */)arg1 initializeStore:(bool)arg2 waitUntilDone:(bool)arg3;
- (void)_onIvarQueue_persistSerializedValue:(id)arg1 forKey:(id)arg2 valueType:(BOOL)arg3;
- (id)_onIvarQueue_serializedValueForKey:(id)arg1 valueType:(BOOL)arg2;
- (id)_onIvarQueue_serializedValuesUpToLimit:(unsigned long long)arg1 valueType:(BOOL)arg2 deleteContext:(id*)arg3;
- (void)_performInitialHousekeepingOnIvarQueue;
- (void)_setDatabaseCloseTimerOnIvarQueue;
- (void)closeDatabaseSynchronously:(bool)arg1;
- (id)dataForKey:(id)arg1 error:(id*)arg2;
- (unsigned int)dataProtectionClass;
- (id)datasUpToLimit:(unsigned long long)arg1 deleteContext:(id*)arg2 error:(id*)arg3;
- (void)dealloc;
- (bool)deleteBatchWithContext:(id)arg1 error:(id*)arg2;
- (void)deleteDatabase;
- (id)initWithPath:(id)arg1 storeName:(id)arg2 dataProtectionClass:(unsigned int)arg3;
- (id)messageStore;
- (id)path;
- (bool)persistData:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setDataProtectionClass:(unsigned int)arg1;
- (void)setMessageStore:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setStoreName:(id)arg1;
- (id)storeName;
- (void)systemDidEnterMemoryPressure;
- (void)systemDidLeaveMemoryPressure;

@end
