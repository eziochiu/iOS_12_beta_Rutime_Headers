/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEUserNotification : NSObject {
    id /* block */  _callback;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _isBanner;
    id  _notification;
    id  _notificationSource;
}

@property (nonatomic, copy) id /* block */ callback;
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property bool isBanner;
@property (retain) id notification;
@property (retain) id notificationSource;

+ (id)createLAContext;
+ (Class)getUIDeviceClass;
+ (void)promptForLocalAuthenticationWithReason:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)shouldPromptForLocalAuthentication;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)callbackQueue;
- (void)cancel;
- (void)executeOnMainLoop:(id /* block */)arg1;
- (id)initAddConfigurationsForApp:(id)arg1 warningHeader:(id)arg2 warning:(id)arg3;
- (id)initAuthenticationWithHeader:(id)arg1 options:(id)arg2 flags:(unsigned long long)arg3;
- (id)initBannerWithHeader:(id)arg1 message:(id)arg2 alternateMessage:(id)arg3 defaultMessage:(id)arg4;
- (id)initObsoleteAlertWithAppName:(id)arg1;
- (bool)isBanner;
- (id)notification;
- (id)notificationSource;
- (bool)postNotificationWithCallbackQueue:(id)arg1 callbackHandler:(id /* block */)arg2;
- (void)setCallback:(id /* block */)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setIsBanner:(bool)arg1;
- (void)setNotification:(id)arg1;
- (void)setNotificationSource:(id)arg1;

@end
