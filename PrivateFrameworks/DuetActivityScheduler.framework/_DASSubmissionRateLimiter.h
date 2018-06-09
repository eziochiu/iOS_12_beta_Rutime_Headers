/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

@interface _DASSubmissionRateLimiter : NSObject {
    NSMutableDictionary * _activityGroupQueue;
    NSMutableDictionary * _activityGroups;
    int  _dastoolToken;
    NSObject<OS_dispatch_queue> * _delayedSubmissionQueue;
    NSObject<OS_os_log> * _log;
    NSMutableDictionary * _penaltyBox;
    NSMutableDictionary * _submittedActivities;
}

@property (nonatomic, retain) NSMutableDictionary *activityGroupQueue;
@property (nonatomic, retain) NSMutableDictionary *activityGroups;
@property (nonatomic) int dastoolToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delayedSubmissionQueue;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSMutableDictionary *penaltyBox;
@property (nonatomic, retain) NSMutableDictionary *submittedActivities;

+ (id)groupNameForActivity:(id)arg1;
+ (id)pluginGroupNameForGroupName:(id)arg1;

- (void).cxx_destruct;
- (void)activityCanceled:(id)arg1 withScheduler:(id)arg2;
- (void)activityCompleted:(id)arg1 withScheduler:(id)arg2;
- (id)activityGroupQueue;
- (id)activityGroups;
- (void)addToPenaltyBox:(id)arg1 atDate:(id)arg2;
- (void)admitNextActivityAfterCompletionOf:(id)arg1 withScheduler:(id)arg2;
- (unsigned long long)capacityForGroupName:(id)arg1;
- (void)createActivityGroup:(id)arg1;
- (int)dastoolToken;
- (void)dealloc;
- (id)delayedSubmissionQueue;
- (void)handleCanceledActivity:(id)arg1;
- (void)handleCanceledActivity:(id)arg1 withGroupName:(id)arg2;
- (id)init;
- (id)log;
- (id)penaltyBox;
- (void)removeAllObjects;
- (void)removeFromPenaltyBox:(id)arg1;
- (void)setActivityGroupQueue:(id)arg1;
- (void)setActivityGroups:(id)arg1;
- (void)setDastoolToken:(int)arg1;
- (void)setDelayedSubmissionQueue:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setPenaltyBox:(id)arg1;
- (void)setSubmittedActivities:(id)arg1;
- (bool)shouldDelayGroupSubmissionOfActivity:(id)arg1;
- (bool)shouldDelaySubmissionOfActivity:(id)arg1;
- (bool)shouldQueueActivity:(id)arg1;
- (void)submitActivities:(id)arg1 withScheduler:(id)arg2;
- (void)submitActivity:(id)arg1 inGroup:(id)arg2 withScheduler:(id)arg3;
- (void)submitActivity:(id)arg1 withScheduler:(id)arg2;
- (id)submittedActivities;
- (void)updateCapacity:(unsigned long long)arg1 forGroupName:(id)arg2;

@end
