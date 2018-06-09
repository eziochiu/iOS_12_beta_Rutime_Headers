/* made by EzioChiu.
 */

@protocol _INPBSetTimerAttributeIntent <NSObject>

@required

- (bool)hasIntentMetadata;
- (bool)hasTargetTimer;
- (bool)hasToDuration;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setHasToDuration:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setTargetTimer:(_INPBTimer *)arg1;
- (void)setToDuration:(double)arg1;
- (_INPBTimer *)targetTimer;
- (double)toDuration;

@end
