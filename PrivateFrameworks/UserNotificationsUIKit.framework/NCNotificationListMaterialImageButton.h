/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListMaterialImageButton : NCNotificationListMaterialButton {
    UIImage * _image;
    UIImageView * _imageView;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;

- (void).cxx_destruct;
- (void)_configureImageViewEffects;
- (void)_configureImageViewIfNecessary;
- (void)_layoutImageView;
- (void)_updateViewsForMaterialChanges;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2 image:(id)arg3;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;

@end
