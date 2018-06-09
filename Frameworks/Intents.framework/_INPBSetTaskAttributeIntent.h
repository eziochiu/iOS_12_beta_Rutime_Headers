/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSetTaskAttributeIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBSetTaskAttributeIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { 
        unsigned int status : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBSpatialEventTrigger * _spatialEventTrigger;
    int  _status;
    _INPBTask * _targetTask;
    _INPBTemporalEventTrigger * _temporalEventTrigger;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasSpatialEventTrigger;
@property (nonatomic) bool hasStatus;
@property (nonatomic, readonly) bool hasTargetTask;
@property (nonatomic, readonly) bool hasTemporalEventTrigger;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBSpatialEventTrigger *spatialEventTrigger;
@property (nonatomic) int status;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBTask *targetTask;
@property (nonatomic, retain) _INPBTemporalEventTrigger *temporalEventTrigger;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasIntentMetadata;
- (bool)hasSpatialEventTrigger;
- (bool)hasStatus;
- (bool)hasTargetTask;
- (bool)hasTemporalEventTrigger;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setSpatialEventTrigger:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTargetTask:(id)arg1;
- (void)setTemporalEventTrigger:(id)arg1;
- (id)spatialEventTrigger;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)targetTask;
- (id)temporalEventTrigger;
- (void)writeTo:(id)arg1;

@end
