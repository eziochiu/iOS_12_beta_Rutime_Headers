/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTraceEventRecorder : NSObject <MNNavigationSessionObserver> {
    unsigned long long  _announcementStage;
    double  _distanceToManeuver;
    NSMutableArray * _eventHistory;
    NSMutableArray * _events;
    bool  _isShowingSecondarySign;
    NSString * _lastAnnouncement;
    NSArray * _lastInstructions;
    NSUUID * _lastPrimarySignID;
    NSUUID * _lastSecondarySignID;
    MNLocation * _lastTrackedLocation;
    unsigned long long  _lastTrackedStepIndex;
    unsigned long long  _numPendingAnnouncements;
    double  _timeAtStartOfRoute;
    MNTraceRecorder * _traceRecorder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *eventHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)eventHistory;
- (id)initWithTraceRecorder:(id)arg1;
- (void)navigationSession:(id)arg1 didAnnounce:(id)arg2 stage:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 didAnnounceArrival:(id)arg2;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3;
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationSession:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(bool)arg8;
- (void)navigationSession:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)navigationSession:(id)arg1 hideLaneDirectionsForId:(id)arg2;
- (void)navigationSession:(id)arg1 showLaneDirections:(id)arg2;
- (void)navigationSession:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)navigationSessionBeginGuidanceUpdate:(id)arg1;
- (void)navigationSessionDidStart:(id)arg1;
- (void)navigationSessionEndGuidanceUpdate:(id)arg1;
- (void)navigationSessionHideSecondaryStep:(id)arg1;
- (void)navigationSessionWillReroute:(id)arg1;
- (double)timeSinceStartOfRoute;

@end
