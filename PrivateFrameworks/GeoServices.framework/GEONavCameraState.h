/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavCameraState : PBCodable <NSCopying> {
    int  _distanceToManeuver;
    struct { 
        unsigned int distanceToManeuver : 1; 
        unsigned int speedBucket : 1; 
        unsigned int upcomingManeuverType : 1; 
        unsigned int isGroupedManeuver : 1; 
    }  _has;
    bool  _isGroupedManeuver;
    int  _speedBucket;
    int  _upcomingManeuverType;
}

@property (nonatomic) int distanceToManeuver;
@property (nonatomic) bool hasDistanceToManeuver;
@property (nonatomic) bool hasIsGroupedManeuver;
@property (nonatomic) bool hasSpeedBucket;
@property (nonatomic) bool hasUpcomingManeuverType;
@property (nonatomic) bool isGroupedManeuver;
@property (nonatomic) int speedBucket;
@property (nonatomic) int upcomingManeuverType;

- (int)StringAsDistanceToManeuver:(id)arg1;
- (int)StringAsSpeedBucket:(id)arg1;
- (int)StringAsUpcomingManeuverType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)distanceToManeuver;
- (id)distanceToManeuverAsString:(int)arg1;
- (bool)hasDistanceToManeuver;
- (bool)hasIsGroupedManeuver;
- (bool)hasSpeedBucket;
- (bool)hasUpcomingManeuverType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isGroupedManeuver;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDistanceToManeuver:(int)arg1;
- (void)setHasDistanceToManeuver:(bool)arg1;
- (void)setHasIsGroupedManeuver:(bool)arg1;
- (void)setHasSpeedBucket:(bool)arg1;
- (void)setHasUpcomingManeuverType:(bool)arg1;
- (void)setIsGroupedManeuver:(bool)arg1;
- (void)setSpeedBucket:(int)arg1;
- (void)setUpcomingManeuverType:(int)arg1;
- (int)speedBucket;
- (id)speedBucketAsString:(int)arg1;
- (int)upcomingManeuverType;
- (id)upcomingManeuverTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
