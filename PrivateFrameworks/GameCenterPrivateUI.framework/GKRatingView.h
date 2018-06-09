/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKRatingView : UIView {
    UIImageView * _backgroundImageView;
    UIImageView * _foregroundImageView;
    NSLayoutConstraint * _foregroundWidthConstraint;
    double  _value;
}

@property (nonatomic, retain) UIImageView *backgroundImageView;
@property (nonatomic, retain) UIImageView *foregroundImageView;
@property (nonatomic, retain) NSLayoutConstraint *foregroundWidthConstraint;
@property (nonatomic) double value;

- (void)awakeFromNib;
- (id)backgroundImageView;
- (void)commonSetup;
- (void)dealloc;
- (id)foregroundImageView;
- (id)foregroundWidthConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setBackgroundImageView:(id)arg1;
- (void)setForegroundImageView:(id)arg1;
- (void)setForegroundWidthConstraint:(id)arg1;
- (void)setValue:(double)arg1;
- (double)value;

@end
