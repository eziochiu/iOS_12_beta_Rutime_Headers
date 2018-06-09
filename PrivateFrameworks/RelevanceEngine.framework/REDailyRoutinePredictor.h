/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REDailyRoutinePredictor : REObservableSingleton <REPeriodOfDayPredictorDelegate> {
    REUpNextTimer * _beginEveningRoutineTimer;
    REUpNextTimer * _beginMorningRoutineTimer;
    unsigned long long  _currentRoutine;
    NSDateInterval * _currentRoutineInterval;
    REUpNextTimer * _endEveningRoutineTimer;
    REUpNextTimer * _endMorningRoutineTimer;
    REPeriodOfDayPredictor * _periodOfDayPredictor;
    NSObject<OS_dispatch_queue> * _queue;
    NSLock * _routineLock;
}

@property (nonatomic, readonly) NSDateInterval *currentRoutineInterval;
@property (nonatomic, readonly) unsigned long long currentRoutineType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_eveningRoutineIntervalForEvening:(id)arg1;
- (id)_morningRoutineIntervalForMorning:(id)arg1;
- (void)_queue_didBeginEveningRoutine;
- (void)_queue_didBeginMorningRoutine;
- (void)_queue_didEndEveningRoutine;
- (void)_queue_didEndMorningRoutine;
- (void)_queue_setupEveningBeginTimerIfNeeded;
- (void)_queue_setupMorningBeginTimerIfNeeded;
- (void)_updateCurrentRoutine;
- (id)currentRoutineInterval;
- (unsigned long long)currentRoutineType;
- (void)dealloc;
- (id)init;
- (void)periodOfDayPredictorDidUpdateCurrentPeriodOfDay:(id)arg1;
- (void)periodOfDayPredictorDidUpdatePredictedIntervals:(id)arg1;
- (id)routineIntervalForNextRoutine:(unsigned long long)arg1;
- (id)routineIntervalForPreviousRoutine:(unsigned long long)arg1;

@end
