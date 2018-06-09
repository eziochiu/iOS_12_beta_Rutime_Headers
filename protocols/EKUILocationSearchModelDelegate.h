/* made by EzioChiu.
 */

@protocol EKUILocationSearchModelDelegate

@required

- (EKCalendarItem *)calendarItemForSearchModel:(EKUILocationSearchModel *)arg1;
- (void)conferenceRoomSearchUpdated:(EKUILocationSearchModel *)arg1;
- (void)contactsSearchUpdated:(EKUILocationSearchModel *)arg1;
- (void)currentLocationUpdated:(EKUILocationSearchModel *)arg1;
- (void)eventsSearchUpdated:(EKUILocationSearchModel *)arg1;
- (void)frequentsSearchUpdated:(EKUILocationSearchModel *)arg1;
- (void)locationSearchModel:(EKUILocationSearchModel *)arg1 selectedLocation:(EKStructuredLocation *)arg2 withError:(NSError *)arg3;
- (void)mapSearchUpdated:(EKUILocationSearchModel *)arg1;
- (void)recentsSearchUpdated:(EKUILocationSearchModel *)arg1;

@end
