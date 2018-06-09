/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptNotificationObserver : NSObject {
    NSLock * _lock;
    struct __CFSet { } * _receivers;
}

- (void)_accessibilityPerformEscape;
- (void)_accessibilityPerformScrollDown;
- (void)_accessibilityPerformScrollLeft;
- (void)_accessibilityPerformScrollRight;
- (void)_accessibilityPerformScrollUp;
- (void)_audioSessionsChangedNotification:(id)arg1;
- (void)_beginObservingNotifications;
- (void)_dispatchEvent:(id)arg1 forName:(id)arg2;
- (void)_dispatchEventWithDictionary:(id)arg1 forName:(id)arg2;
- (void)_dispatchSafariEventWithDictionary:(id)arg1 andIdentifier:(id)arg2;
- (void)_endObservingNotifications;
- (void)_enumerateReceiversUsingBlock:(id /* block */)arg1;
- (void)_memoryWarningNotification:(id)arg1;
- (void)_networkTypeChangedNotification:(id)arg1;
- (void)_purchaseRequestDidSucceedNotification:(id)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;
- (id)_safariQueryDictionaryFromURL:(id)arg1;
- (void)_safariViewControllerDataUpdate:(id)arg1;
- (void)_softwareMapChangedNotification:(id)arg1;
- (void)_storeBagDidChangeNotification:(id)arg1;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (void)addEventReceiver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeEventReceiver:(id)arg1;

@end
