/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKOutstandingFetchOperationManager : NSObject <HKFetchOperationDelegate> {
    NSMutableArray * _activeFetchOperations;
    long long  _maxConcurrentFetchOperations;
    bool  _needsRebalanceFetchOperations;
    NSMutableArray * _pendingFetchOperations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long maxConcurrentFetchOperations;
@property (readonly) Class superclass;

+ (void)setSharedOperationManager:(id)arg1;
+ (id)sharedOperationManager;

- (void).cxx_destruct;
- (void)_executeFetchOperation:(id)arg1;
- (void)_fillActiveFetchOperations;
- (void)_rebalanceFetchOperations;
- (bool)_removeFetchOperationFromActiveOperations:(id)arg1;
- (bool)_removeFetchOperationFromPendingOperations:(id)arg1;
- (void)_setNeedsRebalanceFetchOperations;
- (void)_sortPendingFetchOperations;
- (void)addFetchOperation:(id)arg1;
- (void)addFetchOperations:(id)arg1;
- (void)fetchOperationDidUpdatePriority:(id)arg1;
- (id)initWithMaxConcurrentFetchOperations:(long long)arg1;
- (long long)maxConcurrentFetchOperations;
- (void)removeFetchOperation:(id)arg1;
- (void)removeFetchOperations:(id)arg1;
- (void)setMaxConcurrentFetchOperations:(long long)arg1;

@end
