/* made by EzioChiu.
 */

@protocol SVVideoQueueManager <NSObject>

@required

- (void)addModifier:(id <SVVideoQueueModifying>)arg1;
- (void)removeModifier:(id <SVVideoQueueModifying>)arg1;
- (void)replaceCurrentQueueWithQueue:(id <SVVideoQueue>)arg1;

@end
