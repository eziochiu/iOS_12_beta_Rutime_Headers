/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsHeaderView : UIView {
    UIView * _artworkBackgroundView;
    UIImageView * _artworkView;
    UIView * _buttonBackground;
    long long  _buttonType;
    MPButton * _doneButton;
    UIButton * _launchNowPlayingAppButton;
    bool  _marqueeEnabled;
    struct CGSize { 
        double width; 
        double height; 
    }  _overrideSize;
    UIImageView * _placeholderArtworkView;
    MPButton * _playPauseButton;
    MPCPlayerPath * _playerPath;
    UILabel * _primaryLabel;
    MPUMarqueeView * _primaryMarqueeView;
    NSString * _primaryString;
    MediaControlsRouteLabel * _routeLabel;
    MPButton * _routingButton;
    UILabel * _secondaryLabel;
    MPUMarqueeView * _secondaryMarqueeView;
    NSString * _secondaryString;
    UIView * _shadow;
    bool  _shouldUseOverrideSize;
    long long  _style;
    bool  _transitioning;
}

@property (nonatomic, retain) UIView *artworkBackgroundView;
@property (nonatomic, retain) UIImageView *artworkView;
@property (nonatomic, retain) UIView *buttonBackground;
@property (nonatomic) long long buttonType;
@property (nonatomic, retain) MPButton *doneButton;
@property (nonatomic, retain) UIButton *launchNowPlayingAppButton;
@property (nonatomic) bool marqueeEnabled;
@property (nonatomic) struct CGSize { double x1; double x2; } overrideSize;
@property (nonatomic, retain) UIImageView *placeholderArtworkView;
@property (nonatomic, retain) MPButton *playPauseButton;
@property (nonatomic, copy) MPCPlayerPath *playerPath;
@property (nonatomic, retain) UILabel *primaryLabel;
@property (nonatomic, retain) MPUMarqueeView *primaryMarqueeView;
@property (nonatomic, copy) NSString *primaryString;
@property (nonatomic, retain) MediaControlsRouteLabel *routeLabel;
@property (nonatomic, retain) MPButton *routingButton;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (nonatomic, retain) MPUMarqueeView *secondaryMarqueeView;
@property (nonatomic, copy) NSString *secondaryString;
@property (nonatomic, retain) UIView *shadow;
@property (nonatomic) bool shouldUseOverrideSize;
@property (nonatomic) long long style;
@property (getter=isTransitioning, nonatomic) bool transitioning;

- (void).cxx_destruct;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateRTL;
- (void)_updateStyle;
- (id)artworkBackgroundView;
- (id)artworkView;
- (id)buttonBackground;
- (long long)buttonType;
- (void)clearOverrideSize;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)doneButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTransitioning;
- (id)launchNowPlayingAppButton;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })layoutTextInAvailableBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 setFrames:(bool)arg2;
- (bool)marqueeEnabled;
- (struct CGSize { double x1; double x2; })overrideSize;
- (id)placeholderArtworkView;
- (id)playPauseButton;
- (id)playerPath;
- (id)primaryLabel;
- (id)primaryMarqueeView;
- (id)primaryString;
- (id)routeLabel;
- (id)routingButton;
- (id)secondaryLabel;
- (id)secondaryMarqueeView;
- (id)secondaryString;
- (void)setArtworkBackgroundView:(id)arg1;
- (void)setArtworkView:(id)arg1;
- (void)setButtonBackground:(id)arg1;
- (void)setButtonType:(long long)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setLaunchNowPlayingAppButton:(id)arg1;
- (void)setMarqueeEnabled:(bool)arg1;
- (void)setOverrideSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPlaceholderArtworkView:(id)arg1;
- (void)setPlayPauseButton:(id)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)setPrimaryLabel:(id)arg1;
- (void)setPrimaryMarqueeView:(id)arg1;
- (void)setPrimaryString:(id)arg1;
- (void)setRouteLabel:(id)arg1;
- (void)setRoutingButton:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setSecondaryMarqueeView:(id)arg1;
- (void)setSecondaryString:(id)arg1;
- (void)setShadow:(id)arg1;
- (void)setShouldUseOverrideSize:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTransitioning:(bool)arg1;
- (id)shadow;
- (bool)shouldUseOverrideSize;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateArtworkStyle;

@end
