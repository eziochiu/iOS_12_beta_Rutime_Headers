/* made by EzioChiu.
 */

@protocol SXWebContentMessageHandlerManager <NSObject>

@required

- (void)addMessageHandler:(id <SXWebContentMessageHandler>)arg1 name:(NSString *)arg2;

@end
