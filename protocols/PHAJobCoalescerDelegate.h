/* made by EzioChiu.
 */

@protocol PHAJobCoalescerDelegate <NSObject>

@required

- (void)jobCoalescer:(PHAJobCoalescer *)arg1 didProduceJob:(PHAWorkerJob *)arg2;

@end
