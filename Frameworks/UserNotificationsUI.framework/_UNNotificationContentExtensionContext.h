/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotificationsUI.framework/UserNotificationsUI
 */

@interface _UNNotificationContentExtensionContext : NSExtensionContext {
    <_UNNotificationExtensionHostInterface> * _hostService;
    NSArray * _notificationActions;
}

@property (nonatomic) <_UNNotificationExtensionHostInterface> *hostService;
@property (nonatomic, copy) NSArray *notificationActions;

- (void).cxx_destruct;
- (void)dismissNotificationContentExtension;
- (id)hostService;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)mediaPlayingPaused;
- (void)mediaPlayingStarted;
- (id)notificationActions;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performNotificationDefaultAction;
- (void)requestDismiss;
- (void)setHostService:(id)arg1;
- (void)setNotificationActions:(id)arg1;

@end
