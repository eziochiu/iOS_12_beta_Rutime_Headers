/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSetTimerAttributeIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBSetTimerAttributeIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { 
        unsigned int toDuration : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBTimer * _targetTimer;
    double  _toDuration;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasTargetTimer;
@property (nonatomic) bool hasToDuration;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBTimer *targetTimer;
@property (nonatomic) double toDuration;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasIntentMetadata;
- (bool)hasTargetTimer;
- (bool)hasToDuration;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setHasToDuration:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setTargetTimer:(id)arg1;
- (void)setToDuration:(double)arg1;
- (id)targetTimer;
- (double)toDuration;
- (void)writeTo:(id)arg1;

@end
