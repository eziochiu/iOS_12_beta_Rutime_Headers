/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroEditorClipCell : UICollectionViewCell {
    UIButton * _audioButton;
    UIView * _audioButtonContainerView;
    NSLayoutConstraint * _bottomBarBottomSpaceConstraint;
    UIView * _circularPlayButton;
    <MiroClip> * _clip;
    <MiroEditorClipCellDataSource> * _dataSource;
    MiroEditorClipDebugView * _debugInfoView;
    UILabel * _debugLabel;
    <MiroEditorClipCellDelegate> * _delegate;
    FrameGenerator * _frameGenerator;
    AVPlayer * _player;
    AVPlayerItem * _playerItem;
    AVPlayerLayer * _playerLayer;
    UIImage * _thumbnail;
    NSLayoutConstraint * _thumbnailAspectConstraint;
    UIImageView * _thumbnailView;
}

@property (nonatomic) UIButton *audioButton;
@property (nonatomic) UIView *audioButtonContainerView;
@property (nonatomic, retain) NSLayoutConstraint *bottomBarBottomSpaceConstraint;
@property (nonatomic, retain) UIView *circularPlayButton;
@property (nonatomic, retain) <MiroClip> *clip;
@property (nonatomic) <MiroEditorClipCellDataSource> *dataSource;
@property (nonatomic) MiroEditorClipDebugView *debugInfoView;
@property (nonatomic) UILabel *debugLabel;
@property (nonatomic) <MiroEditorClipCellDelegate> *delegate;
@property (nonatomic, readonly) FrameGenerator *frameGenerator;
@property (nonatomic, readonly) bool isPlaying;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic, retain) AVPlayerItem *playerItem;
@property (nonatomic, retain) AVPlayerLayer *playerLayer;
@property (nonatomic, retain) UIImage *thumbnail;
@property (nonatomic, retain) NSLayoutConstraint *thumbnailAspectConstraint;
@property (nonatomic) UIImageView *thumbnailView;

- (void).cxx_destruct;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_didPlayToEnd:(id)arg1;
- (void)_disableAudioTracks;
- (void)_hidePlayer;
- (void)_setupCircularPlayButton;
- (void)_updateAudioButton;
- (void)_updateAudioVolume;
- (void)_updateDebugInfoView;
- (void)_updatePlayButton;
- (void)_updateThumbnailAspectIfNecessary;
- (id)audioButton;
- (id)audioButtonContainerView;
- (void)audioButtonTouchUpInside:(id)arg1;
- (void)awakeFromNib;
- (id)bottomBarBottomSpaceConstraint;
- (id)circularPlayButton;
- (bool)circularPlayButtonIsHidden;
- (id)clip;
- (id)dataSource;
- (void)dealloc;
- (id)debugInfoView;
- (id)debugLabel;
- (id)delegate;
- (id)description;
- (id)frameGenerator;
- (id)initWithCoder:(id)arg1;
- (bool)isPlaying;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (void)playButtonTouchUpInside:(id)arg1;
- (void)playPause:(id)arg1;
- (id)player;
- (id)playerItem;
- (id)playerLayer;
- (void)prepareForReuse;
- (void)setAudioButton:(id)arg1;
- (void)setAudioButtonContainerView:(id)arg1;
- (void)setBottomBarBottomSpaceConstraint:(id)arg1;
- (void)setCircularPlayButton:(id)arg1;
- (void)setClip:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDebugInfoView:(id)arg1;
- (void)setDebugLabel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setPlayerLayer:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setThumbnailAspectConstraint:(id)arg1;
- (void)setThumbnailView:(id)arg1;
- (void)showPlayerWithCompletionHandler:(id /* block */)arg1;
- (void)stopPlayback:(id)arg1;
- (id)thumbnail;
- (id)thumbnailAspectConstraint;
- (id)thumbnailView;
- (void)updateControlVisibility;

@end
