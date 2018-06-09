/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDeleteTimerIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBDeleteTimerIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    bool  _deleteMultiple;
    struct { 
        unsigned int deleteMultiple : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBTimer * _targetTimer;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deleteMultiple;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasDeleteMultiple;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasTargetTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBTimer *targetTimer;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deleteMultiple;
- (id)dictionaryRepresentation;
- (bool)hasDeleteMultiple;
- (bool)hasIntentMetadata;
- (bool)hasTargetTimer;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setDeleteMultiple:(bool)arg1;
- (void)setHasDeleteMultiple:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setTargetTimer:(id)arg1;
- (id)targetTimer;
- (void)writeTo:(id)arg1;

@end
