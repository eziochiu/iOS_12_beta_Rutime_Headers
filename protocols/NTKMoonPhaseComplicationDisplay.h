/* made by EzioChiu.
 */

@protocol NTKMoonPhaseComplicationDisplay <NTKComplicationDisplay>

@optional

- (void)setLocked:(bool)arg1;
- (void)setMoonEvent:(long long)arg1 date:(NSDate *)arg2;
- (void)setPaused:(bool)arg1;
- (void)setPhaseName:(NSString *)arg1;
- (void)setPhaseNumber:(unsigned long long)arg1 hemisphere:(long long)arg2;

@end
