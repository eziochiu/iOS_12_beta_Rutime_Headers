/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActivityAWDActivityExerciseMinuteHour : PBCodable <NSCopying> {
    long long  _exerciseMinutes;
    struct { 
        unsigned int exerciseMinutes : 1; 
        unsigned int hourSinceMidnight : 1; 
    }  _has;
    long long  _hourSinceMidnight;
}

@property (nonatomic) long long exerciseMinutes;
@property (nonatomic) bool hasExerciseMinutes;
@property (nonatomic) bool hasHourSinceMidnight;
@property (nonatomic) long long hourSinceMidnight;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)exerciseMinutes;
- (bool)hasExerciseMinutes;
- (bool)hasHourSinceMidnight;
- (unsigned long long)hash;
- (long long)hourSinceMidnight;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExerciseMinutes:(long long)arg1;
- (void)setHasExerciseMinutes:(bool)arg1;
- (void)setHasHourSinceMidnight:(bool)arg1;
- (void)setHourSinceMidnight:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
