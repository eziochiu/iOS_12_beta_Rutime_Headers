/* made by EzioChiu.
 */

@protocol BKSAssertionClientProtocol <NSObject>

@required

- (NSObject<OS_dispatch_queue> *)assertionQueue;
- (void)registerClientHandler:(id <BKSAssertionClientHandler>)arg1 forAssertionIdentifier:(NSString *)arg2;
- (bool)sendCreateEvent:(BKSAssertionEvent *)arg1 error:(id*)arg2;
- (void)sendDestroyEvent:(BKSAssertionEvent *)arg1;
- (void)sendUpdateEvent:(BKSAssertionEvent *)arg1;
- (void)unregisterClientHandlerForAssertionIdentifier:(NSString *)arg1;

@end
