/* made by EzioChiu.
 */

@protocol _INPBSearchForTimersIntent <NSObject>

@required

- (int)StringAsState:(NSString *)arg1;
- (double)duration;
- (bool)hasDuration;
- (bool)hasIntentMetadata;
- (bool)hasLabel;
- (bool)hasState;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBDataString *)label;
- (void)setDuration:(double)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasState:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setLabel:(_INPBDataString *)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (NSString *)stateAsString:(int)arg1;

@end
