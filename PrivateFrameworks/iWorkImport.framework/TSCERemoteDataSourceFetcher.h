/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCERemoteDataSourceFetcher : NSObject {
    TSCERemoteDataSpecifierSet * _allRequestedKeys;
    TSCERemoteDataCoordinator * _coordinator;
    bool  _doFullRefresh;
    bool  _earlyRefreshRequested;
    TSUNetworkReachability * _internetReachability;
    NSDate * _lastFullRefreshDate;
    NSDate * _lastRequestDate;
    TSCERemoteDataSpecifierSet * _newlyRequestedKeys;
    bool  _offline;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _requestsInFlight;
    TSUNetworkReachability * _serverReachability;
    long long  _state;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, readonly) TSCERemoteDataSpecifierSet *allRequestedKeys;
@property (nonatomic, readonly) TSCERemoteDataCoordinator *coordinator;
@property (nonatomic, readonly) long long dataKind;
@property bool doFullRefresh;
@property bool earlyRefreshRequested;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) TSUNetworkReachability *internetReachability;
@property (nonatomic, retain) NSDate *lastFullRefreshDate;
@property (nonatomic, retain) NSDate *lastRequestDate;
@property (nonatomic, readonly) double minimumTimeBetweenRequests;
@property (nonatomic, readonly) TSCERemoteDataSpecifierSet *newlyRequestedKeys;
@property bool offline;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSString *reachabilityCheckHost;
@property (nonatomic, readonly) double recommendedTimeBetweenRequests;
@property (nonatomic, readonly) double recommendedTimeBetweenRequestsForWWAN;
@property long long requestsInFlight;
@property (nonatomic, retain) TSUNetworkReachability *serverReachability;
@property long long state;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;

+ (id)fetcherWithCoordinator:(id)arg1;

- (void).cxx_destruct;
- (id)addRemoteDataInterest:(id)arg1;
- (id)allRequestedKeys;
- (void)autoCompleteQuotesWithInput:(id)arg1 completion:(id /* block */)arg2;
- (bool)canFetchKey:(id)arg1;
- (id)coordinator;
- (long long)dataKind;
- (void)dealloc;
- (bool)doFullRefresh;
- (bool)earlyRefreshRequested;
- (void)enqueueRequestForKeys:(id)arg1;
- (void)fetchQuotesWithTickers:(id)arg1 completion:(id /* block */)arg2;
- (id)fetchableKeysFromSet:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoordinator:(id)arg1;
- (id)internetReachability;
- (id)lastFullRefreshDate;
- (id)lastRequestDate;
- (double)minimumTimeBetweenRequests;
- (id)newlyRequestedKeys;
- (bool)offline;
- (void)p_configureReachabilityWithHost:(id)arg1;
- (void)p_refreshSpecifiers;
- (id)queue;
- (id)reachabilityCheckHost;
- (double)recommendedTimeBetweenRequests;
- (double)recommendedTimeBetweenRequestsForWWAN;
- (id)removeRemoteDataInterest:(id)arg1;
- (void)requestCompleted;
- (void)requestLaunched;
- (long long)requestsInFlight;
- (void)resumeUpdating;
- (void)sendRequestForKeys:(id)arg1;
- (id)serverReachability;
- (void)setDoFullRefresh:(bool)arg1;
- (void)setEarlyRefreshRequested:(bool)arg1;
- (void)setInternetReachability:(id)arg1;
- (void)setLastFullRefreshDate:(id)arg1;
- (void)setLastRequestDate:(id)arg1;
- (void)setOffline:(bool)arg1;
- (void)setRequestsInFlight:(long long)arg1;
- (void)setServerReachability:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTimer:(id)arg1;
- (long long)state;
- (void)stopUpdating;
- (id)timer;

@end
