/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFMailAccountProxySource : NSObject {
    NSArray * _accountProxies;
    int  _lastSourceAccountManagementQueried;
    NSLock * _lock;
    int  _notifyToken;
    bool  _registeredForNotifications;
}

+ (id)defaultInstance;

- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_deregisterForNotifications_nts;
- (void)_registerForNotifications_nts;
- (void)_resetAccountsChanged:(bool)arg1;
- (id)accountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (void)dealloc;
- (id)init;

@end
