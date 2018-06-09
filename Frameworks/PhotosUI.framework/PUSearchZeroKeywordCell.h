/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchZeroKeywordCell : UICollectionViewCell {
    PXRoundedCornerOverlayView * _imageCornerOverlayView;
    UIImageView * _imageView;
    UILabel * _textLabel;
}

@property (nonatomic, retain) PXRoundedCornerOverlayView *imageCornerOverlayView;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UILabel *textLabel;

+ (id)_thumbnailWidthInterpolator;
+ (struct CGSize { double x1; double x2; })cellSizeWithTextLabel:(bool)arg1;
+ (id)reuseIdentifier;
+ (struct CGSize { double x1; double x2; })thumbnailSize;

- (void).cxx_destruct;
- (id)imageCornerOverlayView;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setImageCornerOverlayView:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (id)textLabel;

@end
