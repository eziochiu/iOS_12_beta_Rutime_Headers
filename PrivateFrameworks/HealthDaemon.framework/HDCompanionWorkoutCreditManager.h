/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCompanionWorkoutCreditManager : NSObject <HDDataObserver, HDHealthDaemonReadyObserver> {
    NSNumber * _anchor;
    NSCalendar * _calendar;
    bool  _hasPairedWatches;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_fastForwardAnchor;
- (bool)_queue_generateAndSaveSamplesForIntervals:(id)arg1 withExerciseTable:(id)arg2 standHourTable:(id)arg3 error:(id)arg4;
- (void)_queue_performWorkoutCreditFixup;
- (void)_queue_processWorkout;
- (id)_queue_samplesForType:(id)arg1 fromStartTime:(id)arg2 toEndTime:(id)arg3;
- (void)_queue_setWorkoutAnchor:(id)arg1;
- (id)_queue_userLocalProtectedDomain;
- (id)_queue_workoutAnchor;
- (id)_queue_workoutsSinceAnchor:(id*)arg1 error:(id)arg2;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)performWorkoutCreditFixup;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)stopObservingWorkouts;

@end
