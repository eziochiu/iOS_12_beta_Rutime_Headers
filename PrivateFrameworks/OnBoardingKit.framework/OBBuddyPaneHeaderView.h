/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBBuddyPaneHeaderView : UIView {
    UIView * _bottomLine;
    double  _customTopPadding;
    UILabel * _detailTextLabel;
    double  _flexibleHeight;
    UIImage * _icon;
    bool  _iconInheritsTint;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
    UIImageView * _iconView;
    UIButton * _linkButton;
    id /* block */  _linkHandler;
    UILabel * _subLabel;
    UILabel * _textLabel;
    bool  _textLabelAlignedByLastBaseline;
    bool  _useMinimumTopPadding;
}

@property (nonatomic, retain) UIColor *bottomLineColor;
@property (nonatomic) double customTopPadding;
@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (nonatomic) double flexibleHeight;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) NSString *iconAccessibilityLabel;
@property (nonatomic) bool iconInheritsTint;
@property (nonatomic) struct CGSize { double x1; double x2; } iconSize;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, readonly) UILabel *subLabel;
@property (nonatomic, readonly) UILabel *textLabel;
@property (getter=isTextLabelAlignedByLastBaseline, nonatomic) bool textLabelAlignedByLastBaseline;
@property (nonatomic) bool useMinimumTopPadding;

- (void).cxx_destruct;
- (double)_labelsAndLinksBaselineOffsetForView:(id)arg1;
- (void)_linkButtonPressed;
- (id)bottomLineColor;
- (double)customTopPadding;
- (id)detailTextLabel;
- (double)flexibleHeight;
- (double)heightForWidth:(double)arg1 inView:(id)arg2;
- (id)icon;
- (id)iconAccessibilityLabel;
- (bool)iconInheritsTint;
- (struct CGSize { double x1; double x2; })iconSize;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTextLabelAlignedByLastBaseline;
- (void)layoutSubviews;
- (void)setBottomLineColor:(id)arg1;
- (void)setCustomTopPadding:(double)arg1;
- (void)setFlexibleHeight:(double)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconAccessibilityLabel:(id)arg1;
- (void)setIconInheritsTint:(bool)arg1;
- (void)setIconSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIconView:(id)arg1;
- (void)setLinkText:(id)arg1 handler:(id /* block */)arg2;
- (void)setTextLabelAlignedByLastBaseline:(bool)arg1;
- (void)setTitleText:(id)arg1;
- (void)setUseMinimumTopPadding:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subLabel;
- (id)textLabel;
- (void)tintColorDidChange;
- (bool)useMinimumTopPadding;

@end
