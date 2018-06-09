/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationProxy : NSObject {
    NSData * _activeRouteDetailsData;
    unsigned long long  _announcementStage;
    GEOCompanionRouteContext * _companionRouteContext;
    GEOCompanionRouteDetails * _companionRouteDetails;
    GEOCompanionRouteStatus * _companionRouteStatus;
    NSString * _currentRoadName;
    NSString * _destinationName;
    unsigned long long  _displayedStepIndex;
    <GEOServerFormattedStepStringFormatter> * _formatter;
    bool  _guidancePromptsEnabled;
    GEONavigationGuidanceState * _guidanceState;
    bool  _hasNavigationStartedToken;
    bool  _isConnectedToCarplay;
    bool  _isNavigatingInLowGuidance;
    GEOLocation * _lastLocation;
    bool  _locationUnreliable;
    NSXPCConnection * _nanomapscdConnection;
    NSXPCConnection * _navdConnection;
    int  _navigationStartedToken;
    int  _navigationVoiceVolume;
    unsigned long long  _nextAnnouncementStage;
    struct { 
        double remainingTime; 
        double remainingDistance; 
    }  _positionFromDestination;
    struct { 
        double remainingTime; 
        double remainingDistance; 
    }  _positionFromManeuver;
    struct { 
        double remainingTime; 
        double remainingDistance; 
    }  _positionFromSign;
    NSArray * _rideSelections;
    GEOComposedRoute * _route;
    GEORouteMatch * _routeMatch;
    GEONavigationRouteSummary * _routeSummary;
    bool  _shouldSendRouteWithStatus;
    unsigned long long  _stepIndex;
    GEONameInfo * _stepNameInfo;
    double  _timeUntilNextAnnouncement;
    NSData * _trafficIncidentAlertDetailsData;
    GEONavigationRouteTransitSummary * _transitRouteSummary;
}

@property (retain) <GEOServerFormattedStepStringFormatter> *formatter;

- (void).cxx_destruct;
- (void)_clearState;
- (void)_closeNanomapscdConnection;
- (void)_closeNavdConnection;
- (void)_invalidateNavigationSessionWithRouteContext:(id)arg1;
- (void)_markCurrentHapticsAsTriggered;
- (void)_openNanomapscdConnection;
- (void)_openNavdConnection;
- (void)_sendActiveRouteDetailsData;
- (void)_sendCoalescedCompanionRouteStatus;
- (void)_sendCompanionRouteDetails:(id)arg1 routeStatus:(id)arg2 routeContext:(id)arg3;
- (void)_sendCompanionRouteStatus;
- (void)_sendCurrentRoadName;
- (void)_sendGuidanceState;
- (void)_sendNavigationVoiceVolume;
- (void)_sendPositionFromDestination;
- (void)_sendPositionFromManeuver;
- (void)_sendPositionFromSign;
- (void)_sendRideSelections;
- (void)_sendRouteSummary;
- (void)_sendStepIndex;
- (void)_sendStepNameInfo;
- (void)_sendTrafficIncidentAlertDetailsData;
- (void)_sendTransitSummary;
- (void)_updateCompanionRouteStatus;
- (void)dealloc;
- (id)formatter;
- (void)setActiveRouteDetailsData:(id)arg1;
- (void)setAnnouncementStage:(unsigned long long)arg1;
- (void)setClusteredSectionSelectedRideFromRoute:(id)arg1 routeID:(id)arg2;
- (void)setCurrentRoadName:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setFormatter:(id)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setIsNavigatingInLowGuidance:(bool)arg1;
- (void)setLastLocation:(id)arg1;
- (void)setLocationUnreliable:(bool)arg1;
- (void)setNavigationState:(int)arg1;
- (void)setNavigationVoiceVolume:(int)arg1;
- (void)setNextAnnouncementStage:(unsigned long long)arg1 timeUntilNextAnnouncement:(double)arg2;
- (void)setPositionFromDestination:(struct { double x1; double x2; })arg1;
- (void)setPositionFromManeuver:(struct { double x1; double x2; })arg1;
- (void)setPositionFromSign:(struct { double x1; double x2; })arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteMatch:(id)arg1;
- (void)setStepIndex:(unsigned long long)arg1;
- (void)setStepNameInfo:(id)arg1;
- (void)setTrafficIncidentDetailsData:(id)arg1;
- (void)startWithDestinationName:(id)arg1;
- (void)stop;
- (void)triggerHaptics:(int)arg1;

@end
