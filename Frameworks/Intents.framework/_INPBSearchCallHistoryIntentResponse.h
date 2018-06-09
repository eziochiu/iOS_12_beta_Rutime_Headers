/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchCallHistoryIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBSearchCallHistoryIntentResponse> {
    INCodableAttribute * _associatedCodableAttribute;
    NSArray * _callRecords;
    NSString * _dateCreated;
    struct { }  _has;
    NSString * _status;
    NSString * _targetContact;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, copy) NSArray *callRecords;
@property (nonatomic, readonly) unsigned long long callRecordsCount;
@property (nonatomic, copy) NSString *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasDateCreated;
@property (nonatomic, readonly) bool hasStatus;
@property (nonatomic, readonly) bool hasTargetContact;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *status;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *targetContact;

+ (Class)callRecordsType;

- (void).cxx_destruct;
- (void)addCallRecords:(id)arg1;
- (id)associatedCodableAttribute;
- (id)callRecords;
- (id)callRecordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)callRecordsCount;
- (void)clearCallRecords;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateCreated;
- (id)dictionaryRepresentation;
- (bool)hasDateCreated;
- (bool)hasStatus;
- (bool)hasTargetContact;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setCallRecords:(id)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setTargetContact:(id)arg1;
- (id)status;
- (id)targetContact;
- (void)writeTo:(id)arg1;

@end
