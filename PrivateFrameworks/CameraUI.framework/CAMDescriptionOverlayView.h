/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMDescriptionOverlayView : UIView {
    UIButton * __acknowledgmentButton;
    UIVisualEffectView * __blurEffectView;
    double  __descriptionFontSizeMultiplier;
    UILabel * __descriptionLabel;
    double  __infoFontSizeMultiplier;
    UILabel * __infoLabel;
    CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView * __primaryVibrancyEffectView;
    UILabel * __titleLabel;
    UIView * __topBlackoutView;
    double  _contentTopInset;
    <CAMDescriptionOverlayViewDelegate> * _delegate;
    long long  _orientation;
}

@property (nonatomic, readonly) UIButton *_acknowledgmentButton;
@property (nonatomic, readonly) UIVisualEffectView *_blurEffectView;
@property (setter=_setDescriptionFontSizeMultiplier:, nonatomic) double _descriptionFontSizeMultiplier;
@property (nonatomic, readonly) UILabel *_descriptionLabel;
@property (setter=_setInfoFontSizeMultiplier:, nonatomic) double _infoFontSizeMultiplier;
@property (nonatomic, readonly) UILabel *_infoLabel;
@property (nonatomic, readonly) CAMPortraitModeDescriptionOverlayPrimaryVibrancyEffectView *_primaryVibrancyEffectView;
@property (nonatomic, readonly) UILabel *_titleLabel;
@property (nonatomic, retain) UIView *_topBlackoutView;
@property (getter=isAcknowledgmentButtonHighlighted, nonatomic) bool acknowledgmentButtonHighlighted;
@property (nonatomic) double contentTopInset;
@property (nonatomic) <CAMDescriptionOverlayViewDelegate> *delegate;
@property (nonatomic) long long orientation;

- (void).cxx_destruct;
- (id)_acknowledgmentButton;
- (id)_blurEffectView;
- (double)_descriptionFontSizeMultiplier;
- (id)_descriptionLabel;
- (void)_handleAcknowledgmentButtonTapped:(id)arg1;
- (double)_infoFontSizeMultiplier;
- (id)_infoLabel;
- (bool)_isVisible;
- (id)_primaryVibrancyEffectView;
- (void)_setDescriptionFontSizeMultiplier:(double)arg1;
- (void)_setInfoFontSizeMultiplier:(double)arg1;
- (id)_titleLabel;
- (id)_topBlackoutView;
- (void)_updateFontsUsingNarrowWidth:(bool)arg1;
- (void)_updateTextUsingNarrowWidth:(bool)arg1;
- (void)_updateTopBlackoutViewForVisible:(bool)arg1;
- (id)acknowledgmentTextUsingNarrowWidth:(bool)arg1;
- (double)additionalSpacing;
- (double)contentTopInset;
- (id)delegate;
- (id)descriptionTextUsingNarrowWidth:(bool)arg1;
- (id)infoTextUsingNarrowWidth:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAcknowledgmentButtonHighlighted;
- (void)layoutSubviews;
- (double)maxDescriptionTextWidthForNarrowWidth:(bool)arg1 isLandscape:(bool)arg2 usingFontSizeMultiplier:(double)arg3;
- (double)maxInfoTextWidthForNarrowWidth:(bool)arg1 isLandscape:(bool)arg2 usingFontSizeMultiplier:(double)arg3;
- (long long)orientation;
- (void)setAcknowledgmentButtonHighlighted:(bool)arg1;
- (void)setContentTopInset:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setVisible:(bool)arg1 animationDuration:(double)arg2 completion:(id /* block */)arg3;
- (void)set_topBlackoutView:(id)arg1;
- (id)titleTextUsingNarrowWidth:(bool)arg1;
- (void)updateToContentSize:(id)arg1;

@end
