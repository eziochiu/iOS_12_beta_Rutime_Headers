/* made by EzioChiu.
 */

@protocol GEONavigationListenerDelegate <NSObject>

@optional

- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateActiveRouteData:(NSData *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateCurrentRoadName:(NSString *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateGuidanceState:(GEONavigationGuidanceState *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateNavigationVoiceVolume:(int)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdatePositionFromDestination:(struct { double x1; double x2; })arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdatePositionFromManeuver:(struct { double x1; double x2; })arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdatePositionFromSign:(struct { double x1; double x2; })arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateRideSelections:(NSArray *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateRouteSummary:(GEONavigationRouteSummary *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateStepIndex:(unsigned long long)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateStepNameInfo:(GEONameInfo *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateTrafficIncidentAlertDetailsData:(NSData *)arg2;
- (void)navigationListener:(GEONavigationListener *)arg1 didUpdateTransitSummary:(GEONavigationRouteTransitSummary *)arg2;

@end
