/* made by EzioChiu.
 */

@protocol NTKWorldClockComplicationDisplay <NTKComplicationDisplay>

@required

- (void)setOverrideDate:(NSDate *)arg1;
- (void)setTimeZone:(NSTimeZone *)arg1;

@optional

- (void)endTimeTravelAnimated:(bool)arg1;
- (void)setLongCity:(NSString *)arg1;
- (void)setShortCity:(NSString *)arg1;
- (void)startTimeTravelAnimated:(bool)arg1;

@end
