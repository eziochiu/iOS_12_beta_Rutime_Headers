/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UINotificationSettingsAction : BSAction {
    UNNotification * _cachedNotification;
    NSObject<OS_dispatch_semaphore> * _decodeSemaphore;
}

@property (nonatomic, readonly, copy) UNNotification *notification;

- (void).cxx_destruct;
- (long long)UIActionType;
- (void)_blockingWaitForDecodeSemaphore;
- (id)initWithNotification:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)notification;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
