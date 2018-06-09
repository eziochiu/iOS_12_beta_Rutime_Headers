/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegSigninLearnMoreView : UIView <PSHeaderFooterView> {
    UIView * _authKitSignInView;
    CNFRegSplashSignInController * _controller;
    UIButton * _learnMoreButton;
    long long  _serviceType;
    UILabel * _signingInLabel;
    UIActivityIndicatorView * _signingInSpinner;
    PSSpecifier * _specifier;
    UIImageView * _splashImageView;
    UILabel * _titleLabel;
    UILabel * _verbiageLabel;
}

@property (nonatomic) CNFRegSplashSignInController *controller;
@property (nonatomic) long long serviceType;

- (void).cxx_destruct;
- (void)_learnMorePressed:(id)arg1;
- (id)_splashImage;
- (id)controller;
- (id)initWithSpecifier:(id)arg1;
- (void)layoutSubviews;
- (id)learnMoreButton;
- (double)preferredHeightForWidth:(double)arg1;
- (long long)serviceType;
- (void)setAuthKitSignInView:(id)arg1;
- (void)setController:(id)arg1;
- (void)setServiceType:(long long)arg1;
- (void)setSigningIn:(bool)arg1;
- (id)signingInLabel;
- (id)signingInSpinner;
- (id)splashImageView;
- (id)titleLabel;
- (id)verbiageLabel;

@end
