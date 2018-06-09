/* made by EzioChiu.
 */

@protocol MCSessionPrivateDelegate <NSObject>

@required

- (void)session:(MCSession *)arg1 didFinishReceivingResourceWithName:(NSString *)arg2 fromPeer:(MCPeerID *)arg3 atURL:(NSURL *)arg4 withError:(NSError *)arg5 propagate:(bool*)arg6;
- (void)session:(MCSession *)arg1 didReceiveData:(NSData *)arg2 fromPeer:(MCPeerID *)arg3 propagate:(bool*)arg4;
- (void)session:(MCSession *)arg1 didReceiveStream:(NSInputStream *)arg2 withName:(NSString *)arg3 fromPeer:(MCPeerID *)arg4 propagate:(bool*)arg5;
- (void)session:(MCSession *)arg1 didStartReceivingResourceWithName:(NSString *)arg2 fromPeer:(MCPeerID *)arg3 withProgress:(NSProgress *)arg4 propagate:(bool*)arg5;
- (void)session:(MCSession *)arg1 peer:(MCPeerID *)arg2 didChangeState:(long long)arg3 propagate:(bool*)arg4;

@optional

- (void)session:(void *)arg1 didReceiveCertificate:(void *)arg2 fromPeer:(void *)arg3 certificateHandler:(void *)arg4 propagate:(void *)arg5; // needs 5 arg types, found 10: MCSession *, NSArray *, MCPeerID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*, bool*

@end
