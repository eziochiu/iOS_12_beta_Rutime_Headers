/* made by EzioChiu.
 */

@protocol MFQueueingStrategy <NSObject>

@required

- (void)dequeueObject:(id)arg1 buffer:(NSMutableArray *)arg2;
- (NSString *)descriptionType;
- (void)enqueueObject:(id)arg1 buffer:(NSMutableArray *)arg2;

@end
