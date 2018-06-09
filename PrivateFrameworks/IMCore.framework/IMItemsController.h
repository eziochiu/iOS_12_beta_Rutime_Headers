/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMItemsController : NSObject {
    unsigned long long  _capacity;
    struct __CFArray { } * _items;
}

@property (nonatomic) unsigned long long capacity;
@property (nonatomic, readonly) bool isMoreToLoad;

+ (id)_charactersToIgnoreWhenParsingTextContent;

- (id)_firstMessage;
- (void)_handleItem:(id)arg1;
- (unsigned long long)_indexOfItem:(id)arg1;
- (id)_initWithItems:(id)arg1;
- (id)_itemForGUID:(id)arg1;
- (id)_items;
- (void)_itemsDidChange:(id)arg1;
- (id)_lastFinishedMessage;
- (id)_lastIncomingFinishedMessage;
- (id)_lastIncomingFinishedMessageWithTextContent;
- (id)_lastIncomingMessage;
- (id)_lastMessage;
- (id)_lastRelatedIncomingFinishedMessageTextContentWithLimit:(long long)arg1;
- (id)_lastSentMessage;
- (id)_member:(id)arg1;
- (void)_removeAllItems;
- (void)_removeItem:(id)arg1;
- (void)_replaceItems:(id)arg1;
- (void)_replaceStaleTypingMessage;
- (void)_setSortID:(id)arg1;
- (bool)_trimIfNeeded;
- (id)_typingMessage;
- (void)assignSortIDsToItems:(id)arg1;
- (unsigned long long)capacity;
- (void)dealloc;
- (id)init;
- (bool)isMoreToLoad;
- (void)setCapacity:(unsigned long long)arg1;

@end
