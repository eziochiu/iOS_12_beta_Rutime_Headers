/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SULockoutView : UIView {
    UIImageView * _backgroundImageView;
    UILabel * _bodyLabel;
    UIImageView * _glowImageView;
    UIImageView * _imageView;
    long long  _layoutPreset;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, retain) UIImage *glowImage;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) long long layoutPreset;
@property (nonatomic, copy) NSString *title;

- (id)_bodyLabel;
- (id)_imageView;
- (void)_layoutForSlowNetwork;
- (id)_newLabel;
- (id)_titleLabel;
- (id)backgroundImage;
- (id)body;
- (void)dealloc;
- (id)glowImage;
- (id)image;
- (long long)layoutPreset;
- (void)layoutSubviews;
- (void)setBackgroundImage:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setGlowImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setLayoutPreset:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
