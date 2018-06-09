/* made by EzioChiu.
 */

@protocol MSPMapsPushDaemonProxy <MSPRemoteModelAccess>

@required

- (void)checkin;
- (void)clearBulletinWithRecordID:(NSString *)arg1;
- (void)clearCurrentAnnouncement;
- (void)clearLowFuelAlertBulletin;
- (void)clearParkedCarBulletin;
- (void)clearPredictedRouteTrafficIncidentBulletin;
- (void)clearTrafficConditionsBulletin;
- (void)clearTrafficIncidentBulletinWithAlertID:(NSData *)arg1;
- (void)clearTrafficIncidentsBulletin;
- (void)clearTransitAlightAlertBulletin;
- (void)eraseRAPData;
- (void)fetchCurrentAnnouncement:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOAnnouncement *, void*
- (void)fetchDevicePushToken:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)fetchProblemStatus;
- (void)fetchUserRoutingPreferencesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MSPUserRoutingPreferences *, NSError *, void*
- (void)handleMapsApplicationRemoval:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)mapsLocationAuthorizationStatusChanged;
- (void)problemStatusResponseWithNotificationID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEORPProblemStatusResponse *, void*
- (void)registerForTopic;
- (void)removeProblemStatusResponseWithNotificationID:(NSString *)arg1;
- (void)resetShownAnnouncements;
- (void)setShouldUseDevAPNS:(bool)arg1;
- (void)shouldUseDevAPNS:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)showLowFuelAlertBulletinForLowFuelDetails:(MSPLowFuelDetails *)arg1;
- (void)showParkedCarBulletinForEvent:(RTVehicleEvent *)arg1;
- (void)showParkedCarBulletinForEvent:(RTVehicleEvent *)arg1 afterDelay:(double)arg2;
- (void)showParkedCarReplacementBulletinForEvent:(RTVehicleEvent *)arg1 replacingEvent:(RTVehicleEvent *)arg2;
- (void)showParkedCarReplacementBulletinForEvent:(RTVehicleEvent *)arg1 replacingEvent:(RTVehicleEvent *)arg2 afterDelay:(double)arg3;
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(MNCommuteNotificationDetails *)arg1;
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(MNCommuteNotificationDetails *)arg1 afterDelay:(double)arg2;
- (void)showTrafficConditionsBulletinWithTitle:(NSString *)arg1 message:(NSString *)arg2 actionURL:(NSURL *)arg3;
- (void)showTrafficIncidentAlertWithID:(NSData *)arg1 type:(unsigned long long)arg2 title:(NSString *)arg3 description:(NSString *)arg4;
- (void)showTransitAlightAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2;
- (void)simulateAnnouncement:(GEOAnnouncement *)arg1;
- (void)simulateProblemResolution;
- (oneway void)updateMapsModelBackupAttributesIfNeeded;

@end
