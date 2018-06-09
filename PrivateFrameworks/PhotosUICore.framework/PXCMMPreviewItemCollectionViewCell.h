/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPreviewItemCollectionViewCell : UICollectionViewCell {
    UIImage * _image;
    UIColor * _imageBorderColor;
    double  _imageBorderWidth;
    UIImageView * _imageView;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) UIColor *imageBorderColor;
@property (nonatomic) double imageBorderWidth;

- (void).cxx_destruct;
- (void)_updateImage;
- (id)image;
- (id)imageBorderColor;
- (double)imageBorderWidth;
- (void)prepareForReuse;
- (void)setImage:(id)arg1;
- (void)setImageBorderColor:(id)arg1;
- (void)setImageBorderWidth:(double)arg1;

@end
