/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSpatialPlaceLookupResponse : PBCodable <NSCopying> {
    GEOPDBounds * _bounds;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _categorys;
    GEOLatLng * _center;
    GEOPDMapsIdentifier * _placeId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDBounds *bounds;
@property (nonatomic, readonly) int*categorys;
@property (nonatomic, readonly) unsigned long long categorysCount;
@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic, readonly) bool hasBounds;
@property (nonatomic, readonly) bool hasCenter;
@property (nonatomic, readonly) bool hasPlaceId;
@property (nonatomic, retain) GEOPDMapsIdentifier *placeId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsCategorys:(id)arg1;
- (void)addCategory:(int)arg1;
- (id)bounds;
- (int)categoryAtIndex:(unsigned long long)arg1;
- (int*)categorys;
- (id)categorysAsString:(int)arg1;
- (unsigned long long)categorysCount;
- (id)center;
- (void)clearCategorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBounds;
- (bool)hasCenter;
- (bool)hasPlaceId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeId;
- (bool)readFrom:(id)arg1;
- (void)setBounds:(id)arg1;
- (void)setCategorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCenter:(id)arg1;
- (void)setPlaceId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
