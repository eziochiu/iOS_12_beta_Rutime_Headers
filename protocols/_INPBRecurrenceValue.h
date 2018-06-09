/* made by EzioChiu.
 */

@protocol _INPBRecurrenceValue <NSObject>

@required

- (int)StringAsFrequency:(NSString *)arg1;
- (int)frequency;
- (NSString *)frequencyAsString:(int)arg1;
- (bool)hasFrequency;
- (bool)hasInterval;
- (bool)hasOrdinal;
- (unsigned long long)interval;
- (long long)ordinal;
- (void)setFrequency:(int)arg1;
- (void)setHasFrequency:(bool)arg1;
- (void)setHasInterval:(bool)arg1;
- (void)setHasOrdinal:(bool)arg1;
- (void)setInterval:(unsigned long long)arg1;
- (void)setOrdinal:(long long)arg1;

@end
