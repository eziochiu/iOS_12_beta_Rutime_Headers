/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFMailMessageLibraryStatistics : NSObject {
    double  _duration;
    unsigned long long  _mailboxesNeedingReconcilication;
    unsigned long long  _messageData;
    unsigned long long  _messageDataDeleted;
    unsigned long long  _messages;
    unsigned long long  _messagesDeleted;
    unsigned long long  _messagesMarkedAsJournaled;
    bool  _protectedDataAvailable;
    unsigned long long  _protectedMessageData;
    unsigned long long  _protectedMessages;
    double  _start;
}

@property (nonatomic) double duration;
@property (nonatomic) unsigned long long mailboxesNeedingReconcilication;
@property (nonatomic) unsigned long long messageData;
@property (nonatomic) unsigned long long messageDataDeleted;
@property (nonatomic) unsigned long long messages;
@property (nonatomic) unsigned long long messagesDeleted;
@property (nonatomic) unsigned long long messagesMarkedAsJournaled;
@property (nonatomic) bool protectedDataAvailable;
@property (nonatomic) unsigned long long protectedMessageData;
@property (nonatomic) unsigned long long protectedMessages;
@property (nonatomic) double start;

- (double)duration;
- (unsigned long long)mailboxesNeedingReconcilication;
- (unsigned long long)messageData;
- (unsigned long long)messageDataDeleted;
- (unsigned long long)messages;
- (unsigned long long)messagesDeleted;
- (unsigned long long)messagesMarkedAsJournaled;
- (bool)protectedDataAvailable;
- (unsigned long long)protectedMessageData;
- (unsigned long long)protectedMessages;
- (void)setDuration:(double)arg1;
- (void)setMailboxesNeedingReconcilication:(unsigned long long)arg1;
- (void)setMessageData:(unsigned long long)arg1;
- (void)setMessageDataDeleted:(unsigned long long)arg1;
- (void)setMessages:(unsigned long long)arg1;
- (void)setMessagesDeleted:(unsigned long long)arg1;
- (void)setMessagesMarkedAsJournaled:(unsigned long long)arg1;
- (void)setProtectedDataAvailable:(bool)arg1;
- (void)setProtectedMessageData:(unsigned long long)arg1;
- (void)setProtectedMessages:(unsigned long long)arg1;
- (void)setStart:(double)arg1;
- (double)start;

@end
