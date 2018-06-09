/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableInspectableValue : PBCodable <NSCopying> {
    HDCodableCodedQuantity * _codedQuantityValue;
    HDCodableCodedValueCollection * _codedValueCollection;
    HDCodableMedicalCodingList * _dataAbsentReasonCodingsValue;
    HDCodableDateComponents * _dateComponentsValue;
    HDCodableMedicalCodingList * _medicalCodingValue;
    HDCodableMedicalDateInterval * _medicalDateIntervalValue;
    HDCodableMedicalDate * _medicalDateValue;
    HDCodableRatioValue * _ratioValue;
    NSString * _stringValue;
}

@property (nonatomic, retain) HDCodableCodedQuantity *codedQuantityValue;
@property (nonatomic, retain) HDCodableCodedValueCollection *codedValueCollection;
@property (nonatomic, retain) HDCodableMedicalCodingList *dataAbsentReasonCodingsValue;
@property (nonatomic, retain) HDCodableDateComponents *dateComponentsValue;
@property (nonatomic, readonly) bool hasCodedQuantityValue;
@property (nonatomic, readonly) bool hasCodedValueCollection;
@property (nonatomic, readonly) bool hasDataAbsentReasonCodingsValue;
@property (nonatomic, readonly) bool hasDateComponentsValue;
@property (nonatomic, readonly) bool hasMedicalCodingValue;
@property (nonatomic, readonly) bool hasMedicalDateIntervalValue;
@property (nonatomic, readonly) bool hasMedicalDateValue;
@property (nonatomic, readonly) bool hasRatioValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic, retain) HDCodableMedicalCodingList *medicalCodingValue;
@property (nonatomic, retain) HDCodableMedicalDateInterval *medicalDateIntervalValue;
@property (nonatomic, retain) HDCodableMedicalDate *medicalDateValue;
@property (nonatomic, retain) HDCodableRatioValue *ratioValue;
@property (nonatomic, retain) NSString *stringValue;

- (void).cxx_destruct;
- (id)codedQuantityValue;
- (id)codedValueCollection;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataAbsentReasonCodingsValue;
- (id)dateComponentsValue;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCodedQuantityValue;
- (bool)hasCodedValueCollection;
- (bool)hasDataAbsentReasonCodingsValue;
- (bool)hasDateComponentsValue;
- (bool)hasMedicalCodingValue;
- (bool)hasMedicalDateIntervalValue;
- (bool)hasMedicalDateValue;
- (bool)hasRatioValue;
- (bool)hasStringValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)medicalCodingValue;
- (id)medicalDateIntervalValue;
- (id)medicalDateValue;
- (void)mergeFrom:(id)arg1;
- (id)ratioValue;
- (bool)readFrom:(id)arg1;
- (void)setCodedQuantityValue:(id)arg1;
- (void)setCodedValueCollection:(id)arg1;
- (void)setDataAbsentReasonCodingsValue:(id)arg1;
- (void)setDateComponentsValue:(id)arg1;
- (void)setMedicalCodingValue:(id)arg1;
- (void)setMedicalDateIntervalValue:(id)arg1;
- (void)setMedicalDateValue:(id)arg1;
- (void)setRatioValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)writeTo:(id)arg1;

@end
