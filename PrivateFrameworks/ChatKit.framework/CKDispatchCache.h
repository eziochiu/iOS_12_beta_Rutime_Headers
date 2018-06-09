/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDispatchCache : NSObject <IMSystemMonitorListener> {
    long long  _dispatchPriority;
    CKDispatchQueue * _dispatchQueue;
    NSObject<OS_dispatch_queue> * _lockQueue;
    NSCache * _objectCache;
    NSMutableDictionary * _pendingGroups;
    NSCountedSet * _pendingKeys;
}

@property (nonatomic) long long dispatchPriority;
@property (nonatomic, retain) CKDispatchQueue *dispatchQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *lockQueue;
@property (nonatomic, retain) NSCache *objectCache;
@property (nonatomic, retain) NSMutableDictionary *pendingGroups;
@property (nonatomic, retain) NSCountedSet *pendingKeys;

- (void).cxx_destruct;
- (void)_beginGeneratingForKeyUnlocked:(id)arg1;
- (void)_endGeneratingForKeyUnlocked:(id)arg1;
- (void)beginGeneratingForKey:(id)arg1;
- (id)cachedObjectForKey:(id)arg1;
- (void)clearQueue;
- (void)dealloc;
- (long long)dispatchPriority;
- (id)dispatchQueue;
- (void)endGeneratingForKey:(id)arg1;
- (void)enqueueBlock:(id /* block */)arg1 withPriority:(long long)arg2;
- (void)enqueueGenerationBlock:(id /* block */)arg1 completion:(id /* block */)arg2 withPriority:(long long)arg3 forKey:(id)arg4;
- (id)init;
- (id)initWithCacheLimit:(unsigned long long)arg1 dispatchPriority:(long long)arg2;
- (bool)isGeneratingForKey:(id)arg1;
- (id)lockQueue;
- (id)objectCache;
- (id)pendingGroups;
- (id)pendingKeys;
- (void)resume;
- (void)setCachedObject:(id)arg1 forKey:(id)arg2;
- (void)setDispatchPriority:(long long)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setLockQueue:(id)arg1;
- (void)setObjectCache:(id)arg1;
- (void)setPendingGroups:(id)arg1;
- (void)setPendingKeys:(id)arg1;
- (void)systemApplicationDidSuspend;
- (bool)waitOnGenerationForKey:(id)arg1;

@end
