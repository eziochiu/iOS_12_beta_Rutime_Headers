/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPauseTimerIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBPauseTimerIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { 
        unsigned int pauseMultiple : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    bool  _pauseMultiple;
    _INPBTimer * _targetTimer;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasPauseMultiple;
@property (nonatomic, readonly) bool hasTargetTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) bool pauseMultiple;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBTimer *targetTimer;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasIntentMetadata;
- (bool)hasPauseMultiple;
- (bool)hasTargetTimer;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)pauseMultiple;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setHasPauseMultiple:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setPauseMultiple:(bool)arg1;
- (void)setTargetTimer:(id)arg1;
- (id)targetTimer;
- (void)writeTo:(id)arg1;

@end
