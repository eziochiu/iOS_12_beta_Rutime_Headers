/* made by EzioChiu.
 */

@protocol SXWebContentMessageHandler <NSObject>

@required

- (void)didReceiveMessage:(id <SXWebContentMessage>)arg1 securityOrigin:(id <SXWebContentMessageSecurityOrigin>)arg2;

@end
