/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableAccountOwner : PBCodable <HDDecoding, NSCopying> {
    NSData * _birthDate;
    HDCodableMedicalRecord * _medicalRecord;
    NSString * _name;
}

@property (nonatomic, retain) NSData *birthDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBirthDate;
@property (nonatomic, readonly) bool hasMedicalRecord;
@property (nonatomic, readonly) bool hasName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDCodableMedicalRecord *medicalRecord;
@property (nonatomic, retain) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)applyToObject:(id)arg1;
- (bool)applyToObject:(id)arg1 error:(out id*)arg2;
- (id)birthDate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBirthDate;
- (bool)hasMedicalRecord;
- (bool)hasName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)medicalRecord;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setBirthDate:(id)arg1;
- (void)setMedicalRecord:(id)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
