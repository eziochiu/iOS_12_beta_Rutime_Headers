/* made by EzioChiu.
 */

@protocol MPCQueueBehaviorManaging <MPQueueBehaviorManaging>

@optional

- (bool)preventsHardQueueModificationsForItem:(MPAVItem *)arg1;
- (bool)supportsAddToQueue;

@end
