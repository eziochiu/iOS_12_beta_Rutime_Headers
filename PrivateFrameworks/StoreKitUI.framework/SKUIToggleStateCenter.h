/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIToggleStateCenter : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _itemStates;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
}

+ (id)defaultCenter;

- (void).cxx_destruct;
- (void)_accountStoreChangeNotification:(id)arg1;
- (void)_notifyObserversOfStateChanges:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)clearAll;
- (void)dealloc;
- (id)init;
- (id)itemForIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1;
- (bool)updateItem:(id)arg1;

@end
