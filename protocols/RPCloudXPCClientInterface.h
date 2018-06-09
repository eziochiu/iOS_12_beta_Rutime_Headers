/* made by EzioChiu.
 */

@protocol RPCloudXPCClientInterface

@optional

- (void)xpcCloudReceivedFrameData:(NSData *)arg1 fromID:(NSString *)arg2;
- (void)xpcCloudReceivedSessionStartRequest:(NSDictionary *)arg1 fromID:(NSString *)arg2 multicastFromID:(NSString *)arg3;

@end
