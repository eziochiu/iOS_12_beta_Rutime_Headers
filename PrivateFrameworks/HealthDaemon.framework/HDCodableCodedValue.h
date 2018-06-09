/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableCodedValue : PBCodable <NSCopying> {
    HDCodableMedicalCodingList * _codings;
    NSMutableArray * _referenceRanges;
    HDCodableInspectableValue * _value;
}

@property (nonatomic, retain) HDCodableMedicalCodingList *codings;
@property (nonatomic, readonly) bool hasCodings;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) NSMutableArray *referenceRanges;
@property (nonatomic, retain) HDCodableInspectableValue *value;

+ (Class)referenceRangesType;

- (void).cxx_destruct;
- (void)addReferenceRanges:(id)arg1;
- (void)clearReferenceRanges;
- (id)codings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCodings;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)referenceRanges;
- (id)referenceRangesAtIndex:(unsigned long long)arg1;
- (unsigned long long)referenceRangesCount;
- (void)setCodings:(id)arg1;
- (void)setReferenceRanges:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
