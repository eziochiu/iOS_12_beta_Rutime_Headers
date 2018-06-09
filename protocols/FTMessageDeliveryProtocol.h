/* made by EzioChiu.
 */

@protocol FTMessageDeliveryProtocol <NSObject>

@optional

- (NSArray *)allMessages;
- (bool)busy;
- (void)cancelMessage:(IDSBaseMessage *)arg1;
- (IDSBaseMessage *)currentMessage;
- (bool)hasQueuedItems;
- (void)invalidate;
- (bool)logToRegistration;
- (unsigned long long)maxConcurrentMessages;
- (long long)maxLargeMessageSize;
- (long long)maxMessageSize;
- (void)networkStateChanged;
- (NSArray *)queuedMessages;
- (bool)retryInAirplaneMode;
- (bool)sendMessage:(IDSBaseMessage *)arg1;
- (void)setLogToRegistration:(bool)arg1;
- (void)setMaxConcurrentMessages:(unsigned long long)arg1;
- (void)setRetryInAirplaneMode:(bool)arg1;
- (void)setUserAgent:(NSString *)arg1;
- (NSString *)userAgent;

@end
