/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableActivityStatisticsQuantityInfo : PBCodable <NSCopying> {
    double  _endDate;
    struct { 
        unsigned int endDate : 1; 
        unsigned int startDate : 1; 
        unsigned int value : 1; 
    }  _has;
    double  _startDate;
    NSString * _unit;
    double  _value;
}

@property (nonatomic) double endDate;
@property (nonatomic) bool hasEndDate;
@property (nonatomic) bool hasStartDate;
@property (nonatomic, readonly) bool hasUnit;
@property (nonatomic) bool hasValue;
@property (nonatomic) double startDate;
@property (nonatomic, retain) NSString *unit;
@property (nonatomic) double value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endDate;
- (bool)hasEndDate;
- (bool)hasStartDate;
- (bool)hasUnit;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndDate:(double)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setStartDate:(double)arg1;
- (void)setUnit:(id)arg1;
- (void)setValue:(double)arg1;
- (double)startDate;
- (id)unit;
- (double)value;
- (void)writeTo:(id)arg1;

@end
