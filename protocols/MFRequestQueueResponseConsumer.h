/* made by EzioChiu.
 */

@protocol MFRequestQueueResponseConsumer

@required

- (void)handleResponse:(id)arg1 error:(MFError *)arg2;

@end
