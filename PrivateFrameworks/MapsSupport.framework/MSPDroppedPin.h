/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPDroppedPin : PBCodable <NSCopying> {
    int  _floorOrdinal;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int floorOrdinal : 1; 
    }  _has;
    GEOLatLng * _latLng;
    GEOMapRegion * _mapRegion;
    double  _timestamp;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int floorOrdinal;
@property (nonatomic) bool hasFloorOrdinal;
@property (nonatomic, readonly) bool hasLatLng;
@property (nonatomic, readonly) bool hasMapRegion;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) GEOLatLng *latLng;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)floorOrdinal;
- (bool)hasFloorOrdinal;
- (bool)hasLatLng;
- (bool)hasMapRegion;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)latLng;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFloorOrdinal:(int)arg1;
- (void)setHasFloorOrdinal:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLatLng:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
