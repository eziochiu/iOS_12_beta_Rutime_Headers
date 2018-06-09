/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

@interface _DASScheduler : NSObject <NSXPCListenerDelegate, _DASActivityBackgroundLaunchScheduler, _DASActivityGroupScheduler, _DASActivityMetering, _DASActivitySchedulerIntrospecting> {
    NSMutableDictionary * _activityToDataMap;
    NSObject<OS_dispatch_queue> * _connectionCreationQueue;
    NSObject<OS_os_log> * _dasFrameworkLog;
    NSXPCListenerEndpoint * _endpoint;
    bool  _interrupted;
    NSObject<OS_dispatch_queue> * _queue;
    _DASSubmissionRateLimiter * _rateLimiter;
    int  _resubmitToken;
    NSObject<OS_dispatch_queue> * _runQueue;
    NSMutableDictionary * _startedActivities;
    NSMutableDictionary * _submittedActivities;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSMutableDictionary *activityToDataMap;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionCreationQueue;
@property (nonatomic, retain) NSObject<OS_os_log> *dasFrameworkLog;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool interrupted;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) _DASSubmissionRateLimiter *rateLimiter;
@property (nonatomic) int resubmitToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *runQueue;
@property (nonatomic, retain) NSMutableDictionary *startedActivities;
@property (nonatomic, retain) NSMutableDictionary *submittedActivities;
@property (readonly) Class superclass;
@property (retain) NSXPCConnection *xpcConnection;

+ (id)scheduler;
+ (id)schedulerWithEndpoint:(id)arg1;
+ (id)sharedScheduler;

- (void).cxx_destruct;
- (void)activityCanceled:(id)arg1;
- (void)activityCompleted:(id)arg1;
- (id)activityRunStatistics;
- (void)activityStarted:(id)arg1;
- (void)activityStartedWithParameters:(id)arg1;
- (void)activityStoppedWithParameters:(id)arg1;
- (id)activityToDataMap;
- (void)cancelActivities:(id)arg1;
- (id)connectionCreationQueue;
- (void)createActivityGroup:(id)arg1;
- (id)currentConnection;
- (id)currentPredictions;
- (id)dasFrameworkLog;
- (void)dealloc;
- (id)endpoint;
- (void)forceRunActivities:(id)arg1;
- (void)handleEligibleActivities:(id /* block */)arg1;
- (void)handleNoLongerRunningActivities:(id)arg1;
- (void)handleRescindedActivity:(id)arg1;
- (id)initWithListenerEndpoint:(id)arg1;
- (bool)interrupted;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)queue;
- (id)rateLimiter;
- (void)resubmitPendingActivities;
- (void)resubmitRunningActivities;
- (int)resubmitToken;
- (void)runActivities:(id)arg1;
- (id)runQueue;
- (id)runningActivities;
- (id)runningGroupActivities;
- (id)scoresForActivityWithName:(id)arg1;
- (void)setActivityToDataMap:(id)arg1;
- (void)setConnectionCreationQueue:(id)arg1;
- (void)setDasFrameworkLog:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setInterrupted:(bool)arg1;
- (void)setMinimumBackgroundFetchInterval:(double)arg1 forApp:(id)arg2;
- (void)setQueue:(id)arg1;
- (void)setRateLimiter:(id)arg1;
- (void)setResubmitToken:(int)arg1;
- (void)setRunQueue:(id)arg1;
- (void)setStartedActivities:(id)arg1;
- (void)setSubmittedActivities:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setupXPCConnectionWithEndpoint:(id)arg1;
- (id)startedActivities;
- (void)submitActivities:(id)arg1;
- (void)submitActivitiesInternal:(id)arg1;
- (void)submitActivity:(id)arg1;
- (void)submitActivity:(id)arg1 inGroup:(id)arg2;
- (void)submitActivity:(id)arg1 inGroupWithName:(id)arg2;
- (bool)submitActivityInternal:(id)arg1;
- (id)submittedActivities;
- (id)submittedTaskState;
- (void)suspendActivities:(id)arg1;
- (void)unprotectedEstablishDaemonConnectionIfInterrupted;
- (void)updateActivity:(id)arg1 withParameters:(id)arg2;
- (void)updateBytesConsumedForActivity:(id)arg1 downloadedOnWifi:(unsigned long long)arg2 downloadedOnCell:(unsigned long long)arg3 uploadedOnWifi:(unsigned long long)arg4 uploadedOnCell:(unsigned long long)arg5;
- (id)xpcConnection;

@end
