/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPreviewAssetCollectionViewCell : UICollectionViewCell {
    UIImage * _previewImage;
    UIImageView * _previewImageView;
}

@property (nonatomic, retain) UIImage *previewImage;

- (void).cxx_destruct;
- (void)_updatePreviewImage;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)previewImage;
- (void)setPreviewImage:(id)arg1;

@end
