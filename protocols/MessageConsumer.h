/* made by EzioChiu.
 */

@protocol MessageConsumer <QueryProgressMonitor>

@required

- (void)newMessagesAvailable:(NSArray *)arg1;

@end
