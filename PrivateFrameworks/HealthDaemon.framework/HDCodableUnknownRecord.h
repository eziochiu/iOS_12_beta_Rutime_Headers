/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableUnknownRecord : PBCodable <HDDecoding, NSCopying> {
    NSString * _displayName;
    HDCodableMedicalRecord * _medicalRecord;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasMedicalRecord;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDCodableMedicalRecord *medicalRecord;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)applyToObject:(id)arg1;
- (bool)applyToObject:(id)arg1 error:(out id*)arg2;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)hasDisplayName;
- (bool)hasMedicalRecord;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)medicalRecord;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setMedicalRecord:(id)arg1;
- (void)writeTo:(id)arg1;

@end