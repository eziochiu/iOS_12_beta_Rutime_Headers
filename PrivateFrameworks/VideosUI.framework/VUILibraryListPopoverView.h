/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibraryListPopoverView : UIView {
    UICollectionView * _collectionView;
    VUISeparatorView * _separatorView;
    NSString * _title;
    UIView * _titleContainerView;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, retain) VUISeparatorView *separatorView;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, retain) UIView *titleContainerView;

- (void).cxx_destruct;
- (id)collectionView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 title:(id)arg2;
- (void)layoutSubviews;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (void)setTitleContainerView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (id)titleContainerView;

@end
