/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableQuantity : PBCodable <NSCopying> {
    struct { 
        unsigned int value : 1; 
    }  _has;
    NSString * _unitString;
    double  _value;
}

@property (nonatomic, readonly) bool hasUnitString;
@property (nonatomic) bool hasValue;
@property (nonatomic, retain) NSString *unitString;
@property (nonatomic) double value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasUnitString;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setUnitString:(id)arg1;
- (void)setValue:(double)arg1;
- (id)unitString;
- (double)value;
- (void)writeTo:(id)arg1;

@end
