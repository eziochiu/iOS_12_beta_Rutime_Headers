/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@interface APSOutgoingMessage : APSMessage {
    APSOutgoingMessageCheckpointTrace * _checkpointTrace;
}

@property (nonatomic, retain) APSOutgoingMessageCheckpointTrace *checkpointTrace;
@property (getter=isCritical, nonatomic) bool critical;
@property (nonatomic) unsigned long long payloadFormat;
@property (nonatomic) unsigned long long payloadLength;
@property (nonatomic, copy) NSString *senderTokenName;
@property (nonatomic) unsigned long long timeout;

- (unsigned long long)_effectiveSendTimeout;
- (id)checkpointTrace;
- (void)dealloc;
- (id)eagernessTimeoutTime;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasTimedOut;
- (id)initWithCoder:(id)arg1;
- (bool)isCritical;
- (bool)isEager;
- (unsigned long long)messageID;
- (id)originator;
- (unsigned long long)payloadFormat;
- (unsigned long long)payloadLength;
- (long long)priority;
- (id)rawTimeoutTime;
- (long long)sendInterface;
- (id)sendTimeoutTime;
- (id)senderTokenName;
- (id)sentTimestamp;
- (void)setCancelled:(bool)arg1;
- (void)setCheckpointTrace:(id)arg1;
- (void)setCritical:(bool)arg1;
- (void)setMessageID:(unsigned long long)arg1;
- (void)setOriginator:(id)arg1;
- (void)setPayloadFormat:(unsigned long long)arg1;
- (void)setPayloadLength:(unsigned long long)arg1;
- (void)setPriority:(long long)arg1;
- (void)setSendInterface:(long long)arg1;
- (void)setSenderTokenName:(id)arg1;
- (void)setSent:(bool)arg1;
- (void)setSentTimestamp:(id)arg1;
- (void)setTimedOut:(bool)arg1;
- (void)setTimeout:(unsigned long long)arg1;
- (void)setTimestamp:(id)arg1;
- (unsigned long long)timeout;
- (id)timestamp;
- (bool)wasCancelled;
- (bool)wasSent;

@end
