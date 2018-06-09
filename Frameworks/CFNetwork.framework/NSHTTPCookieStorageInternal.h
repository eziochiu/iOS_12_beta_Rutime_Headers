/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSHTTPCookieStorageInternal : NSObject {
    NSRecursiveLock * dataLock;
    bool  privateBrowsing;
    struct OpaqueCFHTTPCookieStorage { } * privateStorage;
    struct OpaqueCFHTTPCookieStorage { } * storage;
}

- (id)_initWithIdentifier:(id)arg1 private:(bool)arg2;
- (void)_syncCookies;
- (void)_syncCookiesWithCompletionBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)initInternalWithCFStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void)registerForPostingNotificationsWithContext:(id)arg1;

@end
