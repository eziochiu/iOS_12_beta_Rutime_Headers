/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapService : NSObject {
    int  _additionalEnabledMarketsChangedToken;
    int  _experimentsChangedToken;
    NSCache * _handleCache;
    <NSCacheDelegate> * _handleCacheDelegate;
    int  _overriddenResultProviderID;
    NSArray * _preferredLanguages;
    NSLock * _preferredLanguagesLock;
}

+ (void)_attributedGeoMapItemsForPlaceDatasWithType:(int)arg1 placeDatas:(id)arg2 disambiguationLabels:(id)arg3 handler:(id /* block */)arg4;
+ (id)sharedService;

- (void).cxx_destruct;
- (id)_cl_ticketForForwardGeocodeAddressDictionary:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)_cl_ticketForForwardGeocodeString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)_cl_ticketForReverseGeocodeLocation:(id)arg1 traits:(id)arg2;
- (void)_countryCodeChanged:(id)arg1;
- (id)_geoMapItemForData:(id)arg1;
- (id)_geoMapItemForData:(id)arg1 withSource:(unsigned long long)arg2;
- (id)_geoMapItemsForPlacesInDetails:(id)arg1;
- (void)_geoMapItemsForResponseData:(id)arg1 handler:(id /* block */)arg2;
- (int)_loadOverriddenResultProviderID;
- (void)_localeChanged:(id)arg1;
- (id)_preferredLanguages;
- (void)_resolveMapItemFromHandle:(id)arg1 withTraits:(id)arg2 cachePolicy:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)_searchable_ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 floor:(int)arg2 includeEntryPoints:(bool)arg3 shiftLocationsIfNeeded:(bool)arg4 preserveOriginalLocation:(bool)arg5 traits:(id)arg6;
- (id)_searchable_ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(bool)arg2 shiftLocationsIfNeeded:(bool)arg3 preserveOriginalLocation:(bool)arg4 traits:(id)arg5;
- (void)_sendInvalidateDataToSiriAndParSec;
- (id)_ticketForAutocompleteFragment:(id)arg1 type:(int)arg2 traits:(id)arg3 categoryFilter:(id)arg4 retainedSearch:(id)arg5;
- (id)_ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(bool)arg2 additionalPlaceTypes:(int*)arg3 additionalPlaceTypesCount:(unsigned int)arg4 traits:(id)arg5;
- (id)_ticketForRefreshingHandle:(id)arg1 traits:(id)arg2;
- (void)dealloc;
- (id)defaultBackgroundTraits;
- (id)defaultTraits;
- (id)handleForMapItem:(id)arg1;
- (id)init;
- (int)localSearchProviderID;
- (unsigned long long)maxParametersCountForSpatialEventLookup;
- (unsigned long long)maxParametersCountForSpatialPlaceLookup;
- (void)resolveMapItemFromHandle:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resolveMapItemFromHandle:(id)arg1 traits:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resolveMapItemFromHandle:(id)arg1 withTraits:(id)arg2 useCache:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)resolveMapItemLocallyFromHandle:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)serializedClientMetadataForParsec;
- (id)serializedClientMetadataForSiri;
- (id)serializedClientMetadataForTraits:(id)arg1;
- (id)ticketForBatchPopularNearbyForSearchCategories:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(bool)arg2 additionalPlaceTypes:(int*)arg3 additionalPlaceTypesCount:(unsigned int)arg4 traits:(id)arg5;
- (id)ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(bool)arg2 traits:(id)arg3;
- (id)ticketForBrandLookupWithIMessageUid:(id)arg1 traits:(id)arg2;
- (id)ticketForCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2;
- (id)ticketForCategoryListWithTraits:(id)arg1;
- (id)ticketForDFRCategoryListWithTraits:(id)arg1;
- (id)ticketForDatasetCheckWithTraits:(id)arg1;
- (id)ticketForExternalBusinessID:(id)arg1 contentProvider:(id)arg2 traits:(id)arg3;
- (id)ticketForExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5;
- (id)ticketForForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForForwardGeocodeAddressDictionary:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForForwardGeocodeString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForFreshBusinessClaimComponentWithIdentifier:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3;
- (id)ticketForFreshComponents:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 contentProvider:(id)arg4 traits:(id)arg5;
- (id)ticketForFreshIdentifier:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4;
- (id)ticketForGeoIpLookupForIpAddr:(id)arg1;
- (id)ticketForIdentifiers:(id)arg1 includeETA:(bool)arg2 traits:(id)arg3;
- (id)ticketForIdentifiers:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4;
- (id)ticketForIdentifiers:(id)arg1 traits:(id)arg2;
- (id)ticketForInterleavedAutoCompletePoiAddressOnly:(id)arg1 traits:(id)arg2;
- (id)ticketForInterleavedAutoCompleteSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForInterleavedAutoCompleteWithBrowseSearchFragment:(id)arg1 categoryFilter:(id)arg2 retainedSearch:(id)arg3 traits:(id)arg4;
- (id)ticketForInterleavedInstantSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForInterleavedLocalitiesAndLandmarksSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForMUIDs:(id)arg1 includeETA:(bool)arg2 traits:(id)arg3;
- (id)ticketForMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4;
- (id)ticketForMUIDs:(id)arg1 traits:(id)arg2;
- (id)ticketForMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)ticketForMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 industryCategory:(id)arg3 industryCode:(id)arg4 paymentNetwork:(id)arg5 transactionDate:(id)arg6 transactionLocation:(id)arg7 traits:(id)arg8;
- (id)ticketForNearestTransitStation:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 traits:(id)arg3;
- (id)ticketForNonExpiredIdentifier:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4;
- (id)ticketForPhoneNumbers:(id)arg1 allowCellularDataForLookup:(bool)arg2 traits:(id)arg3;
- (id)ticketForPlaceRefinementRequestParameters:(id)arg1 traits:(id)arg2;
- (id)ticketForPlaceRefinementRequestWithCoordinate:(struct { double x1; double x2; }*)arg1 addressLine:(id)arg2 placeName:(id)arg3 traits:(id)arg4;
- (id)ticketForPopularNearbyForSearchCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)ticketForProblem:(id)arg1 placeForProblemContext:(id)arg2 userCredentials:(id)arg3 pushToken:(id)arg4 allowContactBackAtEmailAddress:(id)arg5 traits:(id)arg6;
- (id)ticketForProblemResubmission:(id)arg1 traits:(id)arg2;
- (id)ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 floor:(int)arg2 includeEntryPoints:(bool)arg3 shiftLocationsIfNeeded:(bool)arg4 preserveOriginalLocation:(bool)arg5 traits:(id)arg6;
- (id)ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeETA:(bool)arg2 shiftLocationsIfNeeded:(bool)arg3 traits:(id)arg4;
- (id)ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(bool)arg2 shiftLocationsIfNeeded:(bool)arg3 preserveOriginalLocation:(bool)arg4 traits:(id)arg5;
- (id)ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(bool)arg2 shiftLocationsIfNeeded:(bool)arg3 traits:(id)arg4;
- (id)ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 shiftLocationsIfNeeded:(bool)arg2 traits:(id)arg3;
- (id)ticketForSearchAlongRouteWithCategory:(id)arg1 zilchData:(id)arg2 sessionState:(id)arg3 routeId:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)ticketForSearchCategory:(id)arg1 searchString:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)ticketForSearchCategory:(id)arg1 venueIdentifier:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)ticketForSearchFieldPlaceholderWithTraits:(id)arg1;
- (id)ticketForSearchPoisForBrandMUID:(unsigned long long)arg1 traits:(id)arg2;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned int)arg3 includeETA:(bool)arg4 traits:(id)arg5;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 relatedSearchSuggestion:(id)arg3 retainedSearch:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 retainedSearch:(id)arg3 maxResults:(unsigned int)arg4 suppressResultsRequiringAttribution:(bool)arg5 traits:(id)arg6;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 retainedSearch:(id)arg3 maxResults:(unsigned int)arg4 traits:(id)arg5;
- (id)ticketForSectionedAutoCompleteSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForSectionedInstantSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForSectionedLocalitiesAndLandmarksSearchFragment:(id)arg1 traits:(id)arg2;
- (id)ticketForSpatialEventLookupParameters:(id)arg1 traits:(id)arg2;
- (id)ticketForSpatialLookupParameters:(id)arg1 traits:(id)arg2;
- (id)ticketForSpatialPlaceLookupParameters:(id)arg1 traits:(id)arg2;
- (id)ticketForSpotlightCategoryListWithTraits:(id)arg1;
- (id)ticketForTransitIdentifiers:(id)arg1 endDateForPlacecardSchedulesForThisBatch:(id)arg2 traits:(id)arg3;
- (id)ticketForTransitLines:(id)arg1 withTraits:(id)arg2;
- (id)ticketForURLQuery:(id)arg1 identifier:(id)arg2 resultProviderId:(int)arg3 contentProvider:(id)arg4 maxResults:(unsigned int)arg5 traits:(id)arg6;
- (id)ticketForVendorSpecificPlaceRefinementRequestParameters:(id)arg1 traits:(id)arg2;
- (id)ticketForWifiFingerprintWithLocations:(id)arg1 wifiAccessPoints:(id)arg2 maxLabels:(unsigned int)arg3 entryTime:(unsigned long long)arg4 exitTime:(unsigned long long)arg5 traits:(id)arg6;
- (id)ticketForWifiFingerprintWithLocations:(id)arg1 wifiAccessPoints:(id)arg2 maxLabels:(unsigned int)arg3 traits:(id)arg4;
- (id)ticketforCategory:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (void)trackMapItem:(id)arg1;
- (void)trackSerializedPlaceData:(id)arg1;

@end
