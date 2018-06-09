/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMAppLimitWarningUserNotificationContext : RMUserNotificationContext

@property (nonatomic, copy) NSString *limitDisplayName;

- (id)initWithIdentifier:(id)arg1;
- (id)limitDisplayName;
- (id)localizedUserNotificationBodyKey;
- (id)localizedUserNotificationTitleKey;
- (void)setLimitDisplayName:(id)arg1;

@end
