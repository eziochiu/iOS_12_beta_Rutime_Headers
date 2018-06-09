/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceRequestParameters : PBCodable <NSCopying> {
    GEOPDAddressObjectGeocodingParameters * _addressObjectGeocodingParameters;
    GEOPDAutocompleteParameters * _autocompleteParameters;
    GEOPDBatchPopularNearbySearchParameters * _batchPopularNearbySearchParameters;
    GEOPDBatchSpatialLookupParameters * _batchSpatialLookupParameters;
    GEOPDBrandLookupParameters * _brandLookupParameters;
    GEOPDSearchBrowseCategorySuggestionParameters * _browseCategorySuggestionParameters;
    GEOPDCanonicalLocationSearchParameters * _canonicalLocationSearchParameters;
    GEOPDCategorySearchParameters * _categorySearchParameters;
    GEOPDClusterGeocodingParameters * _clusterGeocodingParameters;
    GEOPDExternalTransitLookupParameters * _externalTransitLookupParameters;
    GEOPDFeatureIdGeocodingParameters * _featureIdGeocodingParameters;
    GEOPDGeocodingParameters * _geocodingParameters;
    GEOPDIpGeoLookupParameters * _ipGeoLookupParameters;
    GEOPDLocationDirectedSearchParameters * _locationDirectedSearchParameters;
    GEOPDMapsIdentifierPlaceLookupParameters * _mapsIdentifierPlaceLookupParameters;
    GEOPDMerchantLookupParameters * _merchantLookupParameters;
    GEOPDNearbySearchParameters * _nearbySearchParameters;
    GEOPDPlaceLookupParameters * _placeLookupParameters;
    GEOPDPlaceRefinementParameters * _placeRefinementParameters;
    GEOPDPopularNearbySearchParameters * _popularNearbySearchParameters;
    GEOPDReverseGeocodingParameters * _reverseGeocodingParameters;
    GEOPDSearchFieldPlaceholderParameters * _searchFieldPlaceholderParameters;
    GEOPDSearchParameters * _searchParameters;
    GEOPDSearchZeroKeywordCategorySuggestionParameters * _searchZeroKeywordCategorySuggestionParameters;
    GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters * _searchZeroKeywordWithSearchResultsSuggestionParameters;
    GEOPDSiriSearchParameters * _siriSearchParameters;
    PBUnknownFields * _unknownFields;
    GEOPDVendorSpecificPlaceRefinementParameters * _vendorSpecificPlaceRefinementParameters;
    GEOPDWifiFingerprintParameters * _wifiFingerprintParameters;
}

@property (nonatomic, retain) GEOPDAddressObjectGeocodingParameters *addressObjectGeocodingParameters;
@property (nonatomic, retain) GEOPDAutocompleteParameters *autocompleteParameters;
@property (nonatomic, retain) GEOPDBatchPopularNearbySearchParameters *batchPopularNearbySearchParameters;
@property (nonatomic, retain) GEOPDBatchSpatialLookupParameters *batchSpatialLookupParameters;
@property (nonatomic, retain) GEOPDBrandLookupParameters *brandLookupParameters;
@property (nonatomic, retain) GEOPDSearchBrowseCategorySuggestionParameters *browseCategorySuggestionParameters;
@property (nonatomic, retain) GEOPDCanonicalLocationSearchParameters *canonicalLocationSearchParameters;
@property (nonatomic, retain) GEOPDCategorySearchParameters *categorySearchParameters;
@property (nonatomic, retain) GEOPDClusterGeocodingParameters *clusterGeocodingParameters;
@property (nonatomic, retain) GEOPDExternalTransitLookupParameters *externalTransitLookupParameters;
@property (nonatomic, retain) GEOPDFeatureIdGeocodingParameters *featureIdGeocodingParameters;
@property (nonatomic, retain) GEOPDGeocodingParameters *geocodingParameters;
@property (nonatomic, readonly) bool hasAddressObjectGeocodingParameters;
@property (nonatomic, readonly) bool hasAutocompleteParameters;
@property (nonatomic, readonly) bool hasBatchPopularNearbySearchParameters;
@property (nonatomic, readonly) bool hasBatchSpatialLookupParameters;
@property (nonatomic, readonly) bool hasBrandLookupParameters;
@property (nonatomic, readonly) bool hasBrowseCategorySuggestionParameters;
@property (nonatomic, readonly) bool hasCanonicalLocationSearchParameters;
@property (nonatomic, readonly) bool hasCategorySearchParameters;
@property (nonatomic, readonly) bool hasClusterGeocodingParameters;
@property (nonatomic, readonly) bool hasExternalTransitLookupParameters;
@property (nonatomic, readonly) bool hasFeatureIdGeocodingParameters;
@property (nonatomic, readonly) bool hasGeocodingParameters;
@property (nonatomic, readonly) bool hasIpGeoLookupParameters;
@property (nonatomic, readonly) bool hasLocationDirectedSearchParameters;
@property (nonatomic, readonly) bool hasMapsIdentifierPlaceLookupParameters;
@property (nonatomic, readonly) bool hasMerchantLookupParameters;
@property (nonatomic, readonly) bool hasNearbySearchParameters;
@property (nonatomic, readonly) bool hasPlaceLookupParameters;
@property (nonatomic, readonly) bool hasPlaceRefinementParameters;
@property (nonatomic, readonly) bool hasPopularNearbySearchParameters;
@property (nonatomic, readonly) bool hasReverseGeocodingParameters;
@property (nonatomic, readonly) bool hasSearchFieldPlaceholderParameters;
@property (nonatomic, readonly) bool hasSearchParameters;
@property (nonatomic, readonly) bool hasSearchZeroKeywordCategorySuggestionParameters;
@property (nonatomic, readonly) bool hasSearchZeroKeywordWithSearchResultsSuggestionParameters;
@property (nonatomic, readonly) bool hasSiriSearchParameters;
@property (nonatomic, readonly) bool hasVendorSpecificPlaceRefinementParameters;
@property (nonatomic, readonly) bool hasWifiFingerprintParameters;
@property (nonatomic, retain) GEOPDIpGeoLookupParameters *ipGeoLookupParameters;
@property (nonatomic, retain) GEOPDLocationDirectedSearchParameters *locationDirectedSearchParameters;
@property (nonatomic, retain) GEOPDMapsIdentifierPlaceLookupParameters *mapsIdentifierPlaceLookupParameters;
@property (nonatomic, retain) GEOPDMerchantLookupParameters *merchantLookupParameters;
@property (nonatomic, retain) GEOPDNearbySearchParameters *nearbySearchParameters;
@property (nonatomic, retain) GEOPDPlaceLookupParameters *placeLookupParameters;
@property (nonatomic, retain) GEOPDPlaceRefinementParameters *placeRefinementParameters;
@property (nonatomic, retain) GEOPDPopularNearbySearchParameters *popularNearbySearchParameters;
@property (nonatomic, retain) GEOPDReverseGeocodingParameters *reverseGeocodingParameters;
@property (nonatomic, retain) GEOPDSearchFieldPlaceholderParameters *searchFieldPlaceholderParameters;
@property (nonatomic, retain) GEOPDSearchParameters *searchParameters;
@property (nonatomic, retain) GEOPDSearchZeroKeywordCategorySuggestionParameters *searchZeroKeywordCategorySuggestionParameters;
@property (nonatomic, retain) GEOPDSearchZeroKeywordWithSearchResultsSuggestionParameters *searchZeroKeywordWithSearchResultsSuggestionParameters;
@property (nonatomic, retain) GEOPDSiriSearchParameters *siriSearchParameters;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDVendorSpecificPlaceRefinementParameters *vendorSpecificPlaceRefinementParameters;
@property (nonatomic, retain) GEOPDWifiFingerprintParameters *wifiFingerprintParameters;

- (void).cxx_destruct;
- (id)addressObjectGeocodingParameters;
- (id)autocompleteParameters;
- (id)batchPopularNearbySearchParameters;
- (id)batchSpatialLookupParameters;
- (id)brandLookupParameters;
- (id)browseCategorySuggestionParameters;
- (id)canonicalLocationSearchParameters;
- (id)categorySearchParameters;
- (void)clearLocations;
- (id)clusterGeocodingParameters;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalTransitLookupParameters;
- (id)featureIdGeocodingParameters;
- (id)geocodingParameters;
- (bool)hasAddressObjectGeocodingParameters;
- (bool)hasAutocompleteParameters;
- (bool)hasBatchPopularNearbySearchParameters;
- (bool)hasBatchSpatialLookupParameters;
- (bool)hasBrandLookupParameters;
- (bool)hasBrowseCategorySuggestionParameters;
- (bool)hasCanonicalLocationSearchParameters;
- (bool)hasCategorySearchParameters;
- (bool)hasClusterGeocodingParameters;
- (bool)hasExternalTransitLookupParameters;
- (bool)hasFeatureIdGeocodingParameters;
- (bool)hasGeocodingParameters;
- (bool)hasIpGeoLookupParameters;
- (bool)hasLocationDirectedSearchParameters;
- (bool)hasMapsIdentifierPlaceLookupParameters;
- (bool)hasMerchantLookupParameters;
- (bool)hasNearbySearchParameters;
- (bool)hasPlaceLookupParameters;
- (bool)hasPlaceRefinementParameters;
- (bool)hasPopularNearbySearchParameters;
- (bool)hasReverseGeocodingParameters;
- (bool)hasSearchFieldPlaceholderParameters;
- (bool)hasSearchParameters;
- (bool)hasSearchZeroKeywordCategorySuggestionParameters;
- (bool)hasSearchZeroKeywordWithSearchResultsSuggestionParameters;
- (bool)hasSiriSearchParameters;
- (bool)hasVendorSpecificPlaceRefinementParameters;
- (bool)hasWifiFingerprintParameters;
- (unsigned long long)hash;
- (id)initWithBrandMUID:(unsigned long long)arg1 traits:(id)arg2;
- (id)initWithCanonicalLocationSearchQueryString:(id)arg1;
- (id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2;
- (id)initWithExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2;
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 traits:(id)arg3;
- (id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 industryCategory:(id)arg3 industryCode:(id)arg4 paymentNetwork:(id)arg5 transactionDate:(id)arg6 transactionLocation:(id)arg7;
- (id)initWithPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (id)initWithReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1;
- (id)initWithReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 preserveOriginalLocation:(bool)arg2;
- (id)initWithReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 preserveOriginalLocation:(bool)arg2 floorOrdinal:(int)arg3;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 retainedSearch:(id)arg5 maxResults:(unsigned int)arg6 traits:(id)arg7;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;
- (id)initWithVendorSpecificPlaceRefinementParameters:(id)arg1 traits:(id)arg2;
- (id)ipGeoLookupParameters;
- (bool)isEqual:(id)arg1;
- (id)locationDirectedSearchParameters;
- (id)mapsIdentifierPlaceLookupParameters;
- (id)merchantLookupParameters;
- (void)mergeFrom:(id)arg1;
- (id)nearbySearchParameters;
- (id)placeLookupParameters;
- (id)placeRefinementParameters;
- (id)popularNearbySearchParameters;
- (bool)readFrom:(id)arg1;
- (id)reverseGeocodingParameters;
- (id)searchFieldPlaceholderParameters;
- (id)searchParameters;
- (id)searchZeroKeywordCategorySuggestionParameters;
- (id)searchZeroKeywordWithSearchResultsSuggestionParameters;
- (void)setAddressObjectGeocodingParameters:(id)arg1;
- (void)setAutocompleteParameters:(id)arg1;
- (void)setBatchPopularNearbySearchParameters:(id)arg1;
- (void)setBatchSpatialLookupParameters:(id)arg1;
- (void)setBrandLookupParameters:(id)arg1;
- (void)setBrowseCategorySuggestionParameters:(id)arg1;
- (void)setCanonicalLocationSearchParameters:(id)arg1;
- (void)setCategorySearchParameters:(id)arg1;
- (void)setClusterGeocodingParameters:(id)arg1;
- (void)setExternalTransitLookupParameters:(id)arg1;
- (void)setFeatureIdGeocodingParameters:(id)arg1;
- (void)setGeocodingParameters:(id)arg1;
- (void)setIpGeoLookupParameters:(id)arg1;
- (void)setLocationDirectedSearchParameters:(id)arg1;
- (void)setMapsIdentifierPlaceLookupParameters:(id)arg1;
- (void)setMerchantLookupParameters:(id)arg1;
- (void)setNearbySearchParameters:(id)arg1;
- (void)setPlaceLookupParameters:(id)arg1;
- (void)setPlaceRefinementParameters:(id)arg1;
- (void)setPopularNearbySearchParameters:(id)arg1;
- (void)setReverseGeocodingParameters:(id)arg1;
- (void)setSearchFieldPlaceholderParameters:(id)arg1;
- (void)setSearchParameters:(id)arg1;
- (void)setSearchZeroKeywordCategorySuggestionParameters:(id)arg1;
- (void)setSearchZeroKeywordWithSearchResultsSuggestionParameters:(id)arg1;
- (void)setSiriSearchParameters:(id)arg1;
- (void)setVendorSpecificPlaceRefinementParameters:(id)arg1;
- (void)setWifiFingerprintParameters:(id)arg1;
- (id)siriSearchParameters;
- (id)unknownFields;
- (id)vendorSpecificPlaceRefinementParameters;
- (id)wifiFingerprintParameters;
- (void)writeTo:(id)arg1;

@end
