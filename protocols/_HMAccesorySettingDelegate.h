/* made by EzioChiu.
 */

@protocol _HMAccesorySettingDelegate <NSObject>

@required

- (void)_settingDidUpdateReflected:(_HMAccessorySetting *)arg1;
- (void)_settingDidUpdateValue:(_HMAccessorySetting *)arg1;
- (void)_settingWillUpdateReflected:(_HMAccessorySetting *)arg1;
- (void)_settingWillUpdateValue:(_HMAccessorySetting *)arg1;

@optional

- (void)_setting:(_HMAccessorySetting *)arg1 didAddConstraint:(HMAccessorySettingConstraint *)arg2;
- (void)_setting:(_HMAccessorySetting *)arg1 didRemoveConstraint:(HMAccessorySettingConstraint *)arg2;

@end
