/* made by EzioChiu.
 */

@protocol ClientSessionReplyInterface

@required

- (void)sendMessageToClient:(NSDictionary *)arg1 timestamp:(double)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(NSDictionary *)arg5;

@end
