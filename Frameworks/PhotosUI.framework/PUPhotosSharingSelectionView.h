/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosSharingSelectionView : UICollectionReusableView {
    UIImageView * _imageView;
    bool  _selected;
}

@property (getter=isSelected, nonatomic) bool selected;

- (void).cxx_destruct;
- (void)_updateSelected;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSelected;
- (void)setSelected:(bool)arg1;

@end
