/* made by EzioChiu.
 */

@protocol _INPBAddTasksIntent <NSObject>

@required

+ (Class)taskTitlesType;

- (void)addTaskTitles:(_INPBDataString *)arg1;
- (void)clearTaskTitles;
- (bool)hasIntentMetadata;
- (bool)hasSpatialEventTrigger;
- (bool)hasTargetTaskList;
- (bool)hasTemporalEventTrigger;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setSpatialEventTrigger:(_INPBSpatialEventTrigger *)arg1;
- (void)setTargetTaskList:(_INPBTaskList *)arg1;
- (void)setTaskTitles:(NSArray *)arg1;
- (void)setTemporalEventTrigger:(_INPBTemporalEventTrigger *)arg1;
- (_INPBSpatialEventTrigger *)spatialEventTrigger;
- (_INPBTaskList *)targetTaskList;
- (NSArray *)taskTitles;
- (_INPBDataString *)taskTitlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)taskTitlesCount;
- (_INPBTemporalEventTrigger *)temporalEventTrigger;

@end
