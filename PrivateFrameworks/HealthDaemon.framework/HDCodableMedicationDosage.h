/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableMedicationDosage : PBCodable <NSCopying> {
    NSString * _instruction;
    HDCodableMedicalDateInterval * _timingPeriod;
}

@property (nonatomic, readonly) bool hasInstruction;
@property (nonatomic, readonly) bool hasTimingPeriod;
@property (nonatomic, retain) NSString *instruction;
@property (nonatomic, retain) HDCodableMedicalDateInterval *timingPeriod;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInstruction;
- (bool)hasTimingPeriod;
- (unsigned long long)hash;
- (id)instruction;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setInstruction:(id)arg1;
- (void)setTimingPeriod:(id)arg1;
- (id)timingPeriod;
- (void)writeTo:(id)arg1;

@end
