/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKRoundedHeaderView : UIView {
    UIColor * _color;
    UIColor * _detailTextColor;
    NSString * _detailTextCompositingFilter;
    UILabel * _detailTextLabel;
    HKGradient * _gradient;
    HKGradientView * _gradientView;
    UIImage * _image;
    UIImageView * _imageView;
    UIColor * _textColor;
    UILabel * _textLabel;
    NSLayoutConstraint * _textLeadingConstraintToImageView;
    NSLayoutConstraint * _textLeadingConstraintToView;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, copy) NSString *detailText;
@property (nonatomic, retain) UIColor *detailTextColor;
@property (nonatomic) NSString *detailTextCompositingFilter;
@property (nonatomic, retain) UILabel *detailTextLabel;
@property (nonatomic, retain) HKGradient *gradient;
@property (nonatomic, retain) HKGradientView *gradientView;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly) double textHorizontalInset;
@property (nonatomic, retain) UILabel *textLabel;
@property (nonatomic, retain) NSLayoutConstraint *textLeadingConstraintToImageView;
@property (nonatomic, retain) NSLayoutConstraint *textLeadingConstraintToView;

+ (id)_detailTextFont;
+ (id)_textFont;
+ (double)_textLastBaselineToBottom;
+ (double)_topToTextFirstBaseline;
+ (double)estimatedHeight;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupUI;
- (void)_updateTextConstraints;
- (id)color;
- (id)detailText;
- (id)detailTextColor;
- (id)detailTextCompositingFilter;
- (id)detailTextLabel;
- (id)gradient;
- (id)gradientView;
- (id)image;
- (id)imageView;
- (id)initWithColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithGradient:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setDetailText:(id)arg1;
- (void)setDetailTextColor:(id)arg1;
- (void)setDetailTextCompositingFilter:(id)arg1;
- (void)setDetailTextLabel:(id)arg1;
- (void)setGradient:(id)arg1;
- (void)setGradientView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setTextLeadingConstraintToImageView:(id)arg1;
- (void)setTextLeadingConstraintToView:(id)arg1;
- (id)text;
- (id)textColor;
- (double)textHorizontalInset;
- (id)textLabel;
- (id)textLeadingConstraintToImageView;
- (id)textLeadingConstraintToView;

@end
