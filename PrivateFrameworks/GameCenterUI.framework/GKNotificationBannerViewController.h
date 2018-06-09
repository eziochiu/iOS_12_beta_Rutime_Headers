/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKNotificationBannerViewController : UIViewController {
    bool  _bannerAnimating;
    GKNotificationBannerView * _bannerView;
    bool  _bannerVisible;
    NSLayoutConstraint * _bannerWidthConstraint;
    NSLayoutConstraint * _bannerYPositionConstraint;
}

@property (nonatomic) bool bannerAnimating;
@property (nonatomic, retain) GKNotificationBannerView *bannerView;
@property (nonatomic) bool bannerVisible;
@property (nonatomic, retain) NSLayoutConstraint *bannerWidthConstraint;
@property (nonatomic, retain) NSLayoutConstraint *bannerYPositionConstraint;

- (struct CGPoint { double x1; double x2; })_hiddenBannerPosition:(struct CGSize { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_visibleBannerCenterPosition:(struct CGSize { double x1; double x2; })arg1;
- (void)addBannerView:(id)arg1;
- (void)addConstraintsForBannerView;
- (void)addConstraintsForTVOSBannerView;
- (bool)bannerAnimating;
- (id)bannerView;
- (bool)bannerVisible;
- (id)bannerWidthConstraint;
- (double)bannerWidthForViewSize:(struct CGSize { double x1; double x2; })arg1;
- (id)bannerYPositionConstraint;
- (void)dealloc;
- (void)handleWindowPan:(id)arg1;
- (void)handleWindowSingleTap:(id)arg1;
- (void)hideBannerQuickly:(bool)arg1;
- (void)setBannerAnimating:(bool)arg1;
- (void)setBannerView:(id)arg1;
- (void)setBannerVisible:(bool)arg1;
- (void)setBannerWidthConstraint:(id)arg1;
- (void)setBannerYPositionConstraint:(id)arg1;
- (void)showCurrentBanner;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)windowPointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)windowTouchesEnded:(id)arg1 withEvent:(id)arg2;

@end
