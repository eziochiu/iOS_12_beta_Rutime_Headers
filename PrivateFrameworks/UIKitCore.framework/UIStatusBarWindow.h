/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStatusBarWindow : UIWindow {
    UIStatusBarCorners * _bottomCorners;
    bool  _cornersHidden;
    long long  _orientation;
    UIStatusBar * _statusBar;
    UIStatusBarCorners * _topCorners;
    double  _topCornersOffset;
}

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromSceneReferenceSpaceToSceneSpaceWithOrientation:(long long)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultStatusBarSceneBounds;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultStatusBarSceneReferenceBounds;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultStatusBarSceneReferenceBoundsForOrientation:(long long)arg1;
+ (bool)_isSystemWindow;
+ (bool)isIncludedInClassicJail;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarWindowFrame;

- (void).cxx_destruct;
- (bool)_canActAsKeyWindowForScreen:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultStatusBarSceneBoundsForOrientation:(long long)arg1;
- (bool)_disableGroupOpacity;
- (bool)_isConstrainedByScreenJail;
- (bool)_isStatusBarWindow;
- (void)_rotate;
- (bool)_shouldAdjustSizeClassesAndResizeWindow;
- (bool)_shouldZoom;
- (void)_updateTransformLayerForClassicPresentation;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)orientation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setCornersHidden:(bool)arg1 animationParameters:(id)arg2;
- (void)setOrientation:(long long)arg1 animationParameters:(id)arg2;
- (void)setStatusBar:(id)arg1;
- (void)setTopCornerStyle:(int)arg1 topCornersOffset:(double)arg2 bottomCornerStyle:(int)arg3 animationParameters:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarWindowFrame;

@end
