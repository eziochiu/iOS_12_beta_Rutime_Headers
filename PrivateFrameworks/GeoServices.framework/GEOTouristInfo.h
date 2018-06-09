/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTouristInfo : PBCodable <NSCopying> {
    double  _fetchTimestamp;
    struct { 
        unsigned int fetchTimestamp : 1; 
        unsigned int isTourist : 1; 
    }  _has;
    bool  _isTourist;
}

@property (nonatomic) double fetchTimestamp;
@property (nonatomic) bool hasFetchTimestamp;
@property (nonatomic) bool hasIsTourist;
@property (nonatomic) bool isTourist;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)fetchTimestamp;
- (bool)hasFetchTimestamp;
- (bool)hasIsTourist;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isTourist;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFetchTimestamp:(double)arg1;
- (void)setHasFetchTimestamp:(bool)arg1;
- (void)setHasIsTourist:(bool)arg1;
- (void)setIsTourist:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
