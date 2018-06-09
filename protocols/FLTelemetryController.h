/* made by EzioChiu.
 */

@protocol FLTelemetryController <NSObject>

@required

- (void)captureActionForItem:(FLFollowUpItem *)arg1 withEvent:(unsigned long long)arg2 source:(unsigned long long)arg3;
- (void)captureActionForItemIdentifier:(NSString *)arg1 withEvent:(unsigned long long)arg2 source:(unsigned long long)arg3;
- (void)captureCurrentState:(NSArray *)arg1;
- (void)captureItemAddition:(FLFollowUpItem *)arg1;
- (void)captureItemRemoval:(FLFollowUpItem *)arg1;
- (void)captureItemView:(FLFollowUpItem *)arg1;

@end
