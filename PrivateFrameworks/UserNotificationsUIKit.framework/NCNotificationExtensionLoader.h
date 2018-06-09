/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationExtensionLoader : NSObject {
    NSMutableDictionary * _loadedHostViewControllerCache;
}

@property (nonatomic, retain) NSMutableDictionary *loadedHostViewControllerCache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_loadViewControllerForExtension:(id)arg1 notificationRequest:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)_loadViewControllerForNotificationRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)clearCacheForNotificationRequest:(id)arg1;
- (id)init;
- (void)loadViewControllerForNotificationRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)loadedHostViewControllerCache;
- (void)setLoadedHostViewControllerCache:(id)arg1;

@end
