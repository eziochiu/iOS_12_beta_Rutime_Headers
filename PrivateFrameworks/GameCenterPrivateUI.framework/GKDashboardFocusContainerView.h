/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKDashboardFocusContainerView : UIView {
    UIView * _focusView;
}

@property (nonatomic) UIView *focusView;

- (bool)canBecomeFocused;
- (id)focusView;
- (id)preferredFocusEnvironments;
- (void)setFocusView:(id)arg1;

@end
