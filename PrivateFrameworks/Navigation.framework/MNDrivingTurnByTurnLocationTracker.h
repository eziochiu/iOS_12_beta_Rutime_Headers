/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNDrivingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker <MNETAManagerDelegate, MNTrafficIncidentAlertUpdaterDelegate, MNTunnelLocationProjectorDelegate> {
    MNAlternateRoutesUpdater * _alternateRoutesUpdater;
    double  _consecutiveValidCourseCount;
    int  _detectedTransportType;
    MNETAManager * _etaManager;
    bool  _exitedVehicle;
    double  _lastKnownCourse;
    MNTrafficIncidentAlertUpdater * _trafficIncidentAlertUpdater;
    MNTunnelLocationProjector * _tunnelLocationProjector;
    unsigned long long  _vehicleExitConfidence;
    struct { 
        double latitude; 
        double longitude; 
    }  _vehicleExitCoordinate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2;
- (id)_alternateRouteForOffRouteLocation:(id)arg1;
- (bool)_checkArrivalForLocation:(id)arg1;
- (id)_contingentRouteForRouteSet:(id)arg1 forLocation:(id)arg2;
- (int)_detectedMotionForLocation:(id)arg1;
- (id)_lazyContingentRouteForRouteSet:(id)arg1 forLocation:(id)arg2;
- (id)_matchedLocationForLocation:(id)arg1;
- (id)_newMapMatcherForRoute:(id)arg1;
- (id)_overrideLocationForLocation:(id)arg1;
- (void)_sendRouteHintForLocation:(id)arg1;
- (void)_setAuditToken:(id)arg1;
- (void)_updateForArrival;
- (void)_updateForLocation:(id)arg1;
- (void)_updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;
- (void)etaManager:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
- (void)etaManager:(id)arg1 failedToReceiveETAResponse:(id)arg2;
- (void)etaManager:(id)arg1 receivedETAResponse:(id)arg2;
- (void)etaManager:(id)arg1 receivedTrafficIncidentAlert:(id)arg2;
- (void)etaManager:(id)arg1 updatedIncidentsForRoute:(id)arg2 etaRoute:(id)arg3 incidentsOffset:(unsigned int)arg4;
- (void)etaManager:(id)arg1 updatedTrafficForETARoute:(id)arg2 from:(unsigned int)arg3 to:(unsigned int)arg4;
- (void)etaManager:(id)arg1 willSendETARequest:(id)arg2;
- (void)etaManagerUpdatedETATime:(id)arg1;
- (id)initWithNavigationSession:(id)arg1;
- (bool)shouldProjectAlongRoute;
- (void)startTracking;
- (void)stopTracking;
- (void)tracePaused;
- (void)trafficIncidentAlertUpdater:(id)arg1 didDismissAlert:(id)arg2 withReroute:(bool)arg3;
- (void)trafficIncidentAlertUpdater:(id)arg1 didReturnToOriginalRoute:(id)arg2 etaRoute:(id)arg3 forAlert:(id)arg4;
- (void)trafficIncidentAlertUpdater:(id)arg1 didSwitchToNewRoute:(id)arg2 forAlert:(id)arg3;
- (void)trafficIncidentAlertUpdater:(id)arg1 invalidatedAlert:(id)arg2;
- (void)trafficIncidentAlertUpdater:(id)arg1 receivedAlert:(id)arg2 responseCallback:(id /* block */)arg3;
- (void)trafficIncidentAlertUpdater:(id)arg1 updatedAlert:(id)arg2;
- (bool)trafficIncidentAlertUpdaterIsCurrentlySpeaking:(id)arg1;
- (double)trafficIncidentAlertUpdaterRemainingTimeOnRoute:(id)arg1;
- (double)trafficIncidentAlertUpdaterTimeSinceLastAnnouncement:(id)arg1;
- (double)trafficIncidentAlertUpdaterTimeUntilNextAnnouncement:(id)arg1;
- (int)transportType;
- (void)tunnelLocationProjector:(id)arg1 didUpdateLocation:(id)arg2;

@end
