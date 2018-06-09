/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableLocationDatum : PBCodable <NSCopying> {
    double  _altitude;
    double  _course;
    struct { 
        unsigned int altitude : 1; 
        unsigned int course : 1; 
        unsigned int horizontalAccuracy : 1; 
        unsigned int latitude : 1; 
        unsigned int longitude : 1; 
        unsigned int speed : 1; 
        unsigned int timestamp : 1; 
        unsigned int verticalAccuracy : 1; 
    }  _has;
    double  _horizontalAccuracy;
    double  _latitude;
    double  _longitude;
    double  _speed;
    double  _timestamp;
    double  _verticalAccuracy;
}

@property (nonatomic) double altitude;
@property (nonatomic) double course;
@property (nonatomic) bool hasAltitude;
@property (nonatomic) bool hasCourse;
@property (nonatomic) bool hasHorizontalAccuracy;
@property (nonatomic) bool hasLatitude;
@property (nonatomic) bool hasLongitude;
@property (nonatomic) bool hasSpeed;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasVerticalAccuracy;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double speed;
@property (nonatomic) double timestamp;
@property (nonatomic) double verticalAccuracy;

- (double)altitude;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)course;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAltitude;
- (bool)hasCourse;
- (bool)hasHorizontalAccuracy;
- (bool)hasLatitude;
- (bool)hasLongitude;
- (bool)hasSpeed;
- (bool)hasTimestamp;
- (bool)hasVerticalAccuracy;
- (unsigned long long)hash;
- (double)horizontalAccuracy;
- (bool)isEqual:(id)arg1;
- (double)latitude;
- (double)longitude;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAltitude:(double)arg1;
- (void)setCourse:(double)arg1;
- (void)setHasAltitude:(bool)arg1;
- (void)setHasCourse:(bool)arg1;
- (void)setHasHorizontalAccuracy:(bool)arg1;
- (void)setHasLatitude:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (void)setHasSpeed:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasVerticalAccuracy:(bool)arg1;
- (void)setHorizontalAccuracy:(double)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setSpeed:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setVerticalAccuracy:(double)arg1;
- (double)speed;
- (double)timestamp;
- (double)verticalAccuracy;
- (void)writeTo:(id)arg1;

@end
