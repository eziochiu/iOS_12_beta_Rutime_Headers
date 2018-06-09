/* made by EzioChiu.
 */

@protocol APSConnectionDelegate <NSObject>

@required

- (void)connection:(APSConnection *)arg1 didReceivePublicToken:(NSData *)arg2;

@optional

- (void)connection:(APSConnection *)arg1 didChangeConnectedStatus:(bool)arg2;
- (void)connection:(APSConnection *)arg1 didFailToSendOutgoingMessage:(APSOutgoingMessage *)arg2 error:(NSError *)arg3;
- (void)connection:(APSConnection *)arg1 didReceiveIncomingMessage:(APSIncomingMessage *)arg2;
- (void)connection:(APSConnection *)arg1 didReceiveMessageForTopic:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)connection:(APSConnection *)arg1 didReceiveToken:(NSData *)arg2 forTopic:(NSString *)arg3 identifier:(NSString *)arg4;
- (void)connection:(APSConnection *)arg1 didSendOutgoingMessage:(APSOutgoingMessage *)arg2;
- (void)connectionDidReconnect:(APSConnection *)arg1;

@end
