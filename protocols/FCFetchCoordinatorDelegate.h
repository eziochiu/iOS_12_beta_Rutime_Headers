/* made by EzioChiu.
 */

@protocol FCFetchCoordinatorDelegate <NSObject>

@required

- (void)fetchCoordinator:(FCFetchCoordinator *)arg1 addFetchOperation:(NSOperation *)arg2 context:(id)arg3;
- (NSOperation *)fetchCoordinator:(FCFetchCoordinator *)arg1 fetchOperationForKeys:(NSSet *)arg2 context:(id)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5;
- (void)fetchCoordinator:(FCFetchCoordinator *)arg1 filterKeysToFetch:(NSMutableSet *)arg2 isFirstAttempt:(bool)arg3 context:(id)arg4;

@end
