/* made by EzioChiu.
 */

@protocol GEONavigationServerRequestStateXPCInterface <NSObject>

@required

- (void)requestActiveRouteDetailsData;
- (void)requestGuidanceState;
- (void)requestNavigationVoiceVolume;
- (void)requestPositionFromDestination;
- (void)requestPositionFromManeuver;
- (void)requestPositionFromSign;
- (void)requestRideSelections;
- (void)requestRouteSummary;
- (void)requestStepIndex;
- (void)requestStepNameInfo;
- (void)requestTrafficIncidentDetailsData;
- (void)requestTransitSummary;
- (void)requestUpdates;

@end
