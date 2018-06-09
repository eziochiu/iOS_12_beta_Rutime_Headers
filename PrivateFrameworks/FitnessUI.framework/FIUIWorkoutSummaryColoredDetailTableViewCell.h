/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIWorkoutSummaryColoredDetailTableViewCell : UITableViewCell {
    UIButton * _customAccessoryButton;
    UIFont * _detailFont;
    UILabel * _detailLabel;
    NSString * _detailString;
    UIView * _dividerView;
    UILabel * _noDataLabel;
    UIView * _optionalButtonView;
    UILabel * _secondDetailLabel;
    UILabel * _secondTitleLabel;
    bool  _shouldForceLTRForDetailString;
    bool  _showBackgroundButton;
    UIFont * _suffixFont;
    NSString * _suffixString;
    UIColor * _textColor;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIButton *customAccessoryButton;
@property (nonatomic, retain) UIView *optionalButtonView;
@property (nonatomic) bool showBackgroundButton;

+ (double)rowHeightWithNoDataString:(id)arg1;
+ (double)rowHeightWithSecondMetric;

- (void).cxx_destruct;
- (void)_resizeFontsIfNeededToFitWidth:(double)arg1;
- (void)_setDefaultValueFontSizes;
- (void)_setupUI;
- (id)customAccessoryButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)optionalButtonView;
- (void)prepareForReuse;
- (void)setCustomAccessoryButton:(id)arg1;
- (void)setDetailString:(id)arg1 suffixString:(id)arg2 textColor:(id)arg3 shouldForceLTRForDetailString:(bool)arg4;
- (void)setLineHidden:(bool)arg1;
- (void)setNoDataString:(id)arg1 textColor:(id)arg2;
- (void)setOptionalButtonView:(id)arg1;
- (void)setSecondMetricTitle:(id)arg1 detailString:(id)arg2 detailColor:(id)arg3;
- (void)setShowBackgroundButton:(bool)arg1;
- (void)setTitleString:(id)arg1;
- (bool)showBackgroundButton;

@end
