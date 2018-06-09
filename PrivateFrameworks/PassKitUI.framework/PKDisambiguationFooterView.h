/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDisambiguationFooterView : UIView {
    UIButton * _actionButton;
    double  _bottomPadding;
    UILabel * _descriptionLabel;
    UIButton * _secondaryActionButton;
    double  _secondaryActionTopPadding;
    double  _topPadding;
}

@property (nonatomic, readonly, retain) UIButton *actionButton;
@property (nonatomic) double bottomPadding;
@property (nonatomic, readonly, retain) UILabel *descriptionLabel;
@property (nonatomic, readonly, retain) UIButton *secondaryActionButton;
@property (nonatomic) double secondaryActionTopPadding;
@property (nonatomic) double topPadding;

- (void).cxx_destruct;
- (double)_recommendedSecondaryActionTopPaddingForTableView:(id)arg1;
- (id)actionButton;
- (double)bottomPadding;
- (void)dealloc;
- (id)descriptionLabel;
- (void)layoutSubviews;
- (id)secondaryActionButton;
- (double)secondaryActionTopPadding;
- (void)setBottomPadding:(double)arg1;
- (void)setSecondaryActionTopPadding:(double)arg1;
- (void)setTopPadding:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFitForTableView:(id)arg1;
- (double)topPadding;

@end
