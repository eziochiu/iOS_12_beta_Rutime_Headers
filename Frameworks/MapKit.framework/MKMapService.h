/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapService : NSObject <GEOLogContextDelegate> {
    int  _deviceOrientation;
    id /* block */  _getLogContextForEventBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property int deviceOrientation;
@property (nonatomic, copy) id /* block */ getLogContextForEventBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedService;

- (void).cxx_destruct;
- (void)_applicationDidChangeStatusBar:(id)arg1;
- (void)_mapItemsForResponseData:(id)arg1 handler:(id /* block */)arg2;
- (id)_mk_ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 traits:(id)arg3;
- (id)_ticketForReverseGeocodeCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 floorOrdinal:(int)arg2 includeEntryPoints:(bool)arg3 preserveOriginalLocation:(bool)arg4 traits:(id)arg5;
- (id)_ticketForReverseGeocodeCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 includeEntryPoints:(bool)arg2 preserveOriginalLocation:(bool)arg3 traits:(id)arg4;
- (id)_ticketForReverseGeocodeDroppedPinCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 floorOrdinal:(id)arg2 traits:(id)arg3;
- (void)captureExtensionStateWithIsRideBookingAppsInstalled:(bool)arg1 isRideBookingAppsEnabled:(bool)arg2;
- (void)captureExtensionStateWithIsTableBookingAppsInstalled:(bool)arg1 isTableBookingAppsEnabled:(bool)arg2;
- (void)captureMapLaunchEventWithLaunchUrl:(id)arg1 sourceAppId:(id)arg2 isLaunchedFromTTL:(bool)arg3 ttlEventTime:(id)arg4;
- (void)captureMapSettingsWithAvoidHighways:(bool)arg1;
- (void)captureMapSettingsWithAvoidTolls:(bool)arg1;
- (void)captureMapSettingsWithFindMyCarEnabled:(bool)arg1;
- (void)captureMapSettingsWithLabelEnabled:(bool)arg1;
- (void)captureMapSettingsWithNavVoiceVolume:(int)arg1;
- (void)captureMapSettingsWithPauseSpokenAudioEnabled:(bool)arg1;
- (void)captureMapSettingsWithPreferredTransportMode:(int)arg1;
- (void)captureMapSettingsWithTrafficEnabled:(bool)arg1;
- (void)captureMapUIStateWithIsAirQualityShown:(bool)arg1;
- (void)captureMapUIStateWithLayoutInfo:(int)arg1 layoutStyle:(int)arg2;
- (void)captureMapUIStateWithLayoutInfo:(int)arg1 layoutStyle:(int)arg2 numberOfTabs:(unsigned int)arg3 currentTabIndex:(unsigned int)arg4;
- (void)captureMapsSettingsWithPreferredTransportMode:(int)arg1 avoidTolls:(bool)arg2 avoidHighways:(bool)arg3 navVoiceVolume:(int)arg4 pauseSpokenAudioEnabled:(bool)arg5 findMyCarEnabled:(bool)arg6 trafficEnabled:(bool)arg7 labelEnabled:(bool)arg8;
- (void)capturePairedDeviceStateWithDeviceType:(int)arg1 isConnected:(bool)arg2 deviceOSVersion:(id)arg3 deviceHwIdentifier:(id)arg4;
- (void)capturePlaceCardUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 placeCardType:(int)arg6 categoriesDisplayed:(id)arg7 categorySelected:(id)arg8;
- (void)capturePlaceCardUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 targetID:(unsigned long long)arg7 providerID:(id)arg8 animationID:(unsigned long long)arg9 actionURL:(id)arg10 photoID:(id)arg11 placeCardType:(int)arg12 localizedMapItemCategory:(id)arg13 availableActions:(id)arg14 unactionableUIElements:(id)arg15;
- (void)captureTransitPlaceCardUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 targetID:(unsigned long long)arg7 providerID:(id)arg8 animationID:(unsigned long long)arg9 transitCardCategory:(int)arg10 transitSystem:(id)arg11 transitDepartureSequence:(id)arg12 transitIncident:(id)arg13;
- (void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3;
- (void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 categoriesDisplayed:(id)arg4 categorySelected:(id)arg5;
- (void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapRegion:(id)arg4 zoomLevel:(double)arg5 mapType:(int)arg6;
- (void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 placeActionDetails:(id)arg4;
- (void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 routeDetails:(id)arg4;
- (void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 selectedReportAnIssueIndex:(unsigned int)arg4;
- (void)captureUserActionAsString:(id)arg1 flyoverAnimationID:(unsigned long long)arg2;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 mapRegion:(id)arg7 zoomLevel:(double)arg8 mapType:(int)arg9;
- (void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 placeActionDetails:(id)arg4;
- (id)defaultTraits;
- (id)defaultTraitsForAnalyticsWithTraits:(id)arg1;
- (id)defaultTraitsWithTraits:(id)arg1;
- (id)defaultTraitsWithTransportType:(unsigned long long)arg1;
- (int)deviceOrientation;
- (id /* block */)getLogContextForEventBlock;
- (void)incrementAGGDInteractedWithPlaceCardKeyWithType:(unsigned long long)arg1 incrementValue:(long long)arg2;
- (void)incrementAGGDOpenPlaceCardKeyWithType:(unsigned long long)arg1 incrementValue:(long long)arg2;
- (id)init;
- (id)logContextForLogMsgEvent:(id)arg1;
- (id)mapItemsForPlacesInDetails:(id)arg1;
- (void)setDeviceOrientation:(int)arg1;
- (void)setGetLogContextForEventBlock:(id /* block */)arg1;
- (id)ticketForBrandLookupWithIMessageUid:(id)arg1 traits:(id)arg2;
- (id)ticketForCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2;
- (id)ticketForCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForCategoryListWithTraits:(id)arg1;
- (id)ticketForChildPlace:(id)arg1 traits:(id)arg2;
- (id)ticketForExternalBusinessID:(id)arg1 contentProvider:(id)arg2 traits:(id)arg3;
- (id)ticketForExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5;
- (id)ticketForForwardGeocodeAddress:(id)arg1 traits:(id)arg2;
- (id)ticketForForwardGeocodeAddressDictionary:(id)arg1 traits:(id)arg2;
- (id)ticketForForwardGeocodeString:(id)arg1 traits:(id)arg2;
- (id)ticketForFreshBusinessClaimComponentWithIdentifier:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3;
- (id)ticketForFreshIdentifier:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4;
- (id)ticketForIdentifiers:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4;
- (id)ticketForIdentifiers:(id)arg1 traits:(id)arg2;
- (id)ticketForMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4;
- (id)ticketForMUIDs:(id)arg1 traits:(id)arg2;
- (id)ticketForMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)ticketForMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 industryCategory:(id)arg3 industryCode:(id)arg4 paymentNetwork:(id)arg5 transactionDate:(id)arg6 transactionLocation:(id)arg7 traits:(id)arg8;
- (id)ticketForNearestTransitStation:(id)arg1 coordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 traits:(id)arg3;
- (id)ticketForNonExpiredIdentifier:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4;
- (id)ticketForPhoneNumbers:(id)arg1 allowCellularDataForLookup:(bool)arg2 traits:(id)arg3;
- (id)ticketForPlaceRefinementRequestWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; }*)arg1 addressLine:(id)arg2 placeName:(id)arg3 traits:(id)arg4;
- (id)ticketForPopularNearbyForSearchCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForProblem:(id)arg1 mapItemForProblemContext:(id)arg2 userCredentials:(id)arg3 pushToken:(id)arg4 allowContactBackAtEmailAddress:(id)arg5 traits:(id)arg6;
- (id)ticketForProblemResubmission:(id)arg1 traits:(id)arg2;
- (id)ticketForReverseGeocodeCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 traits:(id)arg2;
- (id)ticketForReverseGeocodeDroppedPinCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 floorOrdinal:(int)arg2 traits:(id)arg3;
- (id)ticketForReverseGeocodeDroppedPinCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 traits:(id)arg2;
- (id)ticketForSearchAlongRouteWithCategory:(id)arg1 zilchData:(id)arg2 sessionState:(id)arg3 routeId:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)ticketForSearchCategory:(id)arg1 searchString:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)ticketForSearchCategory:(id)arg1 venueIdentifier:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)ticketForSearchFieldPlaceholderWithTraits:(id)arg1;
- (id)ticketForSearchPoisForBrandMUID:(unsigned long long)arg1 traits:(id)arg2;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 relatedSearchSuggestion:(id)arg3 maxResults:(unsigned int)arg4 traits:(id)arg5;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 retainedSearch:(id)arg3 maxResults:(unsigned int)arg4 traits:(id)arg5;
- (id)ticketForTransitLines:(id)arg1 traits:(id)arg2;
- (id)ticketForURLQuery:(id)arg1 identifier:(id)arg2 resultProviderId:(int)arg3 contentProvider:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;

@end
