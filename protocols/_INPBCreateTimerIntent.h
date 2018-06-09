/* made by EzioChiu.
 */

@protocol _INPBCreateTimerIntent <NSObject>

@required

- (double)duration;
- (bool)hasDuration;
- (bool)hasIntentMetadata;
- (bool)hasLabel;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBDataString *)label;
- (void)setDuration:(double)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setLabel:(_INPBDataString *)arg1;

@end
