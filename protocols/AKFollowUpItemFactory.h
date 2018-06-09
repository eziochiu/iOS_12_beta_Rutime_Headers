/* made by EzioChiu.
 */

@protocol AKFollowUpItemFactory <NSObject>

@required

- (bool)IsFollowUpItemNotificationForced:(FLFollowUpItem *)arg1;
- (NSArray *)itemIdentifiersRequiringNotificationClearFromPayload:(NSArray *)arg1;
- (NSArray *)itemsForAltDSID:(NSString *)arg1 fromIDMSPayload:(NSArray *)arg2;

@end
