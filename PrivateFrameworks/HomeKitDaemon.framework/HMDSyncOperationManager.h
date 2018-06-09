/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSyncOperationManager : HMFObject <HMFTimerDelegate> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMutableArray * _cloudCancelPauseOperations;
    HMDSyncOperationQueue * _cloudFetchOperations;
    HMFExponentialBackoffTimer * _cloudPushDelayTimer;
    HMDSyncOperationQueue * _cloudPushOperations;
    NSMutableArray * _cloudVerifyAccountOperations;
    NSMutableArray * _cloudZoneFetchOperations;
    NSMutableDictionary * _cloudZoneFetchOperationsMap;
    NSMutableArray * _cloudZonePushOperations;
    NSMutableDictionary * _cloudZonePushOperationsMap;
    HMDHomeManager * _homeManager;
    long long  _pauseCloudPushLevel;
    bool  _pauseQueue;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    bool  _syncLoopDialogDisplayed;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) NSMutableArray *cloudCancelPauseOperations;
@property (nonatomic, retain) HMDSyncOperationQueue *cloudFetchOperations;
@property (nonatomic, retain) HMFExponentialBackoffTimer *cloudPushDelayTimer;
@property (nonatomic, retain) HMDSyncOperationQueue *cloudPushOperations;
@property (nonatomic, retain) NSMutableArray *cloudVerifyAccountOperations;
@property (nonatomic, retain) NSMutableArray *cloudZoneFetchOperations;
@property (nonatomic, retain) NSMutableDictionary *cloudZoneFetchOperationsMap;
@property (nonatomic, retain) NSMutableArray *cloudZonePushOperations;
@property (nonatomic, retain) NSMutableDictionary *cloudZonePushOperationsMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic) long long pauseCloudPushLevel;
@property (nonatomic) bool pauseQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (getter=wasSyncLoopDialogDisplayed, nonatomic) bool syncLoopDialogDisplayed;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (long long)_cloudZoneFetchOperationsCountTotal;
- (long long)_cloudZonePushOperationsCountTotal;
- (void)_handleCancelledOperations:(id)arg1;
- (void)_handleNextOperation;
- (void)_reportPossibleSyncLoop;
- (void)addOperation:(id)arg1;
- (void)addOperation:(id)arg1 withDelay:(double)arg2;
- (void)cancelOperations;
- (id)clientQueue;
- (id)cloudCancelPauseOperations;
- (id)cloudFetchOperations;
- (id)cloudPushDelayTimer;
- (id)cloudPushOperations;
- (id)cloudVerifyAccountOperations;
- (id)cloudZoneFetchOperations;
- (id)cloudZoneFetchOperationsMap;
- (id)cloudZonePushOperations;
- (id)cloudZonePushOperationsMap;
- (id)dequeueNextOperation;
- (id)description;
- (id)dumpState;
- (id)homeManager;
- (id)initWithClientQueue:(id)arg1 homeManager:(id)arg2;
- (void)kick;
- (void)killCloudPushAndResume;
- (void)pause;
- (void)pauseAndWaitForCurrentOperationCompletion:(id /* block */)arg1;
- (void)pauseCloudPush;
- (long long)pauseCloudPushLevel;
- (bool)pauseQueue;
- (id)propertyQueue;
- (void)resetCloudPushTimer:(id)arg1;
- (void)resume;
- (void)resumeCloudPush;
- (void)setCloudCancelPauseOperations:(id)arg1;
- (void)setCloudFetchOperations:(id)arg1;
- (void)setCloudPushDelayTimer:(id)arg1;
- (void)setCloudPushOperations:(id)arg1;
- (void)setCloudVerifyAccountOperations:(id)arg1;
- (void)setCloudZoneFetchOperations:(id)arg1;
- (void)setCloudZoneFetchOperationsMap:(id)arg1;
- (void)setCloudZonePushOperations:(id)arg1;
- (void)setCloudZonePushOperationsMap:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setPauseCloudPushLevel:(long long)arg1;
- (void)setPauseQueue:(bool)arg1;
- (void)setSyncLoopDialogDisplayed:(bool)arg1;
- (void)timerDidFire:(id)arg1;
- (bool)wasSyncLoopDialogDisplayed;
- (id)workQueue;

@end
