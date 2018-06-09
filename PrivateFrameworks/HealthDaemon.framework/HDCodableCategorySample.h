/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableCategorySample : PBCodable <HDDecoding, NSCopying> {
    struct { 
        unsigned int value : 1; 
    }  _has;
    HDCodableSample * _sample;
    long long  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSample;
@property (nonatomic) bool hasValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDCodableSample *sample;
@property (readonly) Class superclass;
@property (nonatomic) long long value;

- (void).cxx_destruct;
- (bool)applyToObject:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSample;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sample;
- (void)setHasValue:(bool)arg1;
- (void)setSample:(id)arg1;
- (void)setValue:(long long)arg1;
- (long long)value;
- (void)writeTo:(id)arg1;

@end
