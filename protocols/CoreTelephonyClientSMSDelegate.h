/* made by EzioChiu.
 */

@protocol CoreTelephonyClientSMSDelegate <NSObject>

@optional

- (void)mmsConfigurationChangedNotification:(CTXPCServiceSubscriptionContext *)arg1 changed:(bool)arg2;
- (void)mmsMessageReceived:(CTXPCServiceSubscriptionContext *)arg1 msgID:(long long)arg2;
- (void)mmsMessageReceivedDeferred:(CTXPCServiceSubscriptionContext *)arg1 msgID:(long long)arg2;
- (void)postMMSMessageSent:(CTXPCServiceSubscriptionContext *)arg1 success:(bool)arg2 messageID:(long long)arg3 err1:(long long)arg4 err2:(long long)arg5;
- (void)postMessageProgressNotification:(CTXPCServiceSubscriptionContext *)arg1 messageID:(long long)arg2 totalBytesSent:(long long)arg3 dataLength:(long long)arg4;
- (void)postMmsDataActivationFailed:(CTXPCServiceSubscriptionContext *)arg1 failureNotification:(CTMmsRegistrationFailureInfoType *)arg2;
- (void)postSMSMessageSent:(CTXPCServiceSubscriptionContext *)arg1 success:(bool)arg2 messageID:(long long)arg3 err1:(long long)arg4 err2:(long long)arg5;
- (void)postSUPLInitNotification:(CTXPCServiceSubscriptionContext *)arg1 body:(NSString *)arg2;
- (void)postSUPLInitNotification:(CTXPCServiceSubscriptionContext *)arg1 data:(NSData *)arg2;
- (void)smsMessageCellBroadcastReceived:(CTXPCServiceSubscriptionContext *)arg1 notificationDict:(NSDictionary *)arg2 additionalDict:(NSDictionary *)arg3;
- (void)smsMessageClass0Received:(CTXPCServiceSubscriptionContext *)arg1 body:(NSString *)arg2 address:(NSString *)arg3;
- (void)smsMessageReceived:(CTXPCServiceSubscriptionContext *)arg1 msgID:(long long)arg2;
- (void)smsMessageReceivedDeferred:(CTXPCServiceSubscriptionContext *)arg1 msgID:(long long)arg2;
- (void)smsMessageTestMessageReceived:(CTXPCServiceSubscriptionContext *)arg1 body:(NSString *)arg2 address:(NSString *)arg3;
- (void)smsReadyStateChanged:(CTXPCServiceSubscriptionContext *)arg1 info:(bool)arg2;

@end
