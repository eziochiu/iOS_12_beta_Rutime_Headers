/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCallRecordValue : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBCallRecordValue> {
    INCodableAttribute * _associatedCodableAttribute;
    int  _callCapability;
    _INPBCallMetrics * _callMetrics;
    int  _callType;
    _INPBContactValue * _caller;
    _INPBDateTime * _dateCreated;
    struct { 
        unsigned int callCapability : 1; 
        unsigned int callType : 1; 
        unsigned int unseen : 1; 
    }  _has;
    NSString * _identifier;
    bool  _unseen;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic) int callCapability;
@property (nonatomic, retain) _INPBCallMetrics *callMetrics;
@property (nonatomic) int callType;
@property (nonatomic, retain) _INPBContactValue *caller;
@property (nonatomic, retain) _INPBDateTime *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCallCapability;
@property (nonatomic, readonly) bool hasCallMetrics;
@property (nonatomic) bool hasCallType;
@property (nonatomic, readonly) bool hasCaller;
@property (nonatomic, readonly) bool hasDateCreated;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasUnseen;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic) bool unseen;

- (void).cxx_destruct;
- (int)StringAsCallCapability:(id)arg1;
- (int)StringAsCallType:(id)arg1;
- (id)associatedCodableAttribute;
- (int)callCapability;
- (id)callCapabilityAsString:(int)arg1;
- (id)callMetrics;
- (int)callType;
- (id)callTypeAsString:(int)arg1;
- (id)caller;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateCreated;
- (id)dictionaryRepresentation;
- (bool)hasCallCapability;
- (bool)hasCallMetrics;
- (bool)hasCallType;
- (bool)hasCaller;
- (bool)hasDateCreated;
- (bool)hasIdentifier;
- (bool)hasUnseen;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setCallCapability:(int)arg1;
- (void)setCallMetrics:(id)arg1;
- (void)setCallType:(int)arg1;
- (void)setCaller:(id)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setHasCallCapability:(bool)arg1;
- (void)setHasCallType:(bool)arg1;
- (void)setHasUnseen:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setUnseen:(bool)arg1;
- (bool)unseen;
- (void)writeTo:(id)arg1;

@end
