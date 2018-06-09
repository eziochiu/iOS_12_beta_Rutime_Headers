/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPTableViewCell : UITableViewCell {
    bool  _accessiblityConstraintsEnabled;
    bool  _constraintsLoaded;
    UIView * _foregroundView;
    NSLayoutConstraint * _foregroundViewBottomAnchorLayoutConstraint;
    NSLayoutConstraint * _foregroundViewLeadingAnchorLayoutConstraint;
    bool  _foregroundViewLoaded;
    NSLayoutConstraint * _foregroundViewTopAnchorLayoutConstraint;
    NSLayoutConstraint * _foregroundViewTrailingAnchorLayoutConstraint;
}

@property (getter=isAccessiblityConstraintsEnabled, nonatomic) bool accessiblityConstraintsEnabled;
@property (getter=isConstraintsLoaded, nonatomic) bool constraintsLoaded;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (nonatomic, readonly) UIView *foregroundView;
@property (nonatomic, readonly) NSLayoutConstraint *foregroundViewBottomAnchorLayoutConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *foregroundViewLeadingAnchorLayoutConstraint;
@property (getter=isForegroundViewLoaded, nonatomic) bool foregroundViewLoaded;
@property (nonatomic, readonly) NSLayoutConstraint *foregroundViewTopAnchorLayoutConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *foregroundViewTrailingAnchorLayoutConstraint;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } intrinsicSeparatorInset;

+ (bool)requiresConstraintBasedLayout;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInsetForContentSizeCategory:(id)arg1;

- (void).cxx_destruct;
- (void)commonInit;
- (id)foregroundColor;
- (id)foregroundView;
- (id)foregroundViewBottomAnchorLayoutConstraint;
- (id)foregroundViewLeadingAnchorLayoutConstraint;
- (id)foregroundViewTopAnchorLayoutConstraint;
- (id)foregroundViewTrailingAnchorLayoutConstraint;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })intrinsicSeparatorInset;
- (bool)isAccessiblityConstraintsEnabled;
- (bool)isConstraintsLoaded;
- (bool)isForegroundViewLoaded;
- (void)layoutSubviews;
- (void)loadConstraints;
- (void)loadContentView;
- (void)setAccessiblityConstraintsEnabled:(bool)arg1;
- (void)setConstraintsLoaded:(bool)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setForegroundView:(id)arg1;
- (void)setForegroundViewLoaded:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unloadConstraints;
- (void)updateConstraints;
- (void)updateConstraintsConstants;
- (void)updateFonts;

@end
