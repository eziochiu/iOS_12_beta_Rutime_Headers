/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSBrightnessSettingsDetail : NSObject <PSSettingsDetail>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)autoBrightnessEnabled;
+ (void)beginBrightnessAdjustmentTransaction;
+ (void)beginObservingExternalBrightnessChanges:(id /* block */)arg1 changedAction:(id /* block */)arg2;
+ (double)currentValue;
+ (bool)deviceSupportsAutoBrightness;
+ (void)endBrightnessAdjustmentTransaction;
+ (void)endObservingExternalBrightnessChanges;
+ (id)iconImage;
+ (void)incrementBrightnessValue:(double)arg1;
+ (double)incrementedBrightnessValue:(double)arg1;
+ (id)preferencesURL;
+ (void)setAutoBrightnessEnabled:(bool)arg1;
+ (void)setValue:(double)arg1;

@end
