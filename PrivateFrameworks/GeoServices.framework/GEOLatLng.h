/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLatLng : PBCodable <NSCopying> {
    bool  _gtLog;
    struct { 
        unsigned int gtLog : 1; 
    }  _has;
    double  _lat;
    double  _lng;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (nonatomic) bool gtLog;
@property (nonatomic) bool hasGtLog;
@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (struct { double x1; double x2; })coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)gtLog;
- (bool)hasGtLog;
- (unsigned long long)hash;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)lat;
- (double)lng;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGtLog:(bool)arg1;
- (void)setHasGtLog:(bool)arg1;
- (void)setLat:(double)arg1;
- (void)setLng:(double)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
