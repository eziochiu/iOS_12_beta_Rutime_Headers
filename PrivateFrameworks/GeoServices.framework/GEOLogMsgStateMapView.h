/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateMapView : PBCodable <NSCopying> {
    struct { 
        unsigned int zoomLevel : 1; 
        unsigned int mapType : 1; 
    }  _has;
    GEOMapRegion * _mapRegion;
    int  _mapType;
    double  _zoomLevel;
}

@property (nonatomic, readonly) bool hasMapRegion;
@property (nonatomic) bool hasMapType;
@property (nonatomic) bool hasZoomLevel;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic) int mapType;
@property (nonatomic) double zoomLevel;

- (void).cxx_destruct;
- (int)StringAsMapType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMapRegion;
- (bool)hasMapType;
- (bool)hasZoomLevel;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mapRegion;
- (int)mapType;
- (id)mapTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMapType:(bool)arg1;
- (void)setHasZoomLevel:(bool)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setMapType:(int)arg1;
- (void)setZoomLevel:(double)arg1;
- (void)writeTo:(id)arg1;
- (double)zoomLevel;

@end
