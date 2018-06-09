/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICrossFadingTabBarButton : UIControl {
    _Badge * _badge;
    UIImage * _image;
    UIImage * _selectedImage;
    UIImageView * _selectedImageView;
    UILabel * _selectedTitleLabel;
    double  _selectionProgress;
    UIImageView * _standardImageView;
    UILabel * _standardTitleLabel;
    NSString * _title;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImage *selectedImage;
@property (nonatomic) double selectionProgress;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_positionBadge;
- (void)_setBadgeValue:(id)arg1;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)selectedImage;
- (double)selectionProgress;
- (void)setImage:(id)arg1;
- (void)setSelectedImage:(id)arg1;
- (void)setSelectionProgress:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)tintColorDidChange;
- (id)title;

@end
