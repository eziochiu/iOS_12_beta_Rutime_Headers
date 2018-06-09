/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibraryMenuItemViewCell : VUIListCollectionViewCell {
    VUISeparatorView * _bottomSeparatorView;
    VUIImageView * _imageView;
    VUILabel * _titleLabel;
    VUISeparatorView * _topSeparatorView;
}

@property (nonatomic, readonly) VUISeparatorView *bottomSeparatorView;
@property (nonatomic, readonly) VUILabel *titleLabel;
@property (nonatomic, retain) VUISeparatorView *topSeparatorView;

- (void).cxx_destruct;
- (id)bottomSeparatorView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setTopSeparatorView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;
- (id)topSeparatorView;

@end
