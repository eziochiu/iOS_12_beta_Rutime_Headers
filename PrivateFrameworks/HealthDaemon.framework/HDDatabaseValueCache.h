/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDatabaseValueCache : NSObject {
    NSMutableDictionary * _cache;
    NSObject<OS_dispatch_queue> * _resourceQueue;
    NSString * _threadLocalKey;
}

@property (nonatomic, retain) NSMutableDictionary *cache;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *resourceQueue;
@property (nonatomic, copy) NSString *threadLocalKey;

- (void).cxx_destruct;
- (id)_resourceQueue_objectForKey:(id)arg1;
- (void)_resourceQueue_removeThreadLocalObjectForKey:(id)arg1;
- (void)_resourceQueue_storeThreadLocalObject:(id)arg1 forKey:(id)arg2;
- (id)cache;
- (id)fetchObjectForKey:(id)arg1 database:(id)arg2 error:(id*)arg3 faultHandler:(id /* block */)arg4;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjectsWithDatabase:(id)arg1;
- (void)removeObjectForKey:(id)arg1 database:(id)arg2;
- (id)resourceQueue;
- (void)setCache:(id)arg1;
- (void)setResourceQueue:(id)arg1;
- (void)setThreadLocalKey:(id)arg1;
- (id)threadLocalKey;

@end
