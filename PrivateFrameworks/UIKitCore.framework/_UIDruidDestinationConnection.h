/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDruidDestinationConnection : NSObject <_DUIClientDestination, _DUIClientSessionDestination, _UIDruidDestinationConnection> {
    NSXPCConnection * _connection;
    id /* block */  _connectionBlock;
    id /* block */  _dragEndBlock;
    id /* block */  _dropPerformBlock;
    id /* block */  _handOffDroppedItemsBlock;
    id /* block */  _itemDetailProviderBlock;
    id /* block */  _itemImageProviderBlock;
    id /* block */  _itemUpdateBlock;
    id /* block */  _itemsAddedBlock;
    <_DUIServerSessionDestination> * _serverSession;
    unsigned int  _sessionIdentifier;
    long long  _state;
}

@property (nonatomic, copy) id /* block */ connectionBlock;
@property (nonatomic, copy) id /* block */ dragEndBlock;
@property (nonatomic, copy) id /* block */ dropPerformBlock;
@property (nonatomic, copy) id /* block */ handOffDroppedItemsBlock;
@property (nonatomic, copy) id /* block */ itemDetailProviderBlock;
@property (nonatomic, copy) id /* block */ itemImageProviderBlock;
@property (nonatomic, copy) id /* block */ itemUpdateBlock;
@property (nonatomic, copy) id /* block */ itemsAddedBlock;
@property (nonatomic, readonly) unsigned int sessionIdentifier;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (oneway void)addedItemsWithDetails:(id)arg1 itemCollection:(id)arg2;
- (id /* block */)connectionBlock;
- (void)dirtyItems:(id)arg1;
- (id /* block */)dragEndBlock;
- (oneway void)dragEnded;
- (id /* block */)dropPerformBlock;
- (void)enableKeyboardIfNeeded;
- (oneway void)handOffDroppedItems:(id)arg1 withFence:(id)arg2;
- (id /* block */)handOffDroppedItemsBlock;
- (id)initWithSessionIdentifier:(unsigned int)arg1;
- (id /* block */)itemDetailProviderBlock;
- (id /* block */)itemImageProviderBlock;
- (id /* block */)itemUpdateBlock;
- (id /* block */)itemsAddedBlock;
- (oneway void)performDropWithItemCollection:(id)arg1 dataProviderEndpoint:(id)arg2 visibleDroppedItems:(id)arg3 reply:(id /* block */)arg4;
- (oneway void)requestDetailForItemIndex:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)requestDropWithOperation:(unsigned long long)arg1;
- (oneway void)requestImageForItemIndex:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)sawDragEndEvent;
- (unsigned int)sessionIdentifier;
- (void)setConnectionBlock:(id /* block */)arg1;
- (void)setDragEndBlock:(id /* block */)arg1;
- (void)setDropPerformBlock:(id /* block */)arg1;
- (void)setHandOffDroppedItemsBlock:(id /* block */)arg1;
- (void)setItemDetailProviderBlock:(id /* block */)arg1;
- (void)setItemImageProviderBlock:(id /* block */)arg1;
- (void)setItemUpdateBlock:(id /* block */)arg1;
- (void)setItemsAddedBlock:(id /* block */)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)takePotentialDrop:(id)arg1;
- (oneway void)updateDetail:(id)arg1 forItemIndex:(unsigned long long)arg2;

@end
