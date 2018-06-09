/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableMetadataKeyValuePair : PBCodable <NSCopying> {
    NSData * _dataValue;
    double  _dateValue;
    struct { 
        unsigned int dateValue : 1; 
        unsigned int numberDoubleValue : 1; 
        unsigned int numberIntValue : 1; 
    }  _has;
    NSString * _key;
    double  _numberDoubleValue;
    long long  _numberIntValue;
    HDCodableQuantity * _quantityValue;
    NSString * _stringValue;
}

@property (nonatomic, retain) NSData *dataValue;
@property (nonatomic) double dateValue;
@property (nonatomic, readonly) bool hasDataValue;
@property (nonatomic) bool hasDateValue;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasNumberDoubleValue;
@property (nonatomic) bool hasNumberIntValue;
@property (nonatomic, readonly) bool hasQuantityValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) double numberDoubleValue;
@property (nonatomic) long long numberIntValue;
@property (nonatomic, retain) HDCodableQuantity *quantityValue;
@property (nonatomic, retain) NSString *stringValue;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataValue;
- (double)dateValue;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDataValue;
- (bool)hasDateValue;
- (bool)hasKey;
- (bool)hasNumberDoubleValue;
- (bool)hasNumberIntValue;
- (bool)hasQuantityValue;
- (bool)hasStringValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (double)numberDoubleValue;
- (long long)numberIntValue;
- (id)quantityValue;
- (bool)readFrom:(id)arg1;
- (void)setDataValue:(id)arg1;
- (void)setDateValue:(double)arg1;
- (void)setHasDateValue:(bool)arg1;
- (void)setHasNumberDoubleValue:(bool)arg1;
- (void)setHasNumberIntValue:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setNumberDoubleValue:(double)arg1;
- (void)setNumberIntValue:(long long)arg1;
- (void)setQuantityValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)writeTo:(id)arg1;

@end
