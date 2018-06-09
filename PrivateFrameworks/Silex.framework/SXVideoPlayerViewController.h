/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoPlayerViewController : UIViewController <AVPlayerViewControllerDelegate_WebKitOnly, SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate, SXVideoPlaybackObserver> {
    UIActivityIndicatorView * _activityIndicatorView;
    SVAdPrivacyButton * _adPrivacyButton;
    SXPlaybackCoordinator * _coordinator;
    <SXVideoPlayerViewControllerDataSource> * _dataSource;
    <SXVideoPlayerViewControllerDelegate> * _delegate;
    bool  _fullscreen;
    unsigned long long  _fullscreenBehavior;
    SXAutomaticFullscreenVideoPlaybackBehaviorManager * _fullscreenBehaviorManager;
    SVLearnMoreButton * _learnMoreButton;
    unsigned long long  _mode;
    AVPlayerViewController * _playerViewController;
    SXVideoPlaybackQueue * _queue;
    SXVideoAdSkipButton * _skipButton;
    SXTouchForwardingView * _touchForwardingView;
    SVKeyValueObserver * _videoBoundsObserver;
    SXVideoVolumeObserver * _volumeObserver;
    <SVVolumeReporting> * _volumeReporter;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic, retain) SVAdPrivacyButton *adPrivacyButton;
@property (nonatomic, retain) SXPlaybackCoordinator *coordinator;
@property (nonatomic) <SXVideoPlayerViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXVideoPlayerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isFullscreen, nonatomic) bool fullscreen;
@property (nonatomic) unsigned long long fullscreenBehavior;
@property (nonatomic, readonly) SXAutomaticFullscreenVideoPlaybackBehaviorManager *fullscreenBehaviorManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SVLearnMoreButton *learnMoreButton;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, retain) AVPlayerViewController *playerViewController;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (nonatomic, retain) SXVideoPlaybackQueue *queue;
@property (nonatomic, retain) SXVideoAdSkipButton *skipButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXTouchForwardingView *touchForwardingView;
@property (nonatomic, retain) SVKeyValueObserver *videoBoundsObserver;
@property (nonatomic, retain) SXVideoVolumeObserver *volumeObserver;
@property (nonatomic, readonly) <SVVolumeReporting> *volumeReporter;

- (void).cxx_destruct;
- (id)activityIndicatorView;
- (id)adPrivacyButton;
- (void)adPrivacyButtonTapped:(id)arg1;
- (void)adSkipButtonTapped:(id)arg1;
- (void)advance;
- (id)coordinator;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)enterFullscreenWithCompletionBlock:(id /* block */)arg1;
- (void)exitFullscreenWithCompletionBlock:(id /* block */)arg1;
- (void)finished;
- (unsigned long long)fullscreenBehavior;
- (id)fullscreenBehaviorManager;
- (void)fullscreenBehaviorManagerRequiresFullscreenPlayback:(id)arg1;
- (id)initWithVolumeReporter:(id)arg1;
- (bool)isFullscreen;
- (bool)isPlaying;
- (id)learnMoreButton;
- (void)learnMoreButtonTapped:(id)arg1;
- (void)loadView;
- (unsigned long long)mode;
- (void)pause;
- (void)play;
- (bool)playbackAllowedForPlaybackCoordinator:(id)arg1;
- (void)playbackCoordinator:(id)arg1 playbackFailedWithError:(id)arg2;
- (void)playbackCoordinator:(id)arg1 timeElapsed:(double)arg2 duration:(double)arg3;
- (void)playbackCoordinatorFinishedPlayback:(id)arg1;
- (void)playbackCoordinatorPausedPlayback:(id)arg1;
- (void)playbackCoordinatorResumedPlayback:(id)arg1;
- (void)playbackCoordinatorStartedPlayback:(id)arg1;
- (void)playbackCoordinatorStateChanged:(id)arg1;
- (id)playerViewController;
- (void)playerViewController:(id)arg1 metricsCollectionEventOccured:(long long)arg2;
- (bool)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2;
- (id)queue;
- (void)refreshControlsForPlaybackCoordinator:(id)arg1;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setAdPrivacyButton:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFullscreen:(bool)arg1;
- (void)setFullscreenBehavior:(unsigned long long)arg1;
- (void)setLearnMoreButton:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setPlayerViewController:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSkipButton:(id)arg1;
- (void)setVideoBoundsObserver:(id)arg1;
- (void)setVolumeObserver:(id)arg1;
- (void)setupQueueIfNeeded;
- (id)skipButton;
- (void)startPlaybackForCoordinatorIfAllowed:(id)arg1;
- (id)touchForwardingView;
- (void)transitionToCoordinator:(id)arg1;
- (void)updateSkipButtonWithThreshold:(unsigned long long)arg1 time:(double)arg2;
- (void)updateViewConstraints;
- (id)videoBoundsObserver;
- (void)viewDidLoad;
- (id)volumeObserver;
- (id)volumeReporter;

@end
