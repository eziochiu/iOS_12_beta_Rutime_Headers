/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUIAtomView : UIView <MFAtomTextViewAtomLayout> {
    UIView * _backgroundView;
    NSLayoutConstraint * _bottomMarginConstraint;
    NSArray * _defaultConstraints;
    UIImageView * _leadingImage;
    SPSearchEntity * _searchEntity;
    UILabel * _textLabel;
    NSLayoutConstraint * _topToBaselineConstraint;
}

@property (retain) UIView *backgroundView;
@property (nonatomic, readonly) long long baseWritingDirection;
@property (nonatomic, retain) NSLayoutConstraint *bottomMarginConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSArray *defaultConstraints;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *leadingImage;
@property (nonatomic, retain) SPSearchEntity *searchEntity;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } selectionBounds;
@property (nonatomic) long long selectionStyle;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *textLabel;
@property (nonatomic, retain) NSLayoutConstraint *topToBaselineConstraint;

+ (bool)requiresConstraintBasedLayout;
+ (id)suggestedContactIcon;

- (void).cxx_destruct;
- (double)_bottomMargin;
- (id)_font;
- (double)_topToBaselineDelta;
- (id)backgroundView;
- (id)bottomMarginConstraint;
- (id)defaultConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (id)leadingImage;
- (id)searchEntity;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBounds;
- (long long)selectionStyle;
- (void)setBackgroundView:(id)arg1;
- (void)setBottomMarginConstraint:(id)arg1;
- (void)setDefaultConstraints:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setLeadingImage:(id)arg1;
- (void)setSearchEntity:(id)arg1;
- (void)setSelectionStyle:(long long)arg1;
- (void)setSelectionStyle:(long long)arg1 animated:(bool)arg2;
- (void)setTextLabel:(id)arg1;
- (void)setTopToBaselineConstraint:(id)arg1;
- (id)textLabel;
- (id)topToBaselineConstraint;
- (id)viewForLastBaselineLayout;

@end
