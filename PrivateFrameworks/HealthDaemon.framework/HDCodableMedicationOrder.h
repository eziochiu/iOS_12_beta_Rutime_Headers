/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableMedicationOrder : PBCodable <HDDecoding, NSCopying> {
    HDCodableMedicationDosageList * _dosages;
    NSData * _earliestDosageDate;
    NSData * _endedDate;
    struct { 
        unsigned int numberOfFills : 1; 
    }  _has;
    HDCodableMedicalRecord * _medicalRecord;
    HDCodableMedicalCodingList * _medicationCodings;
    long long  _numberOfFills;
    NSString * _prescriber;
    HDCodableMedicalCodingList * _reasonCodings;
    HDCodableMedicalCodingList * _reasonEndedCodings;
    HDCodableMedicalCoding * _statusCoding;
    NSData * _writtenDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HDCodableMedicationDosageList *dosages;
@property (nonatomic, retain) NSData *earliestDosageDate;
@property (nonatomic, retain) NSData *endedDate;
@property (nonatomic, readonly) bool hasDosages;
@property (nonatomic, readonly) bool hasEarliestDosageDate;
@property (nonatomic, readonly) bool hasEndedDate;
@property (nonatomic, readonly) bool hasMedicalRecord;
@property (nonatomic, readonly) bool hasMedicationCodings;
@property (nonatomic) bool hasNumberOfFills;
@property (nonatomic, readonly) bool hasPrescriber;
@property (nonatomic, readonly) bool hasReasonCodings;
@property (nonatomic, readonly) bool hasReasonEndedCodings;
@property (nonatomic, readonly) bool hasStatusCoding;
@property (nonatomic, readonly) bool hasWrittenDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDCodableMedicalRecord *medicalRecord;
@property (nonatomic, retain) HDCodableMedicalCodingList *medicationCodings;
@property (nonatomic) long long numberOfFills;
@property (nonatomic, retain) NSString *prescriber;
@property (nonatomic, retain) HDCodableMedicalCodingList *reasonCodings;
@property (nonatomic, retain) HDCodableMedicalCodingList *reasonEndedCodings;
@property (nonatomic, retain) HDCodableMedicalCoding *statusCoding;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *writtenDate;

- (void).cxx_destruct;
- (bool)applyToObject:(id)arg1;
- (bool)applyToObject:(id)arg1 error:(out id*)arg2;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dosages;
- (id)earliestDosageDate;
- (id)endedDate;
- (bool)hasDosages;
- (bool)hasEarliestDosageDate;
- (bool)hasEndedDate;
- (bool)hasMedicalRecord;
- (bool)hasMedicationCodings;
- (bool)hasNumberOfFills;
- (bool)hasPrescriber;
- (bool)hasReasonCodings;
- (bool)hasReasonEndedCodings;
- (bool)hasStatusCoding;
- (bool)hasWrittenDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)medicalRecord;
- (id)medicationCodings;
- (void)mergeFrom:(id)arg1;
- (long long)numberOfFills;
- (id)prescriber;
- (bool)readFrom:(id)arg1;
- (id)reasonCodings;
- (id)reasonEndedCodings;
- (void)setDosages:(id)arg1;
- (void)setEarliestDosageDate:(id)arg1;
- (void)setEndedDate:(id)arg1;
- (void)setHasNumberOfFills:(bool)arg1;
- (void)setMedicalRecord:(id)arg1;
- (void)setMedicationCodings:(id)arg1;
- (void)setNumberOfFills:(long long)arg1;
- (void)setPrescriber:(id)arg1;
- (void)setReasonCodings:(id)arg1;
- (void)setReasonEndedCodings:(id)arg1;
- (void)setStatusCoding:(id)arg1;
- (void)setWrittenDate:(id)arg1;
- (id)statusCoding;
- (void)writeTo:(id)arg1;
- (id)writtenDate;

@end
