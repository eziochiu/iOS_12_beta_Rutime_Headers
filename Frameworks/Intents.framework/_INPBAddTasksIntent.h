/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBAddTasksIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBAddTasksIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBSpatialEventTrigger * _spatialEventTrigger;
    _INPBTaskList * _targetTaskList;
    NSArray * _taskTitles;
    _INPBTemporalEventTrigger * _temporalEventTrigger;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasSpatialEventTrigger;
@property (nonatomic, readonly) bool hasTargetTaskList;
@property (nonatomic, readonly) bool hasTemporalEventTrigger;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBSpatialEventTrigger *spatialEventTrigger;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBTaskList *targetTaskList;
@property (nonatomic, copy) NSArray *taskTitles;
@property (nonatomic, readonly) unsigned long long taskTitlesCount;
@property (nonatomic, retain) _INPBTemporalEventTrigger *temporalEventTrigger;

+ (Class)taskTitlesType;

- (void).cxx_destruct;
- (void)addTaskTitles:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearTaskTitles;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasIntentMetadata;
- (bool)hasSpatialEventTrigger;
- (bool)hasTargetTaskList;
- (bool)hasTemporalEventTrigger;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setSpatialEventTrigger:(id)arg1;
- (void)setTargetTaskList:(id)arg1;
- (void)setTaskTitles:(id)arg1;
- (void)setTemporalEventTrigger:(id)arg1;
- (id)spatialEventTrigger;
- (id)targetTaskList;
- (id)taskTitles;
- (id)taskTitlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)taskTitlesCount;
- (id)temporalEventTrigger;
- (void)writeTo:(id)arg1;

@end
