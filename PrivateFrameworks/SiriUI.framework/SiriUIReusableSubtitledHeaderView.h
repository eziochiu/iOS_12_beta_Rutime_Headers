/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIReusableSubtitledHeaderView : SiriUIReusableHeaderView {
    NSAttributedString * _attributedSubtitleText;
    UILabel * _subtitleLabel;
}

@property (nonatomic, copy) NSAttributedString *attributedSubtitleText;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, copy) NSString *subtitleText;

+ (double)defaultHeight;

- (void).cxx_destruct;
- (void)_configureSubTitleLabelForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)attributedSubtitleText;
- (double)desiredHeightForWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAttributedSubtitleText:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (id)subtitleLabel;
- (id)subtitleText;

@end
