/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTransitScheduleTracker : NSObject {
    NSMutableDictionary * _arrivalTimetable;
    <MNTransitScheduleTrackerDelegate> * _delegate;
    bool  _isTrackingSchedule;
    MNLocation * _lastMatchedLocation;
    GEOComposedRouteStep * _lastStepReached;
    MNNavigationSession * _navigationSession;
    NSTimer * _nextStepApproachingTimer;
    NSTimer * _nextStepReachedTimer;
    NSDate * _startDate;
    NSMutableDictionary * _stepArrivalState;
    NSMutableDictionary * _stepFeedback;
    double  _timeBuffer;
    NSTimer * _trackingTimer;
}

@property (nonatomic) <MNTransitScheduleTrackerDelegate> *delegate;
@property (nonatomic, readonly) GEOComposedRouteStep *nextStep;
@property (nonatomic, readonly) GEOComposedRoute *route;

- (void).cxx_destruct;
- (id)_alightNotificationFeedbackForStep:(id)arg1 trigger:(int)arg2 approachedAt:(id)arg3;
- (void)_approachingStep:(id)arg1;
- (unsigned long long)_arrivalStateForStep:(id)arg1;
- (void)_cancelDelayedStart;
- (bool)_isApproachingNextStep;
- (bool)_isStepAlightingStep:(id)arg1;
- (bool)_isStepBoardingStep:(id)arg1;
- (bool)_isStepScheduleBasedBoardingStep:(id)arg1;
- (id)_latLonDictionaryFromLocation:(id)arg1;
- (void)_lostLocationSignal;
- (int)_maneuverForStep:(id)arg1;
- (void)_markNextStepAsApproaching;
- (void)_markNextStepAsReached;
- (id)_projectedArrivalDateForNextStep;
- (id)_projectedArrivalDateForStepAtIndex:(unsigned long long)arg1;
- (void)_reachedStep:(id)arg1;
- (void)_recordTraceEvent:(long long)arg1 withData:(id)arg2;
- (void)_refreshTimetable;
- (id)_remainingSteps;
- (double)_remainingTimeUntilNextStep;
- (double)_remainingTimeUntilStepAtIndex:(unsigned long long)arg1;
- (void)_setarrivalState:(unsigned long long)arg1 forStep:(id)arg2;
- (void)_startScheduleTracking;
- (void)_stopScheduleTracking;
- (id)_traceRecorder;
- (long long)_transitTypeForStep:(id)arg1;
- (void)_unsetStepTimers;
- (void)_updateLastLocation:(id)arg1 onFeedbackForStep:(id)arg2 updateTriggerLocation:(bool)arg3;
- (void)beginNavigation;
- (void)dealloc;
- (id)delegate;
- (void)endNavigation;
- (id)initWithNavigationSession:(id)arg1 delegate:(id)arg2;
- (void)matchedLocation:(id)arg1;
- (id)nextStep;
- (id)route;
- (void)setDelegate:(id)arg1;

@end
