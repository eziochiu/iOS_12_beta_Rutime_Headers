/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateMapViewLocation : PBCodable <NSCopying> {
    struct { 
        unsigned int locationBucket : 1; 
        unsigned int isCurrentLocationInViewport : 1; 
    }  _has;
    bool  _isCurrentLocationInViewport;
    int  _locationBucket;
    GEOTouristInfo * _touristInfo;
}

@property (nonatomic) bool hasIsCurrentLocationInViewport;
@property (nonatomic) bool hasLocationBucket;
@property (nonatomic, readonly) bool hasTouristInfo;
@property (nonatomic) bool isCurrentLocationInViewport;
@property (nonatomic) int locationBucket;
@property (nonatomic, retain) GEOTouristInfo *touristInfo;

- (void).cxx_destruct;
- (int)StringAsLocationBucket:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsCurrentLocationInViewport;
- (bool)hasLocationBucket;
- (bool)hasTouristInfo;
- (unsigned long long)hash;
- (bool)isCurrentLocationInViewport;
- (bool)isEqual:(id)arg1;
- (int)locationBucket;
- (id)locationBucketAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsCurrentLocationInViewport:(bool)arg1;
- (void)setHasLocationBucket:(bool)arg1;
- (void)setIsCurrentLocationInViewport:(bool)arg1;
- (void)setLocationBucket:(int)arg1;
- (void)setTouristInfo:(id)arg1;
- (id)touristInfo;
- (void)writeTo:(id)arg1;

@end
