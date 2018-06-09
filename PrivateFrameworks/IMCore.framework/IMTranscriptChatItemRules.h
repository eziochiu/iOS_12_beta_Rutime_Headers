/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMTranscriptChatItemRules : NSObject <IMChatItemRules> {
    IMChat * _chat;
    NSMutableArray * _chatItems;
    NSArray * _items;
    IMChatItem * _nextStaleChatItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)testShouldShowReportSpamForChat:(id)arg1 items:(id)arg2;
+ (bool)testShouldShowSMSSpamForChat:(id)arg1 items:(id)arg2;

- (void).cxx_destruct;
- (id)_attributionChatItemForChatItem:(id)arg1;
- (id)_chatItems;
- (id)_chatItemsForItem:(id)arg1 previousItem:(id)arg2;
- (void)_didProcessChatItems:(id)arg1;
- (id)_effectControlForChatItem:(id)arg1;
- (id)_initWithChat:(id)arg1;
- (id)_itemWithChatItemsDeleted:(id)arg1 fromItem:(id)arg2;
- (id)_items;
- (id)_nextStaleChatItem;
- (void)_processChatItemsForAttribution:(id)arg1;
- (void)_processChatItemsForBreadcrumbs:(id)arg1;
- (void)_processChatItemsForReplayButton:(id)arg1;
- (void)_setItems:(id)arg1;
- (void)_setNextStaleChatItem:(id)arg1;
- (bool)_shouldDisplayAttributionInfo:(id)arg1;
- (bool)_shouldRegenerateChatItemsForItem:(id)arg1 previousItem:(id)arg2 oldPreviousItem:(id)arg3;
- (bool)_shouldReloadChatItem:(id)arg1 oldChatItem:(id)arg2;
- (bool)_shouldReloadChatItemWithAssociatedChatItems:(id)arg1 oldAssociatedChatItems:(id)arg2;
- (bool)_shouldShowEffectPlayButtonForMessage:(id)arg1;
- (id)chatItemForIMChatItem:(id)arg1;
- (bool)shouldShowExpressiveMessageTextAsText:(id)arg1;
- (bool)shouldShowRaiseMessageStatus;
- (id)testChatItems;

@end
