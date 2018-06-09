/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
 */

@interface ICQDaemonAlert : NSObject {
    NSLock * _alertLock;
    NSObject<OS_dispatch_queue> * _alertQueue;
    NSObject<OS_dispatch_semaphore> * _alertSema;
    long long  _alertState;
    struct __CFUserNotification { } * _cfAlert;
    ICQDaemonOffer * _daemonOffer;
    bool  _handleActionsBeforeCallingCompletionHandler;
    bool  _showOnlyInSpringboard;
}

@property (nonatomic, readonly) ICQDaemonOffer *daemonOffer;
@property (nonatomic) bool handleActionsBeforeCallingCompletionHandler;
@property (nonatomic) bool showOnlyInSpringboard;

+ (void)dismissAlertsWithNotificationID:(id)arg1;
+ (bool)shouldShowForDaemonOffer:(id)arg1;

- (void).cxx_destruct;
- (void)_handleLink:(id)arg1;
- (id)daemonOffer;
- (void)dealloc;
- (void)dismissAlert;
- (bool)handleActionsBeforeCallingCompletionHandler;
- (id)init;
- (id)initWithDaemonOffer:(id)arg1;
- (void)setHandleActionsBeforeCallingCompletionHandler:(bool)arg1;
- (void)setShowOnlyInSpringboard:(bool)arg1;
- (bool)showAlertWithCompletion:(id /* block */)arg1;
- (bool)showOnlyInSpringboard;

@end
