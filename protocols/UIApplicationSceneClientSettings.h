/* made by EzioChiu.
 */

@protocol UIApplicationSceneClientSettings <NSObject>

@required

- (NSArray *)audioCategoriesDisablingVolumeHUD;
- (long long)backgroundStyle;
- (double)brightnessLevel;
- (long long)compatibilityMode;
- (double)controlCenterAmbiguousActivationMargin;
- (long long)controlCenterRevealMode;
- (double)defaultPNGExpirationTime;
- (NSString *)defaultPNGName;
- (bool)defaultStatusBarHidden;
- (long long)defaultStatusBarStyle;
- (bool)deviceOrientationEventsEnabled;
- (bool)homeIndicatorAutoHidden;
- (bool)idleModeVisualEffectsEnabled;
- (bool)idleTimerDisabled;
- (long long)interfaceOrientation;
- (bool)interfaceOrientationChangesDisabled;
- (bool)isReachabilitySupported;
- (bool)isStatusBarForegroundTransparent;
- (long long)notificationCenterRevealMode;
- (long long)overscanCompensation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })primaryWindowOverlayInsets;
- (unsigned long long)proximityDetectionModes;
- (FBSDisplayMode *)requestedDisplayMode;
- (unsigned long long)screenEdgesDeferringSystemGestures;
- (unsigned int)statusBarContextID;
- (bool)statusBarHidden;
- (long long)statusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)userInterfaceStyle;
- (unsigned long long)visibleMiniAlertCount;
- (bool)wantsExclusiveForeground;
- (long long)whitePointAdaptivityStyle;

@end
