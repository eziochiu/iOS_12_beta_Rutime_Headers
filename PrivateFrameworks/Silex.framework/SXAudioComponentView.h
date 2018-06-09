/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAudioComponentView : SXMediaComponentView <SXMediaPlaybackDelegate> {
    bool  _audioHasPlayed;
    <SXHost> * _host;
    SXAudioComponentOverlayView * _overlayView;
    SXAVPlayer * _player;
    AVPlayerViewController * _playerViewController;
    <SXResourceDataSource> * _resourceDataSource;
    bool  _startPlaybackWhenReady;
}

@property (nonatomic) bool audioHasPlayed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXHost> *host;
@property (nonatomic, readonly) SXAudioComponentOverlayView *overlayView;
@property (nonatomic, retain) SXAVPlayer *player;
@property (nonatomic, retain) AVPlayerViewController *playerViewController;
@property (nonatomic, readonly) <SXResourceDataSource> *resourceDataSource;
@property (nonatomic) bool startPlaybackWhenReady;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)allowHierarchyRemoval;
- (unsigned long long)analyticsMediaType;
- (bool)audioHasPlayed;
- (void)hidePlaybackControls;
- (id)host;
- (id)initWithDocumentController:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 analyticsReporting:(id)arg4 componentStyleRendererFactory:(id)arg5 appStateMonitor:(id)arg6 resourceDataSource:(id)arg7 host:(id)arg8;
- (void)loadAudio;
- (void)loadComponent:(id)arg1;
- (void)loadImage;
- (id)overlayView;
- (void)pauseMediaPlayback;
- (void)playButtonTapped:(id)arg1;
- (void)playbackFinished;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackStarted;
- (id)player;
- (id)playerViewController;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; })arg1;
- (void)renderContents;
- (id)resourceDataSource;
- (void)setAudioHasPlayed:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerViewController:(id)arg1;
- (void)setStartPlaybackWhenReady:(bool)arg1;
- (void)setupPlayerViewControllerWithPlayer:(id)arg1;
- (bool)shouldAutoStartPlayback;
- (void)showPlaybackControls;
- (bool)startPlaybackWhenReady;
- (void)submitMediaEngageCompleteEvent;
- (void)submitMediaEngageEventForUserAction:(unsigned long long)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
