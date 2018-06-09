/* made by EzioChiu.
 */

@protocol CalendarEventLoaderDelegate

@required

- (void)calendarEventLoader:(CalendarEventLoader *)arg1 occurrencesDidUpdateBetweenStart:(double)arg2 end:(double)arg3;

@end
