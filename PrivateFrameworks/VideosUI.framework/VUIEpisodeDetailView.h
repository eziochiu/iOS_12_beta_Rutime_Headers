/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIEpisodeDetailView : UIScrollView {
    UIImageView * _backgroundImageView;
    UIFont * _contentDescriptionFont;
    TVFocusableTextView * _contentDescriptionView;
    UIImageView * _contentRatingImageView;
    VUILabel * _dotSeparatorLabel;
    VUILabel * _episodeNumberLabel;
    VUILabel * _episodeTitleLabel;
    <VUIEpisodeDetailViewDelegate> * _episodeViewDelegate;
    _TVImageView * _imageView;
    VUIMediaItem * _mediaItem;
    _TVButton * _playButton;
    _TVProgressView * _progressView;
    VUILabel * _releaseDateLabel;
    VUILabel * _seasonNumberLabel;
}

@property (nonatomic, retain) UIImageView *backgroundImageView;
@property (nonatomic, retain) UIFont *contentDescriptionFont;
@property (nonatomic, retain) TVFocusableTextView *contentDescriptionView;
@property (nonatomic, retain) UIImageView *contentRatingImageView;
@property (nonatomic, retain) VUILabel *dotSeparatorLabel;
@property (nonatomic, retain) VUILabel *episodeNumberLabel;
@property (nonatomic, retain) VUILabel *episodeTitleLabel;
@property (nonatomic) <VUIEpisodeDetailViewDelegate> *episodeViewDelegate;
@property (nonatomic, retain) _TVImageView *imageView;
@property (nonatomic, retain) VUIMediaItem *mediaItem;
@property (nonatomic, retain) _TVButton *playButton;
@property (nonatomic, retain) _TVProgressView *progressView;
@property (nonatomic, retain) VUILabel *releaseDateLabel;
@property (nonatomic, retain) VUILabel *seasonNumberLabel;

+ (void)configureEpisodeDetailView:(id)arg1 withMedia:(id)arg2;

- (void).cxx_destruct;
- (void)_configureDotSeparator;
- (double)_descriptionBottomMarginWithBaselineMargin:(double)arg1;
- (double)_descriptionTopMarginWithBaselineMargin:(double)arg1 otherFont:(id)arg2;
- (void)_playButtonPressed;
- (id)backgroundImageView;
- (id)contentDescriptionFont;
- (id)contentDescriptionView;
- (id)contentRatingImageView;
- (id)dotSeparatorLabel;
- (id)episodeNumberLabel;
- (id)episodeTitleLabel;
- (id)episodeViewDelegate;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)mediaItem;
- (id)playButton;
- (id)progressView;
- (id)releaseDateLabel;
- (id)seasonNumberLabel;
- (void)setBackgroundImageView:(id)arg1;
- (void)setContentDescriptionFont:(id)arg1;
- (void)setContentDescriptionView:(id)arg1;
- (void)setContentRatingImageView:(id)arg1;
- (void)setDotSeparatorLabel:(id)arg1;
- (void)setEpisodeNumberLabel:(id)arg1;
- (void)setEpisodeTitleLabel:(id)arg1;
- (void)setEpisodeViewDelegate:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setReleaseDateLabel:(id)arg1;
- (void)setSeasonNumberLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
