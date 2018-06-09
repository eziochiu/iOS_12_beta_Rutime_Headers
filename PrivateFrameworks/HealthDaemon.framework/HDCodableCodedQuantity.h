/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableCodedQuantity : PBCodable <NSCopying> {
    HDCodableMedicalCoding * _comparatorCoding;
    NSString * _rawValue;
    HDCodableMedicalCoding * _unitCoding;
}

@property (nonatomic, retain) HDCodableMedicalCoding *comparatorCoding;
@property (nonatomic, readonly) bool hasComparatorCoding;
@property (nonatomic, readonly) bool hasRawValue;
@property (nonatomic, readonly) bool hasUnitCoding;
@property (nonatomic, retain) NSString *rawValue;
@property (nonatomic, retain) HDCodableMedicalCoding *unitCoding;

- (void).cxx_destruct;
- (id)comparatorCoding;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasComparatorCoding;
- (bool)hasRawValue;
- (bool)hasUnitCoding;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)rawValue;
- (bool)readFrom:(id)arg1;
- (void)setComparatorCoding:(id)arg1;
- (void)setRawValue:(id)arg1;
- (void)setUnitCoding:(id)arg1;
- (id)unitCoding;
- (void)writeTo:(id)arg1;

@end
