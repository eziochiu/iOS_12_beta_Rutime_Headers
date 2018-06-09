/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableConditionRecord : PBCodable <HDDecoding, NSCopying> {
    HDCodableInspectableValue * _abatement;
    NSString * _asserter;
    HDCodableMedicalCodingListList * _bodySitesCodings;
    HDCodableMedicalCodingList * _categoryCodings;
    HDCodableMedicalCoding * _clinicalStatusCoding;
    HDCodableMedicalCodingList * _conditionCodings;
    HDCodableMedicalRecord * _medicalRecord;
    HDCodableInspectableValue * _onset;
    NSData * _recordedDate;
    HDCodableMedicalCodingList * _severityCodings;
    HDCodableMedicalCoding * _verificationStatusCoding;
}

@property (nonatomic, retain) HDCodableInspectableValue *abatement;
@property (nonatomic, retain) NSString *asserter;
@property (nonatomic, retain) HDCodableMedicalCodingListList *bodySitesCodings;
@property (nonatomic, retain) HDCodableMedicalCodingList *categoryCodings;
@property (nonatomic, retain) HDCodableMedicalCoding *clinicalStatusCoding;
@property (nonatomic, retain) HDCodableMedicalCodingList *conditionCodings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAbatement;
@property (nonatomic, readonly) bool hasAsserter;
@property (nonatomic, readonly) bool hasBodySitesCodings;
@property (nonatomic, readonly) bool hasCategoryCodings;
@property (nonatomic, readonly) bool hasClinicalStatusCoding;
@property (nonatomic, readonly) bool hasConditionCodings;
@property (nonatomic, readonly) bool hasMedicalRecord;
@property (nonatomic, readonly) bool hasOnset;
@property (nonatomic, readonly) bool hasRecordedDate;
@property (nonatomic, readonly) bool hasSeverityCodings;
@property (nonatomic, readonly) bool hasVerificationStatusCoding;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDCodableMedicalRecord *medicalRecord;
@property (nonatomic, retain) HDCodableInspectableValue *onset;
@property (nonatomic, retain) NSData *recordedDate;
@property (nonatomic, retain) HDCodableMedicalCodingList *severityCodings;
@property (readonly) Class superclass;
@property (nonatomic, retain) HDCodableMedicalCoding *verificationStatusCoding;

- (void).cxx_destruct;
- (id)abatement;
- (bool)applyToObject:(id)arg1;
- (bool)applyToObject:(id)arg1 error:(out id*)arg2;
- (id)asserter;
- (id)bodySitesCodings;
- (id)categoryCodings;
- (id)clinicalStatusCoding;
- (id)conditionCodings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbatement;
- (bool)hasAsserter;
- (bool)hasBodySitesCodings;
- (bool)hasCategoryCodings;
- (bool)hasClinicalStatusCoding;
- (bool)hasConditionCodings;
- (bool)hasMedicalRecord;
- (bool)hasOnset;
- (bool)hasRecordedDate;
- (bool)hasSeverityCodings;
- (bool)hasVerificationStatusCoding;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)medicalRecord;
- (void)mergeFrom:(id)arg1;
- (id)onset;
- (bool)readFrom:(id)arg1;
- (id)recordedDate;
- (void)setAbatement:(id)arg1;
- (void)setAsserter:(id)arg1;
- (void)setBodySitesCodings:(id)arg1;
- (void)setCategoryCodings:(id)arg1;
- (void)setClinicalStatusCoding:(id)arg1;
- (void)setConditionCodings:(id)arg1;
- (void)setMedicalRecord:(id)arg1;
- (void)setOnset:(id)arg1;
- (void)setRecordedDate:(id)arg1;
- (void)setSeverityCodings:(id)arg1;
- (void)setVerificationStatusCoding:(id)arg1;
- (id)severityCodings;
- (id)verificationStatusCoding;
- (void)writeTo:(id)arg1;

@end
