/* made by EzioChiu.
 */

@protocol _INPBSetTaskAttributeIntent <NSObject>

@required

- (int)StringAsStatus:(NSString *)arg1;
- (bool)hasIntentMetadata;
- (bool)hasSpatialEventTrigger;
- (bool)hasStatus;
- (bool)hasTargetTask;
- (bool)hasTemporalEventTrigger;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setHasStatus:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setSpatialEventTrigger:(_INPBSpatialEventTrigger *)arg1;
- (void)setStatus:(int)arg1;
- (void)setTargetTask:(_INPBTask *)arg1;
- (void)setTemporalEventTrigger:(_INPBTemporalEventTrigger *)arg1;
- (_INPBSpatialEventTrigger *)spatialEventTrigger;
- (int)status;
- (NSString *)statusAsString:(int)arg1;
- (_INPBTask *)targetTask;
- (_INPBTemporalEventTrigger *)temporalEventTrigger;

@end
