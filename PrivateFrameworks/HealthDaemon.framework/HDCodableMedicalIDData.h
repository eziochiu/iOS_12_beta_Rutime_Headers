/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableMedicalIDData : PBCodable <NSCopying> {
    NSData * _medicalIDBytes;
}

@property (nonatomic, readonly) bool hasMedicalIDBytes;
@property (nonatomic, retain) NSData *medicalIDBytes;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMedicalIDBytes;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)medicalIDBytes;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMedicalIDBytes:(id)arg1;
- (void)writeTo:(id)arg1;

@end
