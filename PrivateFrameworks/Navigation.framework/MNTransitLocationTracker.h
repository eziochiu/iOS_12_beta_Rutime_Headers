/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTransitLocationTracker : MNSteppingLocationTracker <MNTransitScheduleTrackerDelegate> {
    bool  _debugSnapToTransitLines;
    bool  _hasArrived;
    NSDate * _lastAccurateLocationDate;
    NSDate * _lastLocationTimestamp;
    MNLocation * _lastMatchedLocation;
    GEORoadMatcher * _roadMatcher;
    MNTransitScheduleTracker * _scheduleTracker;
    NSDate * _startDate;
    GEOTransitRouteMatcher * _transitRouteMatcher;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool debugSnapToTransitLines;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_correctedLocationForLocation:(id)arg1;
- (bool)_isInaccurateLocation:(id)arg1;
- (id)_locationForInaccurateLocation:(id)arg1;
- (id)_matchedLocationForLocation:(id)arg1;
- (id)_roadMatchForOffRouteLocation:(id)arg1 routeMatch:(id)arg2;
- (double)_timeToDisplayStaleGPSLocation;
- (bool)debugSnapToTransitLines;
- (id)initWithNavigationSession:(id)arg1;
- (void)setDebugSnapToTransitLines:(bool)arg1;
- (void)startTracking;
- (void)stopTracking;
- (void)transitScheduleTracker:(id)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
- (void)transitScheduleTracker:(id)arg1 didUpdateFeedback:(id)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;
- (int)transportType;

@end