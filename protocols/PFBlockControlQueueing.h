/* made by EzioChiu.
 */

@protocol PFBlockControlQueueing <PFBlockControlCommon>

@required

- (bool)dequeue;
- (bool)enqueue;
- (bool)enqueueWithDelay:(unsigned long long)arg1;
- (bool)groupNotify:(NSObject<OS_dispatch_group> *)arg1;

@end
