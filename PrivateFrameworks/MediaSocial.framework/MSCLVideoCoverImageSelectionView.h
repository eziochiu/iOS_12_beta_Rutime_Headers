/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLVideoCoverImageSelectionView : UIView {
    UIView * _backgroundView;
    SKUIClientContext * _clientContext;
    double  _duration;
    UILabel * _explanationLabel;
    CAGradientLayer * _gradientOverlayLayer;
    double  _initialPlayerTime;
    bool  _isTracking;
    AVPlayer * _player;
    AVPlayerItem * _playerItem;
    AVPlayerLayer * _playerLayer;
    MSCLVideoScrubberControl * _scrubber;
}

@property (nonatomic, readonly) UIImage *coverImage;
@property (nonatomic, readonly) double coverImageTime;
@property (nonatomic) double initialPlayerTime;

- (void).cxx_destruct;
- (id)_detailScrubbingExplanationString;
- (void)_reloadPlayerCurrentTime;
- (void)_scrubberBeginScrubAction:(id)arg1;
- (void)_scrubberEndScrubAction:(id)arg1;
- (void)_scrubberValueChangeAction:(id)arg1;
- (id)coverImage;
- (double)coverImageTime;
- (void)dealloc;
- (id)initWithAssetURL:(id)arg1 clientContext:(id)arg2;
- (double)initialPlayerTime;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setInitialPlayerTime:(double)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
