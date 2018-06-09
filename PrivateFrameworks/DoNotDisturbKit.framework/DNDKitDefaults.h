/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbKit.framework/DoNotDisturbKit
 */

@interface DNDKitDefaults : BSAbstractDefaultDomain

@property (nonatomic) bool _shouldEnableDoNotDisturbPeaceFeatures;
@property (nonatomic) bool _shouldEnableExpandedControlCenterModule;
@property (nonatomic) bool _shouldEnableNotifications;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbKit.framework/DoNotDisturbKit

+ (id)standardDefaults;

- (void)_bindAndRegisterDefaults;
- (id)init;
- (bool)shouldEnableExpandedControlCenterModule;
- (bool)shouldEnableNotifications;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (bool)_shouldEnableDoNotDisturbPeaceFeatures;
- (bool)_shouldEnableExpandedControlCenterModule;
- (bool)_shouldEnableNotifications;
- (void)set_shouldEnableDoNotDisturbPeaceFeatures:(bool)arg1;
- (void)set_shouldEnableExpandedControlCenterModule:(bool)arg1;
- (void)set_shouldEnableNotifications:(bool)arg1;

@end
