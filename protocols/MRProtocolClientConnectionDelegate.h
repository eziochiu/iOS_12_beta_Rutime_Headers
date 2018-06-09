/* made by EzioChiu.
 */

@protocol MRProtocolClientConnectionDelegate <NSObject>

@optional

- (void)clientConnection:(MRProtocolClientConnection *)arg1 didReceiveMessage:(MRProtocolMessage *)arg2;
- (void)clientDidDisconnect:(MRProtocolClientConnection *)arg1;

@end
