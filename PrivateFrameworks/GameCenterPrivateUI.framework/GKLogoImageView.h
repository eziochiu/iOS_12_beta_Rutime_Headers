/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKLogoImageView : UICollectionReusableView {
    UIImageView * _imageView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic) UIImageView *imageView;
@property (nonatomic) UILabel *titleLabel;

+ (double)defaultHeight;
+ (void)updateLogoImageHeight:(double)arg1;

- (void)_addAndConstraintSubview:(id)arg1;
- (void)_coreInit;
- (void)awakeFromNib;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end
