/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMAskForTimeRequestReceivedUserNotificationContext : RMUserNotificationContext

+ (id)supportedCategories;

- (id)categoryIdentifier;
- (id)initWithAskForTimeRequestIdentifier:(id)arg1 childName:(id)arg2 requestedResourceName:(id)arg3;
- (id)localizedUserNotificationBodyKey;
- (id)localizedUserNotificationTitleKey;

@end
