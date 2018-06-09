/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIMutableApplicationSceneSettings : FBSMutableSceneSettings <UIApplicationSceneSettings>

@property (nonatomic) unsigned long long artworkSubtype;
@property (nonatomic) bool canShowAlerts;
@property (nonatomic) unsigned long long deactivationReasons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic) bool deviceOrientationEventsEnabled;
@property (nonatomic) bool forcedStatusBarForegroundTransparent;
@property (nonatomic, retain) NSNumber *forcedStatusBarStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic) double homeAffordanceOverlayAllowance;
@property (nonatomic) bool idleModeEnabled;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } peripheryInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsLandscapeLeft;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsLandscapeRight;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsPortrait;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsPortraitUpsideDown;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } statusBarAvoidanceFrame;
@property (nonatomic) bool statusBarDisabled;
@property (nonatomic) long long statusBarParts;
@property (nonatomic) int statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;
@property (nonatomic) double systemMinimumMargin;
@property (nonatomic) bool underLock;
@property (nonatomic) long long userInterfaceStyle;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (unsigned long long)artworkSubtype;
- (bool)canShowAlerts;
- (Class)canvasClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)deactivationReasons;
- (long long)deviceOrientation;
- (bool)deviceOrientationEventsEnabled;
- (bool)forcedStatusBarForegroundTransparent;
- (id)forcedStatusBarStyle;
- (double)homeAffordanceOverlayAllowance;
- (bool)idleModeEnabled;
- (bool)isUISubclass;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })peripheryInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsLandscapeLeft;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsLandscapeRight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsPortrait;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsPortraitUpsideDown;
- (void)setArtworkSubtype:(unsigned long long)arg1;
- (void)setCanShowAlerts:(bool)arg1;
- (void)setDeactivationReasons:(unsigned long long)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setDeviceOrientationEventsEnabled:(bool)arg1;
- (void)setForcedStatusBarForegroundTransparent:(bool)arg1;
- (void)setForcedStatusBarStyle:(id)arg1;
- (void)setHomeAffordanceOverlayAllowance:(double)arg1;
- (void)setIdleModeEnabled:(bool)arg1;
- (void)setPeripheryInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSafeAreaInsetsLandscapeLeft:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSafeAreaInsetsLandscapeRight:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSafeAreaInsetsPortrait:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSafeAreaInsetsPortraitUpsideDown:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setStatusBarAvoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStatusBarDisabled:(bool)arg1;
- (void)setStatusBarParts:(long long)arg1;
- (void)setStatusBarStyleOverridesToSuppress:(int)arg1;
- (void)setSystemMinimumMargin:(double)arg1;
- (void)setUnderLock:(bool)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarAvoidanceFrame;
- (bool)statusBarDisabled;
- (long long)statusBarParts;
- (int)statusBarStyleOverridesToSuppress;
- (double)systemMinimumMargin;
- (bool)underLock;
- (long long)userInterfaceStyle;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (bool)fb_isUnderLock;
- (bool)isEffectivelyBackgrounded;

@end
