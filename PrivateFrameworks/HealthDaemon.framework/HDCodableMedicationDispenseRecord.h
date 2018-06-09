/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableMedicationDispenseRecord : PBCodable <HDDecoding, NSCopying> {
    HDCodableCodedQuantity * _daysSupplyQuantity;
    HDCodableMedicationDosageList * _dosages;
    NSData * _earliestDosageDate;
    NSData * _handOverDate;
    HDCodableMedicalRecord * _medicalRecord;
    HDCodableMedicalCodingList * _medicationCodings;
    NSData * _preparationDate;
    HDCodableCodedQuantity * _quantityDispensed;
    HDCodableMedicalCoding * _statusCoding;
}

@property (nonatomic, retain) HDCodableCodedQuantity *daysSupplyQuantity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HDCodableMedicationDosageList *dosages;
@property (nonatomic, retain) NSData *earliestDosageDate;
@property (nonatomic, retain) NSData *handOverDate;
@property (nonatomic, readonly) bool hasDaysSupplyQuantity;
@property (nonatomic, readonly) bool hasDosages;
@property (nonatomic, readonly) bool hasEarliestDosageDate;
@property (nonatomic, readonly) bool hasHandOverDate;
@property (nonatomic, readonly) bool hasMedicalRecord;
@property (nonatomic, readonly) bool hasMedicationCodings;
@property (nonatomic, readonly) bool hasPreparationDate;
@property (nonatomic, readonly) bool hasQuantityDispensed;
@property (nonatomic, readonly) bool hasStatusCoding;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDCodableMedicalRecord *medicalRecord;
@property (nonatomic, retain) HDCodableMedicalCodingList *medicationCodings;
@property (nonatomic, retain) NSData *preparationDate;
@property (nonatomic, retain) HDCodableCodedQuantity *quantityDispensed;
@property (nonatomic, retain) HDCodableMedicalCoding *statusCoding;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)applyToObject:(id)arg1;
- (bool)applyToObject:(id)arg1 error:(out id*)arg2;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)daysSupplyQuantity;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dosages;
- (id)earliestDosageDate;
- (id)handOverDate;
- (bool)hasDaysSupplyQuantity;
- (bool)hasDosages;
- (bool)hasEarliestDosageDate;
- (bool)hasHandOverDate;
- (bool)hasMedicalRecord;
- (bool)hasMedicationCodings;
- (bool)hasPreparationDate;
- (bool)hasQuantityDispensed;
- (bool)hasStatusCoding;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)medicalRecord;
- (id)medicationCodings;
- (void)mergeFrom:(id)arg1;
- (id)preparationDate;
- (id)quantityDispensed;
- (bool)readFrom:(id)arg1;
- (void)setDaysSupplyQuantity:(id)arg1;
- (void)setDosages:(id)arg1;
- (void)setEarliestDosageDate:(id)arg1;
- (void)setHandOverDate:(id)arg1;
- (void)setMedicalRecord:(id)arg1;
- (void)setMedicationCodings:(id)arg1;
- (void)setPreparationDate:(id)arg1;
- (void)setQuantityDispensed:(id)arg1;
- (void)setStatusCoding:(id)arg1;
- (id)statusCoding;
- (void)writeTo:(id)arg1;

@end
