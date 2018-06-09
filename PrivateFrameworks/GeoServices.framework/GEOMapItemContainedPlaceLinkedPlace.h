/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem {
    GEOMapItemIdentifier * _identifier;
    GEOPDLinkedPlace * _linkedPlace;
    GEOFeatureStyleAttributes * _styleAttributes;
}

- (void).cxx_destruct;
- (bool)_hasMUID;
- (bool)_hasResolvablePartialInformation;
- (bool)_hasResultProviderID;
- (id)_identifier;
- (bool)_isInLinkedPlaceRelationship;
- (unsigned long long)_muid;
- (bool)_responseStatusIsIncomplete;
- (int)_resultProviderID;
- (id)_styleAttributes;
- (struct { double x1; double x2; })coordinate;
- (id)description;
- (id)initWithLinkedPlace:(id)arg1;
- (bool)isValid;
- (id)name;
- (int)referenceFrame;

@end
