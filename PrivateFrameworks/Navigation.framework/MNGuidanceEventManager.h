/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNGuidanceEventManager : NSObject <MNGuidanceManager, MNTimeManagerObserver> {
    <MNAnnoucementStrategy> * _announcementStrategy;
    NSMutableDictionary * _announcementsSpoken;
    bool  _canSpeakReturnToRouteAnnouncement;
    GEOComposedGuidanceEvent * _currentLaneGuidanceEvent;
    <MNGuidanceManagerDelegate> * _delegate;
    GEOComposedGuidanceEvent * _endSignGuidanceEvent;
    GEOComposedGuidanceEvent * _endSpokenGuidanceEvent;
    NSMutableArray * _events;
    NSMutableDictionary * _feedback;
    GEOComposedGuidanceEvent * _getOnRouteSpokenGuidanceEvent;
    NSMutableDictionary * _hapticsTriggered;
    bool  _hasBeenOnRouteOnce;
    bool  _hasStickyEvents;
    MNAnnouncementPlanEvent * _lastAnnouncementEvent;
    unsigned long long  _lastStepIndex;
    MNLocation * _location;
    MNNavigationSession * _navigationSession;
    GEOComposedGuidanceEvent * _nextEvent;
    GEOComposedGuidanceEvent * _previousLaneGuidanceEvent;
    NSArray * _previousSignEvents;
    GEOComposedGuidanceEvent * _returnToRouteSignGuidanceEvent;
    GEOComposedGuidanceEvent * _returnToRouteSpokenGuidanceEvent;
    MNGuidanceSignInfo * _signInfo;
    double  _speed;
    NSMutableArray * _startSignGuidanceEvents;
    GEOComposedGuidanceEvent * _startSpokenGuidanceEvent;
    double  _timeLastAnnouncementEnded;
    double  _timeLastAnnouncementStarted;
    NSMutableArray * _validEvents;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNGuidanceManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *events;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MNLocation *location;
@property (nonatomic) double speed;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_adjustedVehicleSpeed;
- (double)_calculateDurationToSpeakEvent:(id)arg1 announcementIndex:(unsigned long long)arg2 distance:(double)arg3;
- (void)_considerAnnouncements;
- (void)_considerHaptics;
- (void)_considerLaneGuidance;
- (void)_considerSignGuidance;
- (void)_considerStickiness;
- (void)_filterValidEvents;
- (bool)_hasSpokenEvent:(id)arg1;
- (void)_initSpecialGuidanceEvents;
- (bool)_isEventValid:(id)arg1 start:(double)arg2 end:(double)arg3;
- (bool)_isValidEvent:(id)arg1;
- (void)_markEventSpoken:(id)arg1;
- (void)_notifyAnalyticsForNewEvents:(id)arg1 previousEvents:(id)arg2;
- (void)_notifySpeechEvent:(id)arg1 variant:(unsigned long long)arg2;
- (id)_selectAnnouncementForEvent:(id)arg1 withTimeRemaining:(double)arg2 withMinIndex:(unsigned long long)arg3 selectedIndex:(out unsigned long long*)arg4;
- (id)_serverStringDictionaryForEvent:(id)arg1 spoken:(bool)arg2;
- (bool)_shouldUseLocation:(id)arg1;
- (id)_spokenEventsRemainingInStep;
- (void)_stepDidChange;
- (double)_timeRemainingForEvent:(id)arg1;
- (double)_timeUntilEventTrigger:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (double)durationOfEvent:(id)arg1 announcementIndex:(unsigned long long)arg2 distance:(double)arg3;
- (id)events;
- (id)initWithNavigationSession:(id)arg1;
- (id)location;
- (bool)repeatLastGuidanceAnnouncement:(id)arg1;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setSpeed:(double)arg1;
- (double)speed;
- (void)stop;
- (void)timeManagerDidChangeProvider:(id)arg1;
- (double)timeSinceLastAnnouncement;
- (double)timeUntilNextAnnouncement;
- (void)updateDestination:(id)arg1;
- (void)updateForReroute:(id)arg1;
- (void)updateForReturnToRoute;
- (void)updateGuidanceForLocation:(id)arg1 navigatorState:(int)arg2;

@end
