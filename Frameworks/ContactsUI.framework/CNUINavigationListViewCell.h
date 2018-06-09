/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUINavigationListViewCell : UITableViewCell {
    bool  _accessoryControlExpanded;
    UIImageView * _accessoryImageView;
    UILayoutGuide * _accessoryImageViewLayoutGuide;
    NSLayoutConstraint * _contentViewBottomAnchorConstraint;
    bool  _contentViewConstraintsLoaded;
    UILabel * _subtitleLabel;
    NSLayoutConstraint * _subtitleLabelFirstBaselineAnchorConstraint;
    NSLayoutConstraint * _subtitleLabelLeadingAnchorConstraint;
    NSLayoutConstraint * _subtitleLabelTrailingAnchorConstraint;
    UIImageView * _titleImageView;
    UILayoutGuide * _titleImageViewLayoutGuide;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleLabelFirstBaselineAnchorConstraint;
    NSLayoutConstraint * _titleLabelLeadingAnchorConstraint;
    NSLayoutConstraint * _titleLabelTrailingAnchorConstraint;
}

@property (getter=isAccessoryControlExpanded, nonatomic) bool accessoryControlExpanded;
@property (nonatomic, readonly) UIImageView *accessoryImageView;
@property (nonatomic, readonly) UILayoutGuide *accessoryImageViewLayoutGuide;
@property (nonatomic, retain) NSLayoutConstraint *contentViewBottomAnchorConstraint;
@property (getter=isContentViewConstraintsLoaded, nonatomic) bool contentViewConstraintsLoaded;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, retain) NSLayoutConstraint *subtitleLabelFirstBaselineAnchorConstraint;
@property (nonatomic, retain) NSLayoutConstraint *subtitleLabelLeadingAnchorConstraint;
@property (nonatomic, retain) NSLayoutConstraint *subtitleLabelTrailingAnchorConstraint;
@property (nonatomic, readonly) UIImageView *titleImageView;
@property (nonatomic, readonly) UILayoutGuide *titleImageViewLayoutGuide;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, retain) NSLayoutConstraint *titleLabelFirstBaselineAnchorConstraint;
@property (nonatomic, retain) NSLayoutConstraint *titleLabelLeadingAnchorConstraint;
@property (nonatomic, retain) NSLayoutConstraint *titleLabelTrailingAnchorConstraint;

+ (id)accessoryImageViewAccessibilityLabel;
+ (id)backgroundColor;
+ (double)contentViewBottomAnchorConstraintConstant;
+ (double)desiredContentWidthForTitle:(id)arg1 subTitle:(id)arg2;
+ (id)disclosureImage;
+ (id)expandedAccessoryImageViewAccessibilityLabel;
+ (id)expandedBackgroundColor;
+ (id)highlightedBackgroundColor;
+ (id)highlightedDisclosureImage;
+ (double)minimumContentHeight;
+ (id)reuseIdentifier;
+ (id)subtitleColor;
+ (id)subtitleFont;
+ (double)subtitleLabelFirstBaselineAnchorConstraintConstant;
+ (id)templateDisclosureImage;
+ (id)titleFont;
+ (double)titleLabelFirstBaselineAnchorConstraintConstant;

- (void).cxx_destruct;
- (id)accessoryImageView;
- (id)accessoryImageViewLayoutGuide;
- (id)contentViewBottomAnchorConstraint;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isAccessoryControlExpanded;
- (bool)isContentViewConstraintsLoaded;
- (void)loadContentView;
- (void)loadContentViewConstraints;
- (void)prepareForReuse;
- (void)setAccessoryControlExpanded:(bool)arg1;
- (void)setAccessoryControlExpanded:(bool)arg1 animated:(bool)arg2;
- (void)setContentViewBottomAnchorConstraint:(id)arg1;
- (void)setContentViewConstraintsLoaded:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setSubtitleLabelFirstBaselineAnchorConstraint:(id)arg1;
- (void)setSubtitleLabelLeadingAnchorConstraint:(id)arg1;
- (void)setSubtitleLabelTrailingAnchorConstraint:(id)arg1;
- (void)setTitleLabelFirstBaselineAnchorConstraint:(id)arg1;
- (void)setTitleLabelLeadingAnchorConstraint:(id)arg1;
- (void)setTitleLabelTrailingAnchorConstraint:(id)arg1;
- (void)setupAccessoryImageViewInView:(id)arg1;
- (id)subtitleLabel;
- (id)subtitleLabelFirstBaselineAnchorConstraint;
- (id)subtitleLabelLeadingAnchorConstraint;
- (id)subtitleLabelTrailingAnchorConstraint;
- (id)titleImageView;
- (id)titleImageViewLayoutGuide;
- (id)titleLabel;
- (id)titleLabelFirstBaselineAnchorConstraint;
- (id)titleLabelLeadingAnchorConstraint;
- (id)titleLabelTrailingAnchorConstraint;
- (void)updateConstraints;
- (void)updateConstraintsConstants;
- (void)updateFonts;
- (void)updateVisualStateAnimated:(bool)arg1;
- (void)viewWillMoveToSuperview:(id)arg1;

@end
