/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteEntryAddress : PBCodable <NSCopying> {
    GEOLatLng * _center;
    double  _disambiguationRadiusMeters;
    double  _distance;
    struct { 
        unsigned int disambiguationRadiusMeters : 1; 
        unsigned int distance : 1; 
        unsigned int opaqueGeoId : 1; 
        unsigned int placeType : 1; 
    }  _has;
    unsigned long long  _opaqueGeoId;
    int  _placeType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic) double disambiguationRadiusMeters;
@property (nonatomic) double distance;
@property (nonatomic, readonly) bool hasCenter;
@property (nonatomic) bool hasDisambiguationRadiusMeters;
@property (nonatomic) bool hasDistance;
@property (nonatomic) bool hasOpaqueGeoId;
@property (nonatomic) bool hasPlaceType;
@property (nonatomic) unsigned long long opaqueGeoId;
@property (nonatomic) int placeType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsPlaceType:(id)arg1;
- (id)center;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)disambiguationRadiusMeters;
- (double)distance;
- (bool)hasCenter;
- (bool)hasDisambiguationRadiusMeters;
- (bool)hasDistance;
- (bool)hasOpaqueGeoId;
- (bool)hasPlaceType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)opaqueGeoId;
- (int)placeType;
- (id)placeTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setDisambiguationRadiusMeters:(double)arg1;
- (void)setDistance:(double)arg1;
- (void)setHasDisambiguationRadiusMeters:(bool)arg1;
- (void)setHasDistance:(bool)arg1;
- (void)setHasOpaqueGeoId:(bool)arg1;
- (void)setHasPlaceType:(bool)arg1;
- (void)setOpaqueGeoId:(unsigned long long)arg1;
- (void)setPlaceType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
