/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUWallpaperPhotoCollectionCell : UITableViewCell {
    UILabel * _descriptionLabel;
    NSArray * _horizontalConstraints;
    NSLayoutConstraint * _imageHeightConstraint;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    NSArray * _imageSizeConstraints;
    UIImageView * _imageThumbnailView;
    NSLayoutConstraint * _imageWidthConstraint;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) NSString *descriptionText;
@property (nonatomic, retain) NSArray *horizontalConstraints;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSLayoutConstraint *imageHeightConstraint;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) NSArray *imageSizeConstraints;
@property (nonatomic, retain) UIImageView *imageThumbnailView;
@property (nonatomic, retain) NSLayoutConstraint *imageWidthConstraint;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSString *titleText;

- (void).cxx_destruct;
- (id)descriptionLabel;
- (id)descriptionText;
- (id)horizontalConstraints;
- (id)image;
- (id)imageHeightConstraint;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)imageSizeConstraints;
- (id)imageThumbnailView;
- (id)imageWidthConstraint;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setDescriptionLabel:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setHorizontalConstraints:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageHeightConstraint:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageSizeConstraints:(id)arg1;
- (void)setImageThumbnailView:(id)arg1;
- (void)setImageWidthConstraint:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleLabel;
- (id)titleText;
- (void)updateConstraints;

@end
