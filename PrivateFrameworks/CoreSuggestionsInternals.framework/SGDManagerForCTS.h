/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDManagerForCTS : NSObject {
    NSObject<OS_dispatch_source> * _adjustActivitySource;
    SGServiceContext * _context;
    struct SGDSuggestManagerCTSCriteriaState { 
        bool hasItemsHighPriority; 
        bool hasItemsLowPriority; 
    }  _ctsCriteriaState;
    NSObject<OS_dispatch_queue> * _frontfillQueue;
    NSObject<OS_dispatch_semaphore> * _frontfillSemaphoreForTesting;
    NSObject<OS_dispatch_source> * _frontfillSource;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _geocodeLock;
    NSObject<OS_dispatch_queue> * _harvestQueue;
    SGSqlEntityStore * _harvestStore;
    double  _lastFrontfillFinishTime;
    SGQueryPredictions * _queryPredictions;
    <SGXPCActivityManagerProtocol> * _xpcActivityManager;
}

+ (id)defaultInstance;
+ (id)sharedSingletonInstance;

- (void).cxx_destruct;
- (bool)_attemptToProcessSearchableItemWithoutDissection:(id)arg1;
- (void)_doAdjustCriteriaForCTS;
- (void)_doFrontfillHarvestOnFrontfillQueue;
- (void)_performCollectWeeklyStats:(id)arg1;
- (void)_performContactDetailCacheRebuildActivity:(id)arg1;
- (void)_performHarvestActivity:(id)arg1 callback:(id /* block */)arg2;
- (void)_performIdentityAnalysisActivity:(id)arg1;
- (void)_performPMLTrainingActivity:(id)arg1;
- (void)_performProcessPendingGeocodesActivity:(id)arg1;
- (void)_performSendRTCActivity;
- (void)_performTrimActivity:(id)arg1;
- (void)_performVacuumActivity;
- (void)_registerForCTSHarvestActivity;
- (void)_registerForCTSIdentityAnalysisActivity;
- (void)_registerForCTSSendRTCActivity;
- (void)_registerForCTSTrimActivity;
- (void)_registerForCTSVacuumActivity;
- (void)_registerForCollectWeeklyStats;
- (void)_registerForContactDetailCacheRebuildActivity;
- (void)_registerForPMLTrainingActivity;
- (void)_registerProcessPendingGeocodesActivity;
- (struct SGMEventICSSourceType_ { unsigned long long x1; })accountTypeFor:(id)arg1;
- (id)accountTypeForBundle:(id)arg1;
- (void)adjustCriteriaForCTS;
- (void)dealloc;
- (void)drainDefaultQueueCompletely;
- (bool)drainHarvestQueue:(id)arg1 highPriorityOnly:(bool)arg2 continuingWhile:(id /* block */)arg3;
- (bool)hasAlreadyHarvestedSearchableItem:(id)arg1;
- (struct SGMEventICSSourceType_ { unsigned long long x1; })icsTypeForBundle:(id)arg1;
- (id)initWithHarvestStore:(id)arg1 queryPredictions:(id)arg2 xpcActivityManager:(id)arg3;
- (bool)processSearchableItem:(id)arg1 pipeline:(id)arg2 context:(id)arg3;
- (bool)processSearchableItemForTesting:(id)arg1;
- (void)registerForCTS;
- (void)resetLastFrontfillFinishTimeForTesting;
- (void)resumeFrontfillForTesting;
- (void)setQueryPredictionsForTesting:(id)arg1;
- (void)suspendFrontfillForTesting;
- (void)triggerFrontfillHarvest;
- (void)waitForXpcActivityQueue;
- (void)waitUntilFrontfillFinishedForTesting;

@end
