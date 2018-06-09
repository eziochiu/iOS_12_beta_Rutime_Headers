/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPCorrectedCoordinate : PBCodable <NSCopying> {
    GEOLatLng * _correctedCoordinate;
    GEOLatLng * _originalCoordinate;
}

@property (nonatomic, retain) GEOLatLng *correctedCoordinate;
@property (nonatomic, readonly) bool hasCorrectedCoordinate;
@property (nonatomic, readonly) bool hasOriginalCoordinate;
@property (nonatomic, retain) GEOLatLng *originalCoordinate;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctedCoordinate;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCorrectedCoordinate;
- (bool)hasOriginalCoordinate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originalCoordinate;
- (bool)readFrom:(id)arg1;
- (void)setCorrectedCoordinate:(id)arg1;
- (void)setOriginalCoordinate:(id)arg1;
- (void)writeTo:(id)arg1;

@end
