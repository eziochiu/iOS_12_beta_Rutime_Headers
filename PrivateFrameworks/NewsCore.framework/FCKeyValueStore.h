/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCKeyValueStore : NSObject <FCJSONEncodableObjectProviding, FCOperationThrottlerDelegate, FRRingBufferContainer> {
    id /* block */  _arrayObjectHandler;
    FCKeyValueStoreClassRegistry * _classRegistry;
    unsigned long long  _clientVersion;
    id /* block */  _dictionaryKeyHandler;
    id /* block */  _dictionaryValueHandler;
    <FCKeyValueStoreMigrating> * _migrator;
    NSString * _name;
    bool  _needSave;
    id /* block */  _objectHandler;
    NSMutableDictionary * _objectsByKey;
    unsigned long long  _optionsMask;
    <FCOperationThrottler> * _saveThrottler;
    bool  _shouldExportJSONSidecar;
    NSString * _storeDirectory;
    unsigned long long  _storeSize;
    NFMutexLock * _writeLock;
}

@property (nonatomic, copy) id /* block */ arrayObjectHandler;
@property (nonatomic, readonly) NSDictionary *asDictionary;
@property (nonatomic, retain) FCKeyValueStoreClassRegistry *classRegistry;
@property (nonatomic) unsigned long long clientVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dictionaryKeyHandler;
@property (nonatomic, copy) id /* block */ dictionaryValueHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <FCKeyValueStoreMigrating> *migrator;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) bool needSave;
@property (nonatomic, copy) id /* block */ objectHandler;
@property (nonatomic, retain) NSMutableDictionary *objectsByKey;
@property (nonatomic) unsigned long long optionsMask;
@property (nonatomic, retain) <FCOperationThrottler> *saveThrottler;
@property (nonatomic) bool shouldExportJSONSidecar;
@property (nonatomic, retain) NSString *storeDirectory;
@property (nonatomic) unsigned long long storeSize;
@property (readonly) Class superclass;
@property (nonatomic, retain) NFMutexLock *writeLock;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)persistenceQueue;
+ (bool)shouldDumpToJSON;

- (void).cxx_destruct;
- (void)_clearStore;
- (id)_dictionary;
- (id)_initializeStoreDirectoryWithName:(id)arg1;
- (bool)_isBackupEnabled;
- (id)_loadFromDisk;
- (void)_logCacheStatus;
- (void)_maybeSaveJSONRepresentationWithDictionary:(id)arg1;
- (bool)_persistOnlyInMemoryEnabled;
- (void)_queueSave;
- (void)_saveAsyncWithCompletionHandler:(id /* block */)arg1;
- (bool)_shouldMigrateOnUpgrade;
- (void)addAllEntriesToDictionary:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)allKeys;
- (id /* block */)arrayObjectHandler;
- (id)asDictionary;
- (bool)boolValueForKey:(id)arg1;
- (id)classRegistry;
- (unsigned long long)clientVersion;
- (bool)containsObjectForKey:(id)arg1;
- (id /* block */)dictionaryKeyHandler;
- (id /* block */)dictionaryValueHandler;
- (id)fc_jsonEncodableDictionary;
- (id)fc_jsonEncodableDictionaryWithDictionary:(id)arg1;
- (id)fc_jsonString;
- (id)fc_jsonStringWithDictionary:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 classRegistry:(id)arg5;
- (id)initWithName:(id)arg1 directory:(id)arg2 version:(unsigned long long)arg3 options:(unsigned long long)arg4 classRegistry:(id)arg5 migrator:(id)arg6;
- (id)jsonEncodableObject;
- (id)migrator;
- (id)name;
- (bool)needSave;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id /* block */)objectHandler;
- (id)objectsByKey;
- (id)objectsForKeys:(id)arg1;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(id /* block */)arg2;
- (unsigned long long)optionsMask;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (id)saveThrottler;
- (void)saveWithCompletionHandler:(id /* block */)arg1;
- (void)setArrayObjectHandler:(id /* block */)arg1;
- (void)setBoolValue:(bool)arg1 forKey:(id)arg2;
- (void)setClassRegistry:(id)arg1;
- (void)setClientVersion:(unsigned long long)arg1;
- (void)setDictionaryKeyHandler:(id /* block */)arg1;
- (void)setDictionaryValueHandler:(id /* block */)arg1;
- (void)setJSONEncodingHandlersWithObjectHandler:(id /* block */)arg1 arrayObjectHandler:(id /* block */)arg2 dictionaryKeyHandler:(id /* block */)arg3 dictionaryValueHandler:(id /* block */)arg4;
- (void)setMigrator:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNeedSave:(bool)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObjectHandler:(id /* block */)arg1;
- (void)setObjects:(id)arg1 forKeys:(id)arg2;
- (void)setObjectsByKey:(id)arg1;
- (void)setOptionBackupEnabled:(bool)arg1;
- (void)setOptionsMask:(unsigned long long)arg1;
- (void)setSaveThrottler:(id)arg1;
- (void)setShouldExportJSONSidecar:(bool)arg1;
- (void)setStoreDirectory:(id)arg1;
- (void)setStoreSize:(unsigned long long)arg1;
- (void)setWriteLock:(id)arg1;
- (bool)shouldExportJSONSidecar;
- (id)storeDirectory;
- (unsigned long long)storeSize;
- (void)updateObjectsForKeys:(id)arg1 withBlock:(id /* block */)arg2;
- (id)writeLock;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

- (bool)hasMaxForKey:(id)arg1;
- (bool)hasMinForKey:(id)arg1;
- (double)maxForKey:(id)arg1;
- (double)minForKey:(id)arg1;
- (id)ringBufferForKey:(id)arg1;
- (id)ringBufferForKey:(id)arg1 capacity:(unsigned long long)arg2;
- (void)setRingBuffers:(id)arg1;

@end
