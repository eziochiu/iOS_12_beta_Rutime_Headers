/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCacheCoordinator : NSObject <FCOperationThrottlerDelegate> {
    FCThreadSafeMutableDictionary * _cacheHintsByKey;
    <FCCacheCoordinatorDelegate> * _delegate;
    FCCacheCoordinatorFlushPolicy * _flushPolicy;
    <FCOperationThrottler> * _flushThrottler;
    bool  _flushingEnabled;
    NFMutexLock * _interestLock;
    NSCountedSet * _interestedKeys;
    NSMutableSet * _storedKeys;
    <FCCacheCoordinatorLocking> * _underlyingLock;
}

@property (nonatomic, retain) FCThreadSafeMutableDictionary *cacheHintsByKey;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FCCacheCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FCCacheCoordinatorFlushPolicy *flushPolicy;
@property (nonatomic, retain) <FCOperationThrottler> *flushThrottler;
@property (getter=isFlushingEnabled) bool flushingEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NFMutexLock *interestLock;
@property (nonatomic, retain) NSCountedSet *interestedKeys;
@property (nonatomic, retain) NSMutableSet *storedKeys;
@property (readonly) Class superclass;
@property (nonatomic, retain) <FCCacheCoordinatorLocking> *underlyingLock;

- (void).cxx_destruct;
- (void)_modifyCacheHintForKeys:(id)arg1 withBlock:(id /* block */)arg2;
- (void)addInterestInKeys:(id)arg1;
- (bool)cacheContainsKey:(id)arg1;
- (id)cacheHintsByKey;
- (void)dealloc;
- (id)delegate;
- (void)didAccessKeys:(id)arg1;
- (void)didInsertKeyIntoCache:(id)arg1 withLifetimeHint:(long long)arg2;
- (void)didInsertKeysIntoCache:(id)arg1 withLifetimeHints:(id)arg2;
- (void)didRemoveKeysFromCache:(id)arg1;
- (void)enableFlushingWithPolicy:(id)arg1;
- (id)filterKeysForPreemptiveFlush:(id)arg1 cacheHints:(id)arg2;
- (id)flushPolicy;
- (id)flushThrottler;
- (id)holdTokenForKey:(id)arg1;
- (id)holdTokenForKeys:(id)arg1;
- (id)holdTokensForKeys:(id)arg1;
- (id)init;
- (id)interestLock;
- (id)interestedKeys;
- (bool)isFlushingEnabled;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (void)performCacheRead:(id /* block */)arg1;
- (void)performCacheWrite:(id /* block */)arg1;
- (void)performReadSync:(id /* block */)arg1;
- (void)performWriteSync:(id /* block */)arg1;
- (id)persistableHints;
- (void)removeInterestInKeys:(id)arg1;
- (void)setCacheHintsByKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFlushPolicy:(id)arg1;
- (void)setFlushThrottler:(id)arg1;
- (void)setFlushingEnabled:(bool)arg1;
- (void)setInterestLock:(id)arg1;
- (void)setInterestedKeys:(id)arg1;
- (void)setStoredKeys:(id)arg1;
- (void)setUnderlyingLock:(id)arg1;
- (void)setupWithInitialKeys:(id)arg1;
- (void)setupWithInitialKeys:(id)arg1 persistedHints:(id)arg2;
- (id)storedKeys;
- (id)underlyingLock;

@end
