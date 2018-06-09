/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGAccountsAdapter : NSObject {
    ACAccountStore * _accountStore;
    ACAccount * _cachedPrimaryICloudAccount;
    NSRecursiveLock * _primaryICloudAccountLock;
    NSSet * _usernamesCache;
}

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)accountsStoreDidChange:(id)arg1;
- (void)dealloc;
- (bool)hasCalendarAccount:(id)arg1;
- (id)init;
- (id)primaryICloudCalendarAccount;
- (void)refreshCacheFromAccountsService;
- (void)registerNotificationObserver;
- (void)removeNotificationObserver;

@end
