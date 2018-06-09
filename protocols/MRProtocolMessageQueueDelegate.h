/* made by EzioChiu.
 */

@protocol MRProtocolMessageQueueDelegate <NSObject>

@required

- (void)messageQueue:(MRProtocolMessageQueue *)arg1 didPurgeMessage:(MRProtocolMessage *)arg2;
- (void)messageQueue:(MRProtocolMessageQueue *)arg1 didSendMessage:(MRProtocolMessage *)arg2;
- (unsigned long long)messageQueue:(MRProtocolMessageQueue *)arg1 processData:(NSData *)arg2 atReadPosition:(long long)arg3;

@end
