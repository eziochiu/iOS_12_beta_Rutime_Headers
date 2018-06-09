/* made by EzioChiu.
 */

@protocol MNNavigationServiceProxy <NSObject>

@required

- (void)acceptReroute:(bool)arg1 forTrafficIncidentAlertDetails:(MNTrafficIncidentAlertDetails *)arg2;
- (void)changeSettings:(MNSettings *)arg1;
- (void)interfaceHashesWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, unsigned long long, void*
- (void)prepareNavigationWithRouteDetails:(MNRoutePlanningDetails *)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(NSData *)arg1;
- (void)repeatCurrentGuidanceWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)repeatCurrentTrafficAlertWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)resumeOriginalDestination;
- (void)setCurrentAudioOutputSetting:(MNAudioOutputSetting *)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setFullGuidanceMode:(bool)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setHFPPreference:(bool)arg1 forSetting:(MNAudioOutputSetting *)arg2;
- (void)setHeadingOrientation:(int)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setTraceIsPlaying:(bool)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (void)startNavigationForRouteDetails:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 6: MNRoutePlanningDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)startPredictingDestinationsWithHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigation;
- (void)stopPredictingDestinations;
- (void)switchToRouteWithDetails:(MNActiveRouteDetails *)arg1;
- (void)updateDestination:(GEOComposedWaypoint *)arg1;
- (void)vibrateForPrompt:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
