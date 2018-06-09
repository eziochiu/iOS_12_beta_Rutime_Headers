/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUbiquitousKeyValueStore : NSObject {
    int  _daemonWakeToken;
    id  _private1;
    id  _private2;
    id  _private3;
    void * _private4;
    void * _reserved;
}

@property (readonly, copy) NSDictionary *dictionaryRepresentation;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (void)_appWillActivate;
+ (void)_appWillDeactivate;
+ (void)_synchronizeStoresForced:(bool)arg1;
+ (id)additionalStoreWithIdentifier:(id)arg1;
+ (id)defaultStore;

- (void)_adjustTimer:(id)arg1;
- (void)_adjustTimerForAutosync;
- (void)_configurationDidChange;
- (bool)_hasPendingSynchronize;
- (void)_pleaseSynchronize:(id)arg1;
- (bool)_postDidChangeNotificationExternalChanges:(id)arg1 sourceChangeCount:(long long)arg2;
- (void)_registerToDaemon;
- (void)_rethrowException:(id)arg1;
- (void)_scheduleRemoteSynchronization;
- (void)_sendPingToDaemon;
- (void)_setHasPendingSynchronize:(bool)arg1;
- (void)_setShouldAvoidSynchronize:(bool)arg1;
- (bool)_shouldAvoidSynchronize;
- (void)_sourceDidChange:(id)arg1;
- (int)_storeChangeFromSourceChange:(int)arg1;
- (void)_syncConcurrently;
- (void)_syncConcurrentlyForced:(bool)arg1;
- (bool)_synchronizeForced:(bool)arg1;
- (bool)_synchronizeForced:(bool)arg1 notificationQueue:(id)arg2;
- (void)_unregisterFromDaemon;
- (void)_useSourceAsyncWithBlock:(id /* block */)arg1;
- (void)_useSourceSyncWithBlock:(id /* block */)arg1;
- (id)arrayForKey:(id)arg1;
- (bool)boolForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (double)doubleForKey:(id)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 additionalStore:(bool)arg3;
- (long long)longLongForKey:(id)arg1;
- (unsigned long long)maximumDataLengthPerKey;
- (unsigned long long)maximumKeyCount;
- (unsigned long long)maximumKeyLength;
- (unsigned long long)maximumTotalDataLength;
- (id)objectForKey:(id)arg1;
- (void)registerDefaultValues:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setLongLong:(long long)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (bool)synchronize;
- (void)synchronizeWithCompletionHandler:(id /* block */)arg1;
- (bool)synchronizeWithSourceForced:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults

- (void)_printDebugDescription;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (void)tsa_coalescedSynchronizeForDefaultStore;

@end
