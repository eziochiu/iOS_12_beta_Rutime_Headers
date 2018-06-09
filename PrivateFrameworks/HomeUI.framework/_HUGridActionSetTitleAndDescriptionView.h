/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface _HUGridActionSetTitleAndDescriptionView : UIView {
    UILabel * _descriptionLabel;
    NSArray * _titleAndDescriptionConstraints;
    double  _titleDescriptionLineSpacing;
    NSLayoutConstraint * _titleDescriptionSpacingConstraint;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) NSArray *titleAndDescriptionConstraints;
@property (nonatomic) double titleDescriptionLineSpacing;
@property (nonatomic, retain) NSLayoutConstraint *titleDescriptionSpacingConstraint;
@property (nonatomic, retain) UILabel *titleLabel;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)descriptionLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 titleLabelSuperview:(id)arg2;
- (void)setDescriptionLabel:(id)arg1;
- (void)setTitleAndDescriptionConstraints:(id)arg1;
- (void)setTitleDescriptionLineSpacing:(double)arg1;
- (void)setTitleDescriptionSpacingConstraint:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleAndDescriptionConstraints;
- (double)titleDescriptionLineSpacing;
- (id)titleDescriptionSpacingConstraint;
- (id)titleLabel;
- (void)updateConstraints;
- (void)updateTitleText:(id)arg1 descriptionText:(id)arg2;

@end
