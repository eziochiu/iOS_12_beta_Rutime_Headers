/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCloudZoneSyncEngine : NSObject <APSConnectionDelegate, CATNetworkReachabilityDelegate> {
    CRKCloudAssetStore * _assetStore;
    CKContainer * _container;
    <CRKCloudZoneSyncDelegate> * _delegate;
    long long  _enrollmentStatus;
    NSMutableArray * _fetchChangesCompletionStash;
    CATStateMachine * _fsm;
    CRKCloudLocalDeltaQueue * _localDeltaQueue;
    CATOperationQueue * _operationQueue;
    NSMutableDictionary * _pushCompletionsByLocalDeltaIdentifier;
    APSConnection * _pushConnection;
    CATNetworkReachability * _reachability;
    bool  _reachabilityScheduled;
    NSMutableDictionary * _recordCache;
    CKServerChangeToken * _serverToken;
    bool  _startScheduled;
    CRKFileBasedKeyedDataStore * _store;
    NSNumber * _subscribed;
    CKRecordZoneID * _zoneId;
    NSString * mEnrollmentStatusKey;
    NSString * mLocalDeltaQueueKey;
    NSString * mPushTopic;
    NSString * mRecordCacheKey;
    NSString * mServerTokenKey;
    NSString * mSubscribedKey;
}

@property (nonatomic, retain) CRKCloudAssetStore *assetStore;
@property (nonatomic, retain) CKContainer *container;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRKCloudZoneSyncDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long enrollmentStatus;
@property (nonatomic, readonly) NSMutableArray *fetchChangesCompletionStash;
@property (nonatomic, retain) CATStateMachine *fsm;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CRKCloudLocalDeltaQueue *localDeltaQueue;
@property (nonatomic, retain) CATOperationQueue *operationQueue;
@property (nonatomic, retain) NSMutableDictionary *pushCompletionsByLocalDeltaIdentifier;
@property (nonatomic, retain) APSConnection *pushConnection;
@property (nonatomic, retain) CATNetworkReachability *reachability;
@property (nonatomic) bool reachabilityScheduled;
@property (nonatomic, readonly) NSMutableDictionary *recordCache;
@property (nonatomic, retain) CKServerChangeToken *serverToken;
@property (nonatomic) bool startScheduled;
@property (nonatomic, retain) CRKFileBasedKeyedDataStore *store;
@property (nonatomic, retain) NSNumber *subscribed;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKRecordZoneID *zoneId;

- (void).cxx_destruct;
- (id)assetStore;
- (void)attemptPushNextLocalDelta;
- (void)checkRecordZoneForRecordsWithContext:(id)arg1;
- (void)cleanupZone;
- (void)cleanupZoneWithCompletion:(id /* block */)arg1;
- (id)cloudRecordFromCKRecord:(id)arg1;
- (id /* block */)completionFromContext:(id)arg1;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (id)container;
- (void)debounceLocalDelta:(id)arg1;
- (void)debounceRemoteDelta:(id)arg1;
- (id)delegate;
- (void)deleteZoneWithCompletion:(id /* block */)arg1;
- (void)dequeueLocalDelta:(id)arg1;
- (void)disableReachability;
- (void)dumpFetchChangesStash:(bool)arg1;
- (void)enableReachability;
- (void)enableRemoteNotificationsOperationDidFinish:(id)arg1 userInfo:(id)arg2;
- (void)enableRemoteNotificationsWithCompletion:(id /* block */)arg1;
- (void)enqueueLocalDelta:(id)arg1;
- (void)enqueueLocalDeltaWithContext:(id)arg1;
- (long long)enrollmentStatus;
- (void)enterCleaningStateWithContext:(id)arg1;
- (void)enterPausedStateWithContext:(id)arg1;
- (void)enterReadyStateWithContext:(id)arg1;
- (void)enterRunningStateWithContext:(id)arg1;
- (void)enterSettingUpStateWithContext:(id)arg1;
- (void)enterShutDownStateWithContext:(id)arg1;
- (void)enterStoppedStateWithContext:(id)arg1;
- (void)fetchChanges;
- (id)fetchChangesCompletionStash;
- (void)fetchChangesWithCompletion:(id /* block */)arg1;
- (void)fetchRemoteChangesWithContext:(id)arg1;
- (id)fsm;
- (bool)hasFetchedFromServer;
- (id)initWithDelegate:(id)arg1 store:(id)arg2 container:(id)arg3 zoneId:(id)arg4;
- (void)initilizeStateMachine;
- (id)localDeltaFromTuple:(id)arg1;
- (id)localDeltaQueue;
- (void)networkBecameReachable;
- (void)networkBecameUnreachable;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)operationQueue;
- (void)panicPull;
- (void)panicPullWithCompletion:(id /* block */)arg1;
- (void)privateBeginFetching;
- (void)privateBeginPaused;
- (void)privateBeginReady;
- (void)privateBeginRunning;
- (void)privateBeginShutDown;
- (id)pushCompletionsByLocalDeltaIdentifier;
- (id)pushConnection;
- (void)pushLocalDelta:(id)arg1;
- (void)pushLocalDelta:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)pushLocalDeltaOperationDidFinish:(id)arg1;
- (id)reachability;
- (void)reachabilityDidChange:(id)arg1;
- (bool)reachabilityScheduled;
- (id)recordCache;
- (void)removeRecordCacheRecordName:(id)arg1;
- (void)requestStartWithConetext:(id)arg1;
- (void)retryableDeleteRecordZoneOperationDidFinish:(id)arg1 userInfo:(id)arg2;
- (void)retryableFetchZoneChangesOperationDidFinish:(id)arg1 userInfo:(id)arg2;
- (void)retryablePeekRecordZoneOperationDidFinish:(id)arg1 userInfo:(id)arg2;
- (void)safeTransitionForSelector:(SEL)arg1;
- (void)safeTransitionForSelector:(SEL)arg1 withContext:(id)arg2;
- (id)serverToken;
- (void)setAssetStore:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnrollmentStatus:(long long)arg1;
- (void)setFsm:(id)arg1;
- (void)setLocalDeltaQueue:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setPushCompletionsByLocalDeltaIdentifier:(id)arg1;
- (void)setPushConnection:(id)arg1;
- (void)setReachability:(id)arg1;
- (void)setReachabilityScheduled:(bool)arg1;
- (void)setRecordCache:(id)arg1;
- (void)setRecordCacheRecord:(id)arg1 forRecordName:(id)arg2;
- (void)setServerToken:(id)arg1;
- (void)setStartScheduled:(bool)arg1;
- (void)setStore:(id)arg1;
- (void)setSubscribed:(id)arg1;
- (void)setZoneId:(id)arg1;
- (void)shutDown;
- (void)shutDownWithCompletion:(id /* block */)arg1;
- (void)start;
- (bool)startScheduled;
- (void)startWithCompletion:(id /* block */)arg1;
- (void)stashFetchChangesWithContext:(id)arg1;
- (void)stop;
- (void)stopWithCompletion:(id /* block */)arg1;
- (id)store;
- (id)subscribed;
- (id)zoneId;

@end
