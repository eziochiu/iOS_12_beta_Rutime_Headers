/* made by EzioChiu
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACNotificationRebroadcaster : NSObject

+ (id)sharedRebroadcaster;

- (void)_accountStoreDidChange:(id)arg1;
- (void)_beginObservingAccountStoreDidChangeNotifications;
- (void)_endObservingAccountStoreDidChangeNotifications;
- (void)dealloc;
- (id)init;

@end
