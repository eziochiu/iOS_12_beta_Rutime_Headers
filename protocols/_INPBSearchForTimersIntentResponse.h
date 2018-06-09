/* made by EzioChiu.
 */

@protocol _INPBSearchForTimersIntentResponse <NSObject>

@required

+ (Class)timersType;

- (void)addTimers:(_INPBTimer *)arg1;
- (void)clearTimers;
- (void)setTimers:(NSArray *)arg1;
- (NSArray *)timers;
- (_INPBTimer *)timersAtIndex:(unsigned long long)arg1;
- (unsigned long long)timersCount;

@end
