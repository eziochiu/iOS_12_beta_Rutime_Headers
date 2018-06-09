/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
 */

@interface WLWelcomeGroupViewController : UIViewController {
    UILayoutGuide * _hInsetLayoutGuide;
    NSLayoutConstraint * _hInsetLeftConstraint;
    UILayoutGuide * _hInsetProgressBarLayoutGuide;
    NSLayoutConstraint * _hInsetProgressBarLeftConstraint;
    NSLayoutConstraint * _hInsetProgressBarRightConstraint;
    NSLayoutConstraint * _hInsetRightConstraint;
    WLWelcomeViewControllerMetrics * _metrics;
}

@property (nonatomic, readonly) UILayoutGuide *hInsetLayoutGuide;
@property (nonatomic, readonly) UILayoutGuide *hInsetProgressBarLayoutGuide;
@property (nonatomic, readonly) WLWelcomeViewControllerMetrics *metrics;

- (void).cxx_destruct;
- (void)_updateLayoutGuideConstraints;
- (id)hInsetLayoutGuide;
- (id)hInsetProgressBarLayoutGuide;
- (id)initWithMetrics:(id)arg1;
- (id)loadTitleViewWithTitle:(id)arg1;
- (void)loadView;
- (id)metrics;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
