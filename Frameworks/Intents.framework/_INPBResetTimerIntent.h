/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBResetTimerIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBResetTimerIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { 
        unsigned int resetMultiple : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    bool  _resetMultiple;
    _INPBTimer * _targetTimer;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasResetMultiple;
@property (nonatomic, readonly) bool hasTargetTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) bool resetMultiple;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBTimer *targetTimer;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasIntentMetadata;
- (bool)hasResetMultiple;
- (bool)hasTargetTimer;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)resetMultiple;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setHasResetMultiple:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setResetMultiple:(bool)arg1;
- (void)setTargetTimer:(id)arg1;
- (id)targetTimer;
- (void)writeTo:(id)arg1;

@end
