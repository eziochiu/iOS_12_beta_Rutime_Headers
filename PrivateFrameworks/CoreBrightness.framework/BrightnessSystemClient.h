/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface BrightnessSystemClient : NSObject {
    NSObject<OS_os_log> * _logHandle;
    BrightnessSystemClientInternal * bsci;
}

- (id)copyPropertyForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isAlsSupported;
- (void)registerNotificationBlock:(id /* block */)arg1;
- (void)registerNotificationBlock:(id /* block */)arg1 forProperties:(id)arg2;
- (void)registerNotificationForKey:(id)arg1;
- (void)registerNotificationForKeys:(id)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)unregisterNotificationForKey:(id)arg1;
- (void)unregisterNotificationForKeys:(id)arg1;

@end
