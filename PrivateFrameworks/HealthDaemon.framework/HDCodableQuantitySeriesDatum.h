/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableQuantitySeriesDatum : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int value : 1; 
    }  _has;
    double  _timestamp;
    double  _value;
}

@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasValue;
@property (nonatomic) double timestamp;
@property (nonatomic) double value;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setValue:(double)arg1;
- (double)timestamp;
- (double)value;
- (void)writeTo:(id)arg1;

@end
