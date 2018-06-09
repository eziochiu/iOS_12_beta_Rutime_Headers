/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFetchCoordinator : NSObject <FCOperationThrottlerDelegate> {
    NFMutexLock * _accessLock;
    NSCountedSet * _allKeys;
    <FCFetchCoordinatorDelegate> * _delegate;
    NSHashTable * _fetchGroups;
    NSMapTable * _fetchOperationsByGroup;
    FCBoostableOperationThrottler * _fetchThrottler;
    unsigned long long  _maxConcurrentFetchCount;
}

@property (nonatomic, retain) NFMutexLock *accessLock;
@property (nonatomic, retain) NSCountedSet *allKeys;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FCFetchCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSHashTable *fetchGroups;
@property (nonatomic, retain) NSMapTable *fetchOperationsByGroup;
@property (nonatomic, retain) FCBoostableOperationThrottler *fetchThrottler;
@property (readonly) unsigned long long hash;
@property unsigned long long maxConcurrentFetchCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessLock;
- (void)addFetchGroup:(id)arg1;
- (id)allKeys;
- (void)beginFetchesIfNeededWithLock;
- (void)cancelFetchesIfNeededWithLock;
- (id)delegate;
- (id)fetchGroups;
- (id)fetchKey:(id)arg1 qualityOfService:(long long)arg2 completionQueue:(id)arg3 completion:(id /* block */)arg4;
- (id)fetchKeys:(id)arg1 context:(id)arg2 qualityOfService:(long long)arg3 relativePriority:(long long)arg4 completionQueue:(id)arg5 completion:(id /* block */)arg6;
- (id)fetchKeysUnconditionally:(id)arg1 context:(id)arg2 qualityOfService:(long long)arg3 relativePriority:(long long)arg4 completionQueue:(id)arg5 completion:(id /* block */)arg6;
- (id)fetchOperationsByGroup;
- (id)fetchThrottler;
- (id)init;
- (unsigned long long)maxConcurrentFetchCount;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (void)removeFetchGroup:(id)arg1;
- (void)setAccessLock:(id)arg1;
- (void)setAllKeys:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFetchGroups:(id)arg1;
- (void)setFetchOperationsByGroup:(id)arg1;
- (void)setFetchThrottler:(id)arg1;
- (void)setMaxConcurrentFetchCount:(unsigned long long)arg1;

@end
