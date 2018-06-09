/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptSubscriptionStatusObserver : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSNumber * _lastKnownActiveAccountUniqueIdentifier;
    SUScriptSubscriptionStatusResponse * _lastKnownSubscriptionStatusResponse;
}

+ (id)sharedObserver;

- (void).cxx_destruct;
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;
- (void)_handleSubscriptionStatusDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end
