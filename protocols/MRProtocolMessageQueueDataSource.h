/* made by EzioChiu.
 */

@protocol MRProtocolMessageQueueDataSource <NSObject>

@required

- (NSData *)messageQueue:(MRProtocolMessageQueue *)arg1 dataForMessage:(MRProtocolMessage *)arg2;

@end
