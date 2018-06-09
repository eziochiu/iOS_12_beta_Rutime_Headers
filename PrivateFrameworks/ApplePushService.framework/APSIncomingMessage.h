/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@interface APSIncomingMessage : APSMessage {
    APSIncomingMessageCheckpointTrace * _checkpointTrace;
}

@property (nonatomic, retain) APSIncomingMessageCheckpointTrace *checkpointTrace;
@property (getter=wasFromStorage, nonatomic) bool fromStorage;
@property (getter=wasLastMessageFromStorage, nonatomic) bool lastMessageFromStorage;
@property (nonatomic) long long priority;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, copy) NSData *token;
@property (getter=isTracingEnabled, nonatomic) bool tracingEnabled;
@property (nonatomic, copy) NSData *tracingUUID;

- (id)checkpointTrace;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isTracingEnabled;
- (long long)priority;
- (void)setCheckpointTrace:(id)arg1;
- (void)setFromStorage:(bool)arg1;
- (void)setLastMessageFromStorage:(bool)arg1;
- (void)setPriority:(long long)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setTracingEnabled:(bool)arg1;
- (void)setTracingUUID:(id)arg1;
- (id)timestamp;
- (id)token;
- (id)tracingUUID;
- (bool)wasFromStorage;
- (bool)wasLastMessageFromStorage;

@end
