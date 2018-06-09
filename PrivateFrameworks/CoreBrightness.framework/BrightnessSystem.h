/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface BrightnessSystem : NSObject {
    BrightnessSystemInternal * bsi;
}

- (id)copyPropertyForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isAlsSupported;
- (void)registerNotificationBlock:(id /* block */)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;

@end
