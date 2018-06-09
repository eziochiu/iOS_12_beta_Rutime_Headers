/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFAutoFillQuickTypeBarView : UIView {
    long long  _barSizeClass;
    NSArray * _dynamicConstraints;
    UILayoutGuide * _emptyPredictionItemLayoutGuide;
    _SFAutoFillQuickTypeBarPredictionButton * _fillCredentialButton;
    UIView * _leadingDividerView;
    _SFAutoFillQuickTypeBarImageButton * _moreCredentialsButton;
    UIView * _trailingDividerView;
}

@property (nonatomic) long long barSizeClass;
@property (nonatomic, readonly) _SFAutoFillQuickTypeBarPredictionButton *fillCredentialButton;
@property (nonatomic, readonly) _SFAutoFillQuickTypeBarImageButton *moreCredentialsButton;

- (void).cxx_destruct;
- (id)_createAndConfigureDividerView;
- (long long)barSizeClass;
- (id)fillCredentialButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)moreCredentialsButton;
- (void)setBarSizeClass:(long long)arg1;
- (void)updateConstraints;

@end
