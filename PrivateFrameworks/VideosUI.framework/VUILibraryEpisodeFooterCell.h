/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibraryEpisodeFooterCell : UICollectionViewCell {
    VUISeparatorView * _bottomSeparatorView;
    NSString * _title;
    VUILabel * _titleLabel;
    VUISeparatorView * _topSeparatorView;
}

@property (nonatomic, retain) VUISeparatorView *bottomSeparatorView;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) VUILabel *titleLabel;
@property (nonatomic, retain) VUISeparatorView *topSeparatorView;

- (void).cxx_destruct;
- (id)bottomSeparatorView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBottomSeparatorView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTopSeparatorView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (id)titleLabel;
- (id)topSeparatorView;

@end
