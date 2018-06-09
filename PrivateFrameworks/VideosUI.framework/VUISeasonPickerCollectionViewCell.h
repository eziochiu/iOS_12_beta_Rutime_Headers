/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUISeasonPickerCollectionViewCell : VUIListCollectionViewCell {
    VUISeparatorView * _bottomSeparatorView;
    _TVImageView * _seasonImageView;
    VUILabel * _secondSubtitleLabel;
    VUILabel * _subtitleLabel;
    VUILabel * _titleLabel;
    VUISeparatorView * _topSeparatorView;
}

@property (nonatomic, retain) VUISeparatorView *bottomSeparatorView;
@property (nonatomic, retain) _TVImageView *seasonImageView;
@property (nonatomic, retain) VUILabel *secondSubtitleLabel;
@property (nonatomic, retain) VUILabel *subtitleLabel;
@property (nonatomic, retain) VUILabel *titleLabel;
@property (nonatomic, retain) VUISeparatorView *topSeparatorView;

- (void).cxx_destruct;
- (id)bottomSeparatorView;
- (void)layoutSubviews;
- (id)seasonImageView;
- (id)secondSubtitleLabel;
- (void)setBottomSeparatorView:(id)arg1;
- (void)setSeasonImageView:(id)arg1;
- (void)setSecondSubtitleLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTopSeparatorView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleLabel;
- (id)titleLabel;
- (id)topSeparatorView;

@end
