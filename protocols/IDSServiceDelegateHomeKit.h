/* made by EzioChiu.
 */

@protocol IDSServiceDelegateHomeKit <IDSServiceDelegate>

@optional

- (void)homeKitIDExpired:(IDSService *)arg1;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingAccessoryData:(NSData *)arg3 fromAccessoryID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
- (void)service:(IDSService *)arg1 account:(IDSAccount *)arg2 incomingAccessoryReportMessage:(NSString *)arg3 controllerID:(NSString *)arg4 accessoryID:(NSString *)arg5 context:(IDSMessageContext *)arg6;
- (void)service:(IDSService *)arg1 maxHomeKitPayloadSizeChanged:(long long)arg2;

@end
