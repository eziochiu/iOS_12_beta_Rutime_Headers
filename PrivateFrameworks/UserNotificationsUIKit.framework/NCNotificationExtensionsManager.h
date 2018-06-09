/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationExtensionsManager : NSObject {
    NCNotificationExtensionCache * _extensionsCache;
    id  _extensionsDiscoveryToken;
}

@property (nonatomic, retain) NCNotificationExtensionCache *extensionsCache;
@property (nonatomic, retain) id extensionsDiscoveryToken;

+ (void)initialize;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_beginMatchingExtensions;
- (id)_matchingAttributes;
- (void)_stopMatchingExtensions;
- (id)extensionForNotificationRequest:(id)arg1;
- (id)extensionsCache;
- (id)extensionsDiscoveryToken;
- (id)init;
- (void)setExtensionsCache:(id)arg1;
- (void)setExtensionsDiscoveryToken:(id)arg1;

@end
