/* made by EzioChiu.
 */

@protocol CalDAVCalendarPropertyRefreshDelegate <CoreDAVTaskGroupDelegate>

@required

- (void)calendarRefreshForPrincipal:(id <CalDAVPrincipal>)arg1 completedWithNewCTags:(NSDictionary *)arg2 newSyncTokens:(NSDictionary *)arg3 calendarHomeSyncToken:(NSString *)arg4 updatedCalendars:(NSSet *)arg5 error:(NSError *)arg6;

@end
