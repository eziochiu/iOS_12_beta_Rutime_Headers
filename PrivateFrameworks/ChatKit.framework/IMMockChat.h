/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface IMMockChat : IMChat {
    IMHandle * _incomingHandle;
    IMMessage * _lastMockIMMessage;
    NSArray * _mockChatItems;
    unsigned long long  _mockUnreadMessageCount;
    IMHandle * _outgoingHandle;
}

@property (nonatomic, retain) IMHandle *incomingHandle;
@property (nonatomic, retain) IMMessage *lastMockIMMessage;
@property (nonatomic, retain) NSArray *mockChatItems;
@property (nonatomic) unsigned long long mockUnreadMessageCount;
@property (nonatomic, retain) IMHandle *outgoingHandle;

- (void).cxx_destruct;
- (id)_chatItemFromMockItemInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_messageFromMockItemInfo:(id)arg1;
- (void)appendMockItemWithInfo:(id)arg1;
- (id)chatItems;
- (bool)deleteAllHistory;
- (void)deleteChatItems:(id)arg1;
- (id)displayName;
- (id)incomingHandle;
- (id)init;
- (id)lastFinishedMessage;
- (id)lastFinishedMessageDate;
- (id)lastMessage;
- (id)lastMockIMMessage;
- (id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(bool)arg3;
- (unsigned long long)messageCount;
- (id)mockChatItems;
- (unsigned long long)mockUnreadMessageCount;
- (id)outgoingHandle;
- (id)participants;
- (id)recipient;
- (void)setIncomingHandle:(id)arg1;
- (void)setLastMockIMMessage:(id)arg1;
- (void)setMockChatItems:(id)arg1;
- (void)setMockUnreadMessageCount:(unsigned long long)arg1;
- (void)setOutgoingHandle:(id)arg1;
- (void)setupWithMockItemInfoArray:(id)arg1;
- (unsigned long long)unreadMessageCount;

@end
