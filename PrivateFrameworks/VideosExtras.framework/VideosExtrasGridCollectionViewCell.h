/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasGridCollectionViewCell : UICollectionViewCell {
    VideosExtrasConstrainedArtworkContainerView * _artworkContainer;
    NSLayoutConstraint * _artworkContainerHeightConstraint;
    NSLayoutConstraint * _artworkContainerWidthConstraint;
    IKLockupElement * _lockupElement;
    NSLayoutConstraint * _spacerHeight;
    NSLayoutConstraint * _spacerTop;
    UIView * _spacerView;
    UILabel * _subtitleLabel;
    MPUContentSizeLayoutConstraint * _subtitleLineHeight;
    UILabel * _titleLabel;
    MPUContentSizeLayoutConstraint * _topLineHeight;
}

@property (nonatomic, readonly) VideosExtrasConstrainedArtworkContainerView *artworkContainer;
@property (nonatomic) IKLockupElement *lockupElement;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)artworkContainer;
- (void)configureForLockup:(id)arg1 cellStyle:(id)arg2;
- (void)configureForLockup:(id)arg1 cellStyle:(id)arg2 withSizing:(bool)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)lockupElement;
- (void)prepareForReuse;
- (void)setHighlighted:(bool)arg1;
- (void)setLockupElement:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;

@end