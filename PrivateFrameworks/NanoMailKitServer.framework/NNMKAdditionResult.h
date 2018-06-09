/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKAdditionResult : NSObject {
    NSMutableArray * _messageIdsWithDefaultPriority;
    NSMutableArray * _messageIdsWithNotificationPriority;
    NNMKProtoMessageAdditions * _protoMessagesWithDefaultPriority;
    NNMKProtoMessageAdditions * _protoMessagesWithNotificationPriority;
    bool  _receivedOldMessages;
    unsigned long long  _resendInterval;
}

@property (nonatomic, retain) NSMutableArray *messageIdsWithDefaultPriority;
@property (nonatomic, retain) NSMutableArray *messageIdsWithNotificationPriority;
@property (nonatomic, retain) NNMKProtoMessageAdditions *protoMessagesWithDefaultPriority;
@property (nonatomic, retain) NNMKProtoMessageAdditions *protoMessagesWithNotificationPriority;
@property (nonatomic) bool receivedOldMessages;
@property (nonatomic) unsigned long long resendInterval;

- (void).cxx_destruct;
- (id)messageIdsWithDefaultPriority;
- (id)messageIdsWithNotificationPriority;
- (id)protoMessagesWithDefaultPriority;
- (id)protoMessagesWithNotificationPriority;
- (bool)receivedOldMessages;
- (unsigned long long)resendInterval;
- (void)setMessageIdsWithDefaultPriority:(id)arg1;
- (void)setMessageIdsWithNotificationPriority:(id)arg1;
- (void)setProtoMessagesWithDefaultPriority:(id)arg1;
- (void)setProtoMessagesWithNotificationPriority:(id)arg1;
- (void)setReceivedOldMessages:(bool)arg1;
- (void)setResendInterval:(unsigned long long)arg1;

@end
