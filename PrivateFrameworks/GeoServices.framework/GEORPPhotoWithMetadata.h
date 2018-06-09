/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPPhotoWithMetadata : PBCodable <NSCopying> {
    double  _creationDate;
    NSData * _data;
    GEOLatLng * _geotagCoordinate;
    double  _geotagHorizontalAccuracy;
    double  _geotagTimestamp;
    struct { 
        unsigned int creationDate : 1; 
        unsigned int geotagHorizontalAccuracy : 1; 
        unsigned int geotagTimestamp : 1; 
    }  _has;
}

@property (nonatomic) double creationDate;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) GEOLatLng *geotagCoordinate;
@property (nonatomic) double geotagHorizontalAccuracy;
@property (nonatomic) double geotagTimestamp;
@property (nonatomic) bool hasCreationDate;
@property (nonatomic, readonly) bool hasData;
@property (nonatomic, readonly) bool hasGeotagCoordinate;
@property (nonatomic) bool hasGeotagHorizontalAccuracy;
@property (nonatomic) bool hasGeotagTimestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geotagCoordinate;
- (double)geotagHorizontalAccuracy;
- (double)geotagTimestamp;
- (bool)hasCreationDate;
- (bool)hasData;
- (bool)hasGeotagCoordinate;
- (bool)hasGeotagHorizontalAccuracy;
- (bool)hasGeotagTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setData:(id)arg1;
- (void)setGeotagCoordinate:(id)arg1;
- (void)setGeotagHorizontalAccuracy:(double)arg1;
- (void)setGeotagTimestamp:(double)arg1;
- (void)setHasCreationDate:(bool)arg1;
- (void)setHasGeotagHorizontalAccuracy:(bool)arg1;
- (void)setHasGeotagTimestamp:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
