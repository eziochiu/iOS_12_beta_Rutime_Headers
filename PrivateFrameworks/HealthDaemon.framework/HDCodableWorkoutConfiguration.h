/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableWorkoutConfiguration : PBCodable <NSCopying> {
    long long  _activityType;
    struct { 
        unsigned int activityType : 1; 
        unsigned int locationType : 1; 
        unsigned int wLengthValue : 1; 
        unsigned int wLocationType : 1; 
    }  _has;
    long long  _locationType;
    NSString * _wLengthUnitString;
    double  _wLengthValue;
    long long  _wLocationType;
}

@property (nonatomic) long long activityType;
@property (nonatomic) bool hasActivityType;
@property (nonatomic) bool hasLocationType;
@property (nonatomic, readonly) bool hasWLengthUnitString;
@property (nonatomic) bool hasWLengthValue;
@property (nonatomic) bool hasWLocationType;
@property (nonatomic) long long locationType;
@property (nonatomic, retain) NSString *wLengthUnitString;
@property (nonatomic) double wLengthValue;
@property (nonatomic) long long wLocationType;

- (void).cxx_destruct;
- (long long)activityType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActivityType;
- (bool)hasLocationType;
- (bool)hasWLengthUnitString;
- (bool)hasWLengthValue;
- (bool)hasWLocationType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)locationType;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivityType:(long long)arg1;
- (void)setHasActivityType:(bool)arg1;
- (void)setHasLocationType:(bool)arg1;
- (void)setHasWLengthValue:(bool)arg1;
- (void)setHasWLocationType:(bool)arg1;
- (void)setLocationType:(long long)arg1;
- (void)setWLengthUnitString:(id)arg1;
- (void)setWLengthValue:(double)arg1;
- (void)setWLocationType:(long long)arg1;
- (id)wLengthUnitString;
- (double)wLengthValue;
- (long long)wLocationType;
- (void)writeTo:(id)arg1;

@end
