/* made by EzioChiu.
 */

@protocol HAPAccessoryDelegate <NSObject>

@optional

- (void)accessoryDidBecomeReachable:(HAPAccessory *)arg1;
- (void)accessoryDidBecomeUnreachable:(HAPAccessory *)arg1;

@end
