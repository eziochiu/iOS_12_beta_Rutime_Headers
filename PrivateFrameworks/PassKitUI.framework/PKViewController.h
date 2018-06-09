/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKViewController : UIViewController {
    UIImage * _emptyImage;
    UIColor * _navigationBarBackgroundColor;
    UIImage * _navigationBarBackgroundImage;
    UIView * _navigationBarBackgroundView;
    UIColor * _navigationBarBleedColor;
    bool  _navigationBarPrepared;
    double  _navigationBarShadowAlpha;
    UIColor * _navigationBarTintColor;
    bool  _navigationBarWasTranslucent;
}

@property (nonatomic, retain) UIColor *navigationBarBleedColor;

- (void).cxx_destruct;
- (void)_prepareNavigationBarForBackground;
- (void)_restoreNavigationBar;
- (void)_updateNavigationBarBleedView;
- (void)loadView;
- (id)navigationBarBleedColor;
- (void)setNavigationBarBleedColor:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
