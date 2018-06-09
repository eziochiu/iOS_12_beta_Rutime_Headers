/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMediaPlayerInterface : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    SKUIMediaPlayerItemStatus * _onDeckItem;
    NSMapTable * _players;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

+ (bool)identifierMatches:(id)arg1 item:(id)arg2;
+ (bool)isRadioItemIdentifier:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_bufferingStateChangedNotification:(id)arg1;
- (void)_cancelOnDeckItem;
- (void)_createPeriodicTimeObserverIfNeeded:(id)arg1;
- (void)_currentItemDurationAvailableNotification:(id)arg1;
- (void)_destroyPeridicTimeObseverIfNeeded:(id)arg1;
- (void)_itemDidChange:(id)arg1 incomingItem:(id)arg2;
- (id)_itemFromNotification:(id)arg1;
- (void)_notifiyObserversOfItemChange:(id)arg1;
- (void)_notifyFinishedItem:(id)arg1;
- (void)_notifyObserversOfItemStateChange;
- (void)_onDeckTimedOut;
- (void)_playbackErrorNotification:(id)arg1;
- (id)_playerForNotification:(id)arg1;
- (void)_playerItemDidChangeNotification:(id)arg1;
- (void)_playerItemReady:(id)arg1;
- (void)_playerItemWillChangeNotification:(id)arg1;
- (void)_playerRateDidChangeNotification:(id)arg1;
- (void)_registerForNotificationsForCurrentItem:(id)arg1;
- (void)_setCurrentTimeIfPossible:(double)arg1 player:(id)arg2;
- (void)_startOnDeckTimer;
- (void)_unregisterForNotificationsForCurrentItem:(id)arg1;
- (void)_updateBufferingState:(unsigned long long)arg1 player:(id)arg2;
- (void)_updateDurationForPlayerItem:(id)arg1 withMPAVItem:(id)arg2;
- (void)_updateItemForPlayer:(id)arg1 currentTime:(double)arg2;
- (void)_updateTimeValuesUsingItemTime:(bool)arg1 player:(id)arg2 item:(id)arg3;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (bool)identifierIsOnDeck:(id)arg1;
- (id)init;
- (bool)isItemWithIdentifierActive:(id)arg1;
- (void)notifyWillChangeToItemWithItemIdentifer:(id)arg1;
- (id)playerForItemWithIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)togglePlayStateForItemWithIdentifier:(id)arg1;

@end
