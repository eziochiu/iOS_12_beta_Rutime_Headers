/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableAllergyRecord : PBCodable <HDDecoding, NSCopying> {
    HDCodableMedicalCodingList * _allergyCodings;
    NSString * _asserter;
    HDCodableMedicalCoding * _criticalityCoding;
    NSData * _lastOccurenceDate;
    HDCodableMedicalRecord * _medicalRecord;
    NSData * _onsetDate;
    HDCodableAllergyReactionList * _reactions;
    NSData * _recordedDate;
}

@property (nonatomic, retain) HDCodableMedicalCodingList *allergyCodings;
@property (nonatomic, retain) NSString *asserter;
@property (nonatomic, retain) HDCodableMedicalCoding *criticalityCoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAllergyCodings;
@property (nonatomic, readonly) bool hasAsserter;
@property (nonatomic, readonly) bool hasCriticalityCoding;
@property (nonatomic, readonly) bool hasLastOccurenceDate;
@property (nonatomic, readonly) bool hasMedicalRecord;
@property (nonatomic, readonly) bool hasOnsetDate;
@property (nonatomic, readonly) bool hasReactions;
@property (nonatomic, readonly) bool hasRecordedDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *lastOccurenceDate;
@property (nonatomic, retain) HDCodableMedicalRecord *medicalRecord;
@property (nonatomic, retain) NSData *onsetDate;
@property (nonatomic, retain) HDCodableAllergyReactionList *reactions;
@property (nonatomic, retain) NSData *recordedDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allergyCodings;
- (bool)applyToObject:(id)arg1;
- (bool)applyToObject:(id)arg1 error:(out id*)arg2;
- (id)asserter;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)criticalityCoding;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAllergyCodings;
- (bool)hasAsserter;
- (bool)hasCriticalityCoding;
- (bool)hasLastOccurenceDate;
- (bool)hasMedicalRecord;
- (bool)hasOnsetDate;
- (bool)hasReactions;
- (bool)hasRecordedDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastOccurenceDate;
- (id)medicalRecord;
- (void)mergeFrom:(id)arg1;
- (id)onsetDate;
- (id)reactions;
- (bool)readFrom:(id)arg1;
- (id)recordedDate;
- (void)setAllergyCodings:(id)arg1;
- (void)setAsserter:(id)arg1;
- (void)setCriticalityCoding:(id)arg1;
- (void)setLastOccurenceDate:(id)arg1;
- (void)setMedicalRecord:(id)arg1;
- (void)setOnsetDate:(id)arg1;
- (void)setReactions:(id)arg1;
- (void)setRecordedDate:(id)arg1;
- (void)writeTo:(id)arg1;

@end
