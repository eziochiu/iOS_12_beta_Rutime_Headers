/* made by EzioChiu.
 */

@protocol NCNotificationDispatcherSourceDelegate <NSObject>

@required

- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequests:(NSSet *)arg2;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequests:(NSSet *)arg2 fromDestinations:(NSSet *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequestsFromDate:(NSDate *)arg2 toDate:(NSDate *)arg3 inSections:(NSSet *)arg4;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequestsInSections:(NSSet *)arg2;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setAllowsNotifications:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setDeliverQuietly:(bool)arg2 forSectionIdentifier:(NSString *)arg3 subSectionIdentifier:(NSString *)arg4;

@end
