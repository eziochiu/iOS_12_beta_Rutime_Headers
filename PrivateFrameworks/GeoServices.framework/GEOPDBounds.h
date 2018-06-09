/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDBounds : PBCodable <NSCopying> {
    GEOMapRegion * _displayMapRegion;
    struct { 
        unsigned int maxZoom : 1; 
        unsigned int minZoom : 1; 
    }  _has;
    GEOMapRegion * _mapRegion;
    float  _maxZoom;
    float  _minZoom;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOMapRegion *displayMapRegion;
@property (nonatomic, readonly) bool hasDisplayMapRegion;
@property (nonatomic, readonly) bool hasMapRegion;
@property (nonatomic) bool hasMaxZoom;
@property (nonatomic) bool hasMinZoom;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic) float maxZoom;
@property (nonatomic) float minZoom;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)boundsInfoForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayMapRegion;
- (bool)hasDisplayMapRegion;
- (bool)hasMapRegion;
- (bool)hasMaxZoom;
- (bool)hasMinZoom;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mapRegion;
- (float)maxZoom;
- (void)mergeFrom:(id)arg1;
- (float)minZoom;
- (bool)readFrom:(id)arg1;
- (void)setDisplayMapRegion:(id)arg1;
- (void)setHasMaxZoom:(bool)arg1;
- (void)setHasMinZoom:(bool)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setMaxZoom:(float)arg1;
- (void)setMinZoom:(float)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
