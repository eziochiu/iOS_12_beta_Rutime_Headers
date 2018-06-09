/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasTableViewCell : UITableViewCell {
    VideosExtrasConstrainedArtworkContainerView * _artworkContainer;
    NSLayoutConstraint * _artworkHeightConstraint;
    NSLayoutConstraint * _artworkSpacerHeightConstraint;
    NSLayoutConstraint * _artworkWidthConstraint;
    NSArray * _bottomConstraints;
    NSLayoutConstraint * _bottomLabelConstraint;
    IKListItemLockupElement * _element;
    NSLayoutConstraint * _leadingViewConstraint;
    NSLayoutConstraint * _minimumHeightConstraint;
    MPUContentSizeLayoutConstraint * _subtitleBaselineConstraint;
    UILabel * _subtitleLabel;
    UIView * _textContainerView;
    NSLayoutConstraint * _textLeadingConstraint;
    NSLayoutConstraint * _textSpacerHeightConstraint;
    NSLayoutConstraint * _textTrailingConstraint;
    UILabel * _titleLabel;
    NSArray * _topConstraints;
    NSLayoutConstraint * _topLabelConstraint;
}

@property (nonatomic, readonly) VideosExtrasConstrainedArtworkContainerView *artworkContainerView;
@property (nonatomic) IKListItemLockupElement *element;

- (void).cxx_destruct;
- (id)artworkContainerView;
- (void)configureForListItemLockupElement:(id)arg1 wide:(bool)arg2;
- (id)element;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setElement:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;

@end
