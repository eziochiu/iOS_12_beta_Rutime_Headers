/* made by EzioChiu.
 */

@protocol _INPBTask <NSObject>

@required

- (int)StringAsStatus:(NSString *)arg1;
- (int)StringAsTaskType:(NSString *)arg1;
- (_INPBDateTime *)createdDateTime;
- (bool)hasCreatedDateTime;
- (bool)hasIdentifier;
- (bool)hasModifiedDateTime;
- (bool)hasSpatialEventTrigger;
- (bool)hasStatus;
- (bool)hasTaskType;
- (bool)hasTemporalEventTrigger;
- (bool)hasTitle;
- (NSString *)identifier;
- (_INPBDateTime *)modifiedDateTime;
- (void)setCreatedDateTime:(_INPBDateTime *)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTaskType:(bool)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setModifiedDateTime:(_INPBDateTime *)arg1;
- (void)setSpatialEventTrigger:(_INPBSpatialEventTrigger *)arg1;
- (void)setStatus:(int)arg1;
- (void)setTaskType:(int)arg1;
- (void)setTemporalEventTrigger:(_INPBTemporalEventTrigger *)arg1;
- (void)setTitle:(_INPBDataString *)arg1;
- (_INPBSpatialEventTrigger *)spatialEventTrigger;
- (int)status;
- (NSString *)statusAsString:(int)arg1;
- (int)taskType;
- (NSString *)taskTypeAsString:(int)arg1;
- (_INPBTemporalEventTrigger *)temporalEventTrigger;
- (_INPBDataString *)title;

@end
