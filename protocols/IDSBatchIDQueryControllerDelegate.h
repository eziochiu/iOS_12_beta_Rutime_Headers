/* made by EzioChiu.
 */

@protocol IDSBatchIDQueryControllerDelegate <NSObject>

@optional

- (void)idStatusUpdatedForDestinations:(NSDictionary *)arg1;
- (void)idStatusUpdatedForDestinations:(NSDictionary *)arg1 service:(NSString *)arg2;

@end
