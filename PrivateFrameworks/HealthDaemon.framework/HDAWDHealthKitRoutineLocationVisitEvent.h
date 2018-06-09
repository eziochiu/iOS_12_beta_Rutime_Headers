/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitRoutineLocationVisitEvent : PBCodable <NSCopying> {
    long long  _arrivalDate;
    struct { 
        unsigned int arrivalDate : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    HDAWDHealthKitRoutineLocation * _location;
    unsigned long long  _timestamp;
}

@property (nonatomic) long long arrivalDate;
@property (nonatomic) bool hasArrivalDate;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) HDAWDHealthKitRoutineLocation *location;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (long long)arrivalDate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArrivalDate;
- (bool)hasLocation;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArrivalDate:(long long)arg1;
- (void)setHasArrivalDate:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
