/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRecordCachePool : NSObject {
    NSMutableDictionary * _pools;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _recordExpiryQueue;
}

@property (nonatomic, retain) NSMutableDictionary *pools;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *recordExpiryQueue;

+ (void)performWithClientContext:(id)arg1 scope:(long long)arg2 block:(id /* block */)arg3;
+ (id)sharedPool;

- (void).cxx_destruct;
- (id)_poolForContext:(id)arg1;
- (void)_purgeRecordCachesForApplicationContainerPaths:(id)arg1 expiryDate:(id)arg2;
- (id)acquireCacheWithContext:(id)arg1 scope:(long long)arg2;
- (id)init;
- (id)pools;
- (id)queue;
- (id)recordExpiryQueue;
- (void)releaseCache:(id)arg1;
- (void)setPools:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRecordExpiryQueue:(id)arg1;

@end
