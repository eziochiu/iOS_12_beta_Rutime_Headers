/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLRankedLayoutSource : NSObject <FCFetchCoordinatorDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    <NFLRankedLayoutSourceDelegate> * _delegate;
    NFLFeedSettings * _feedSettings;
    FCFetchCoordinator * _fetchCoordinator;
    FCThreadSafeMutableSet * _fulfilledRequests;
    NSOperationQueue * _operationQueue;
    long long  _qualityOfService;
    double  _tileProminenceScoreBalanceValue;
    NSMutableDictionary * _treesByTileInfo;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, copy) NSString *debugDescription;
@property <NFLRankedLayoutSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NFLFeedSettings *feedSettings;
@property (nonatomic, retain) FCFetchCoordinator *fetchCoordinator;
@property (nonatomic, retain) FCThreadSafeMutableSet *fulfilledRequests;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic) long long qualityOfService;
@property (readonly) Class superclass;
@property (nonatomic) double tileProminenceScoreBalanceValue;
@property (nonatomic, retain) NSMutableDictionary *treesByTileInfo;

- (void).cxx_destruct;
- (id)accessQueue;
- (id)delegate;
- (id)feedSettings;
- (id)fetchCoordinator;
- (void)fetchCoordinator:(id)arg1 addFetchOperation:(id)arg2 context:(id)arg3;
- (id)fetchCoordinator:(id)arg1 fetchOperationForKeys:(id)arg2 context:(id)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5;
- (void)fetchCoordinator:(id)arg1 filterKeysToFetch:(id)arg2 isFirstAttempt:(bool)arg3 context:(id)arg4;
- (id)fulfilledRequests;
- (id)init;
- (id)initWithFeedSettings:(id)arg1 qualityOfService:(long long)arg2;
- (id)operationQueue;
- (long long)qualityOfService;
- (void)rankedLayoutsForRequests:(id)arg1 completion:(id /* block */)arg2;
- (void)setAccessQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFeedSettings:(id)arg1;
- (void)setFetchCoordinator:(id)arg1;
- (void)setFulfilledRequests:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setTileProminenceScoreBalanceValue:(double)arg1;
- (void)setTreesByTileInfo:(id)arg1;
- (double)tileProminenceScoreBalanceValue;
- (id)treesByTileInfo;

@end
