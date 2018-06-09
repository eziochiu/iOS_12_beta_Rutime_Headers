/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDNotificationServer : HDSubserver <HDNotificationServerInterface> {
    HDNotificationManager * _notificationManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithParentServer:(id)arg1;
- (void)remote_badgeForDomain:(long long)arg1 completion:(id /* block */)arg2;
- (void)remote_postCompanionUserNotificationOfType:(long long)arg1 completion:(id /* block */)arg2;
- (void)remote_setBadge:(id)arg1 forDomain:(long long)arg2 completion:(id /* block */)arg3;

@end
