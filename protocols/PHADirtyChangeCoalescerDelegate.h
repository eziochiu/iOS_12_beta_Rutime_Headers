/* made by EzioChiu.
 */

@protocol PHADirtyChangeCoalescerDelegate <NSObject>

@required

- (void)coalescer:(PHADirtyChangeCoalescer *)arg1 didCoalesce:(NSDictionary *)arg2;

@end
