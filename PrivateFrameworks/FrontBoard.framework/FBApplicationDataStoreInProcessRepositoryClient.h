/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationDataStoreInProcessRepositoryClient : NSObject <FBSApplicationDataStoreRepositoryClient> {
    NSObject<OS_dispatch_queue> * _clientCalloutQueue;
    <FBApplicationDataStoreRepository> * _dataStore;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _observersQueue;
    NSObject<OS_dispatch_queue> * _prefetchQueue;
    struct NSMutableDictionary { Class x1; } * _prefetchedKeyValues;
    NSCountedSet * _prefetchedKeys;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateCacheIfObjectIsNotEqual:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3;
- (id)_observers;
- (id)_prefetchQueue_prefetchedKeysForApplication:(id)arg1;
- (void)_prefetchQueue_updateNotificationListeners;
- (void)_repositoryInvalidated:(id)arg1;
- (void)_updateCacheIfNecessaryWithObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3;
- (void)_updateNotificationListeners;
- (void)_valueChanged:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addPrefetchedKeys:(id)arg1;
- (id)availableDataStores;
- (id)init;
- (id)initWithDataStore:(id)arg1;
- (void)invalidate;
- (id)objectForKey:(id)arg1 forApplication:(id)arg2;
- (void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(id /* block */)arg3;
- (bool)prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id*)arg3;
- (void)removeAllObjectsForApplication:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)removeObserver:(id)arg1;
- (void)removePrefetchedKeys:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)synchronizeWithCompletion:(id /* block */)arg1;

@end
