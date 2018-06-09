/* made by EzioChiu.
 */

@protocol UIApplicationSceneSettings <NSObject>

@required

- (unsigned long long)artworkSubtype;
- (bool)canShowAlerts;
- (unsigned long long)deactivationReasons;
- (long long)deviceOrientation;
- (bool)deviceOrientationEventsEnabled;
- (bool)forcedStatusBarForegroundTransparent;
- (NSNumber *)forcedStatusBarStyle;
- (double)homeAffordanceOverlayAllowance;
- (bool)idleModeEnabled;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })peripheryInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsLandscapeLeft;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsLandscapeRight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsPortrait;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsPortraitUpsideDown;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarAvoidanceFrame;
- (bool)statusBarDisabled;
- (long long)statusBarParts;
- (int)statusBarStyleOverridesToSuppress;
- (double)systemMinimumMargin;
- (bool)underLock;
- (long long)userInterfaceStyle;

@end
