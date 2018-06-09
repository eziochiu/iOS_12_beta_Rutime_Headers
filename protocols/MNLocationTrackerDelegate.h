/* made by EzioChiu.
 */

@protocol MNLocationTrackerDelegate <NSObject>

@optional

- (void)locationTracker:(MNLocationTracker *)arg1 didChangeState:(int)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didReroute:(MNActiveRouteInfo *)arg2 newAlternateRoutes:(NSArray *)arg3 rerouteReason:(unsigned long long)arg4 request:(GEODirectionsRequest *)arg5 response:(GEODirectionsResponse *)arg6;
- (void)locationTracker:(MNLocationTracker *)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(MNActiveRouteInfo *)arg3 request:(GEODirectionsRequest *)arg4 response:(GEODirectionsResponse *)arg5;
- (void)locationTracker:(MNLocationTracker *)arg1 didUpdateAlternateRoutes:(NSArray *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didUpdateETAForRoute:(MNActiveRouteInfo *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didUpdateFeedback:(GEOAlightNotificationFeedback *)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;
- (void)locationTracker:(MNLocationTracker *)arg1 didUpdateMatchedLocation:(MNLocation *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 didUpdateTrafficForETARoute:(GEOETARoute *)arg2 from:(unsigned int)arg3 to:(unsigned int)arg4;
- (void)locationTracker:(MNLocationTracker *)arg1 failedRerouteWithErrorCode:(long long)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 invalidatedTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)locationTracker:(MNLocationTracker *)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)locationTracker:(void *)arg1 receivedTrafficIncidentAlert:(void *)arg2 responseCallback:(void *)arg3; // needs 3 arg types, found 8: MNLocationTracker *, MNTrafficIncidentAlert *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)locationTracker:(MNLocationTracker *)arg1 updatedTrafficIncidentAlert:(MNTrafficIncidentAlert *)arg2;
- (void)locationTrackerDidArrive:(MNLocationTracker *)arg1;
- (void)locationTrackerDidCancelReroute:(MNLocationTracker *)arg1;
- (void)locationTrackerWillReroute:(MNLocationTracker *)arg1;

@end
