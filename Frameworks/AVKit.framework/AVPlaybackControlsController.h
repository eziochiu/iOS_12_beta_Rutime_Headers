/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlaybackControlsController : NSObject <AVPlayerViewControllerContentViewDelegate, AVRoutePickerViewDelegate, AVScrollViewObserverDelegate, AVTransportControlsViewDelegate> {
    id  _AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver;
    NSArray * _allVisibilityControllerItems;
    bool  _allowsEnteringFullScreen;
    UIViewPropertyAnimator * _collapseExpandSliderAnimator;
    bool  _contentViewBeingScrolledOrOffScreen;
    bool  _coveringWindow;
    AVTimeFormatter * _elapsedTimeFormatter;
    bool  _entersFullScreenWhenPlaybackBegins;
    bool  _entersFullScreenWhenTapped;
    bool  _hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;
    bool  _hasSeekableLiveStreamingContent;
    bool  _includesVideoGravityButton;
    bool  _inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
    AVPlaybackControlsVisibilityControllerItem * _interactiveContentOverlayViewVisibilityItem;
    NSTimer * _loadingIndicatorTimer;
    double  _loadingIndicatorTimerDelay;
    bool  _multipleRoutesDetected;
    AVNowPlayingInfoController * _nowPlayingInfoControllerIfLoaded;
    NSTimer * _nowPlayingLoadingInfoDelayTimer;
    AVObservationController * _observationController;
    AVPictureInPictureController * _pictureInPictureController;
    id /* block */  _playButtonHandlerForLazyPlayerLoading;
    AVPlaybackControlsVisibilityControllerItem * _playbackControlsContainerVisibilityItem;
    bool  _playbackControlsIncludeDisplayModeControls;
    bool  _playbackControlsIncludeStartContentTransitionButtons;
    bool  _playbackControlsIncludeTransportControls;
    bool  _playbackControlsIncludeVolumeControls;
    AVObservationController * _playbackControlsObservationController;
    AVPlaybackControlsView * _playbackControlsView;
    bool  _playbackSuspendedForScrubbing;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _playbackViewFrame;
    AVPlayerController * _playerController;
    AVPlayerViewController * _playerViewController;
    bool  _playerViewControllerHasInvalidViewControllerHierarchy;
    bool  _playerViewControllerIsBeingTransitionedWithResizing;
    bool  _playerViewControllerIsPresentedFullScreen;
    bool  _playerViewControllerIsPresentingFullScreen;
    bool  _playingOnSecondScreen;
    long long  _preferredUnobscuredArea;
    bool  _prefersVolumeSliderExpanded;
    AVTimeFormatter * _remainingTimeFormatter;
    bool  _requiresLinearPlayback;
    bool  _resumingUpdates;
    AVRouteDetectorCoordinator * _routeDetectorCoordinator;
    UIAlertController * _routePickerAlertController;
    AVScrollViewObserver * _scrollViewObserver;
    bool  _scrubbingOrSeeking;
    bool  _shouldIgnoreTimeResolverUpdates;
    bool  _shouldPreventUserInteractionForContentTransition;
    bool  _showsDoneButtonWhenFullScreen;
    bool  _showsLoadingIndicator;
    bool  _showsPictureInPictureButton;
    bool  _showsPlaybackControls;
    bool  _showsPlaybackControlsWhenInline;
    bool  _startLeftwardContentTransitionButtonEnabled;
    bool  _startRightwardContentTransitionButtonEnabled;
    long long  _timeControlStatus;
    AVPlayerControllerTimeResolver * _timeResolver;
    AVTurboModePlaybackControlsPlaceholderView * _turboModePlaybackControlsPlaceholderView;
    AVPlaybackControlsVisibilityControllerItem * _turboModePlaybackControlsVisibilityItem;
    bool  _updatesNowPlayingInfoCenter;
    NSString * _videoGravity;
    long long  _videoGravityButtonType;
    AVVolumeController * _volumeController;
    bool  _volumeControlsCanShowSlider;
    AVPlaybackControlsVisibilityControllerItem * _volumeControlsContainerVisibilityItem;
}

@property (nonatomic, retain) id AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver;
@property (nonatomic, readonly) NSArray *allVisibilityControllerItems;
@property (nonatomic) bool allowsEnteringFullScreen;
@property (nonatomic, readonly) bool canShowLoadingIndicator;
@property (nonatomic) UIViewPropertyAnimator *collapseExpandSliderAnimator;
@property (getter=isContentViewBeingScrolledOrOffScreen, nonatomic) bool contentViewBeingScrolledOrOffScreen;
@property (getter=isCoveringWindow, nonatomic) bool coveringWindow;
@property (nonatomic, readonly) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVTimeFormatter *elapsedTimeFormatter;
@property (nonatomic) bool entersFullScreenWhenPlaybackBegins;
@property (nonatomic) bool entersFullScreenWhenTapped;
@property (getter=isFullScreen, nonatomic, readonly) bool fullScreen;
@property (nonatomic) bool hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;
@property (nonatomic) bool hasSeekableLiveStreamingContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesDoneButton;
@property (nonatomic, readonly) bool includesFullScreenButton;
@property (nonatomic, readonly) bool includesTapAnywhereToEnterFullScreenButton;
@property (nonatomic) bool includesVideoGravityButton;
@property (nonatomic) bool inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
@property (nonatomic, readonly) AVPlaybackControlsVisibilityControllerItem *interactiveContentOverlayViewVisibilityItem;
@property (nonatomic) NSTimer *loadingIndicatorTimer;
@property (nonatomic) double loadingIndicatorTimerDelay;
@property (nonatomic, readonly) double maximumTime;
@property (nonatomic, readonly) double minimumTime;
@property (nonatomic) bool multipleRoutesDetected;
@property (nonatomic, readonly) bool needsTimeResolver;
@property (nonatomic, retain) AVNowPlayingInfoController *nowPlayingInfoControllerIfLoaded;
@property (nonatomic) NSTimer *nowPlayingLoadingInfoDelayTimer;
@property (nonatomic, readonly) AVObservationController *observationController;
@property (nonatomic, retain) AVPictureInPictureController *pictureInPictureController;
@property (nonatomic, copy) id /* block */ playButtonHandlerForLazyPlayerLoading;
@property (nonatomic, readonly) bool playButtonsShowPauseGlyph;
@property (nonatomic, readonly) AVPlaybackControlsVisibilityControllerItem *playbackControlsContainerVisibilityItem;
@property (nonatomic) bool playbackControlsIncludeDisplayModeControls;
@property (nonatomic) bool playbackControlsIncludeStartContentTransitionButtons;
@property (nonatomic) bool playbackControlsIncludeTransportControls;
@property (nonatomic) bool playbackControlsIncludeVolumeControls;
@property (nonatomic, retain) AVObservationController *playbackControlsObservationController;
@property (nonatomic, retain) AVPlaybackControlsView *playbackControlsView;
@property (getter=isPlaybackSuspendedForScrubbing, nonatomic) bool playbackSuspendedForScrubbing;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } playbackViewFrame;
@property (nonatomic) AVPlayerController *playerController;
@property (nonatomic, readonly) AVPlayerViewController *playerViewController;
@property (nonatomic) bool playerViewControllerHasInvalidViewControllerHierarchy;
@property (nonatomic) bool playerViewControllerIsBeingTransitionedWithResizing;
@property (nonatomic) bool playerViewControllerIsPresentedFullScreen;
@property (nonatomic) bool playerViewControllerIsPresentingFullScreen;
@property (getter=isPlayingOnSecondScreen, nonatomic) bool playingOnSecondScreen;
@property (nonatomic) long long preferredUnobscuredArea;
@property (nonatomic) bool prefersVolumeSliderExpanded;
@property (nonatomic, readonly) bool prominentPlayButtonCanShowPauseGlyph;
@property (nonatomic, readonly) AVTimeFormatter *remainingTimeFormatter;
@property (nonatomic) bool requiresLinearPlayback;
@property (getter=isResumingUpdates, nonatomic) bool resumingUpdates;
@property (nonatomic, retain) AVRouteDetectorCoordinator *routeDetectorCoordinator;
@property (nonatomic) UIAlertController *routePickerAlertController;
@property (nonatomic, retain) AVScrollViewObserver *scrollViewObserver;
@property (getter=isScrubbingOrSeeking, nonatomic) bool scrubbingOrSeeking;
@property (getter=isSeekingEnabled, nonatomic, readonly) bool seekingEnabled;
@property (nonatomic, readonly) bool shouldEnterFullScreenWhenPlaybackBegins;
@property (nonatomic) bool shouldIgnoreTimeResolverUpdates;
@property (nonatomic) bool shouldPreventUserInteractionForContentTransition;
@property (nonatomic) bool showsDoneButtonWhenFullScreen;
@property (nonatomic) bool showsLoadingIndicator;
@property (nonatomic, readonly) bool showsMediaSelectionButton;
@property (nonatomic) bool showsPictureInPictureButton;
@property (nonatomic) bool showsPlaybackControls;
@property (nonatomic) bool showsPlaybackControlsWhenInline;
@property (nonatomic, readonly) bool showsProminentPlayButton;
@property (nonatomic, readonly) bool showsRoutePickerView;
@property (nonatomic, readonly) bool showsSkipButtons;
@property (nonatomic, readonly) bool showsStartContentTransitionButtons;
@property (nonatomic, readonly) bool showsTransportControls;
@property (getter=isStartLeftwardContentTransitionButtonEnabled, nonatomic) bool startLeftwardContentTransitionButtonEnabled;
@property (getter=isStartRightwardContentTransitionButtonEnabled, nonatomic) bool startRightwardContentTransitionButtonEnabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double targetTime;
@property (nonatomic) long long timeControlStatus;
@property (nonatomic, retain) AVPlayerControllerTimeResolver *timeResolver;
@property (nonatomic) AVTurboModePlaybackControlsPlaceholderView *turboModePlaybackControlsPlaceholderView;
@property (nonatomic, readonly) AVPlaybackControlsVisibilityControllerItem *turboModePlaybackControlsVisibilityItem;
@property (nonatomic) bool updatesNowPlayingInfoCenter;
@property (nonatomic, copy) NSString *videoGravity;
@property (nonatomic) long long videoGravityButtonType;
@property (nonatomic, readonly) AVVolumeController *volumeController;
@property (nonatomic) bool volumeControlsCanShowSlider;
@property (nonatomic, readonly) AVPlaybackControlsVisibilityControllerItem *volumeControlsContainerVisibilityItem;

+ (id)keyPathsForValuesAffectingCanShowLoadingIndicator;
+ (id)keyPathsForValuesAffectingCurrentTime;
+ (id)keyPathsForValuesAffectingFullScreen;
+ (id)keyPathsForValuesAffectingIncludesDoneButton;
+ (id)keyPathsForValuesAffectingIncludesFullScreenButton;
+ (id)keyPathsForValuesAffectingIncludesTapAnywhereToEnterFullScreenButton;
+ (id)keyPathsForValuesAffectingMaximumTime;
+ (id)keyPathsForValuesAffectingMinimumTime;
+ (id)keyPathsForValuesAffectingNeedsTimeResolver;
+ (id)keyPathsForValuesAffectingPlayButtonsShowPauseGlyph;
+ (id)keyPathsForValuesAffectingProminentPlayButtonCanShowPauseGlyph;
+ (id)keyPathsForValuesAffectingSeekingEnabled;
+ (id)keyPathsForValuesAffectingShouldEnterFullScreenWhenPlaybackBegins;
+ (id)keyPathsForValuesAffectingShowsMediaSelectionButton;
+ (id)keyPathsForValuesAffectingShowsProminentPlayButton;
+ (id)keyPathsForValuesAffectingShowsRoutePickerView;
+ (id)keyPathsForValuesAffectingShowsSkipButtons;
+ (id)keyPathsForValuesAffectingShowsStartContentTransitionsButtons;
+ (id)keyPathsForValuesAffectingShowsTransportControls;

- (void).cxx_destruct;
- (id)AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver;
- (void)_bindEnabledStateOfControls:(id)arg1 toKeyPath:(id)arg2;
- (void)_bindInclusionOfControlItems:(id)arg1 toKeyPath:(id)arg2;
- (bool)_hasVisibilityControllerItemThatPrefersVisible;
- (void)_observeBoolForKeyPath:(id)arg1 usingKeyValueObservationController:(id)arg2 observationHandler:(id /* block */)arg3;
- (bool)_prefersVolumeSliderExpandedAutomatically;
- (void)_seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)_showOrHideVolumeSlider;
- (void)_startObservingForPlaybackViewUpdates;
- (void)_startObservingPotentiallyUnimplementedPlayerControllerProperties;
- (void)_updateContainmentStatusAndScrollViewObserver:(id)arg1 contentView:(id)arg2;
- (void)_updateContentViewNeedsLayoutAndPlayerControllerInspectionSuspended;
- (void)_updateEdgeInsetsForLetterboxedContentInContentView:(id)arg1;
- (void)_updateHasPlaybackBegunSincePlayerControllerBecameReadyToPlay:(bool)arg1 playing:(bool)arg2 userDidEndTappingProminentPlayButton:(bool)arg3;
- (void)_updateOrCreateTimeResolverIfNeeded;
- (void)_updatePlaybackControlsVisibleAndObservingUpdates;
- (void)_updateScrubberAndTimeLabels;
- (void)_updateVideoGravityButtonType;
- (void)_updateVolumeButtonGlyph;
- (void)_updateVolumeSliderValueWithSystemVolume:(float)arg1 animated:(bool)arg2;
- (id)_volumeButtonMicaPackageState;
- (id)allVisibilityControllerItems;
- (bool)allowsEnteringFullScreen;
- (bool)canShowLoadingIndicator;
- (id)collapseExpandSliderAnimator;
- (double)currentTime;
- (void)dealloc;
- (id)elapsedTimeFormatter;
- (bool)entersFullScreenWhenPlaybackBegins;
- (bool)entersFullScreenWhenTapped;
- (void)handleCurrentRouteSupportsVolumeControlChanged:(id)arg1;
- (void)handleVolumeChange:(id)arg1;
- (bool)hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;
- (bool)hasSeekableLiveStreamingContent;
- (bool)includesDoneButton;
- (bool)includesFullScreenButton;
- (bool)includesTapAnywhereToEnterFullScreenButton;
- (bool)includesVideoGravityButton;
- (id)initWithPlayerViewController:(id)arg1;
- (bool)inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
- (id)interactiveContentOverlayViewVisibilityItem;
- (bool)isContentViewBeingScrolledOrOffScreen;
- (bool)isCoveringWindow;
- (bool)isFullScreen;
- (bool)isPlaybackSuspendedForScrubbing;
- (bool)isPlayingOnSecondScreen;
- (bool)isResumingUpdates;
- (bool)isScrubbingOrSeeking;
- (bool)isSeekingEnabled;
- (bool)isStartLeftwardContentTransitionButtonEnabled;
- (bool)isStartRightwardContentTransitionButtonEnabled;
- (id)loadingIndicatorTimer;
- (double)loadingIndicatorTimerDelay;
- (double)maximumTime;
- (double)minimumTime;
- (bool)multipleRoutesDetected;
- (bool)needsTimeResolver;
- (id)nowPlayingInfoControllerIfLoaded;
- (id)nowPlayingLoadingInfoDelayTimer;
- (id)observationController;
- (id)pictureInPictureController;
- (id /* block */)playButtonHandlerForLazyPlayerLoading;
- (bool)playButtonsShowPauseGlyph;
- (id)playbackControlsContainerVisibilityItem;
- (bool)playbackControlsIncludeDisplayModeControls;
- (bool)playbackControlsIncludeStartContentTransitionButtons;
- (bool)playbackControlsIncludeTransportControls;
- (bool)playbackControlsIncludeVolumeControls;
- (id)playbackControlsObservationController;
- (id)playbackControlsView;
- (void)playbackControlsViewDidLoad:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })playbackViewFrame;
- (id)playerController;
- (id)playerViewController;
- (void)playerViewControllerContentView:(id)arg1 willLoadPlaybackControlsView:(id)arg2;
- (void)playerViewControllerContentView:(id)arg1 willLoadTurboModePlaceholderView:(id)arg2;
- (void)playerViewControllerContentViewDidChangeVideoGravity:(id)arg1;
- (void)playerViewControllerContentViewDidLayoutSubviews:(id)arg1;
- (void)playerViewControllerContentViewDidMoveToSuperviewOrWindow:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })playerViewControllerContentViewEdgeInsetsForLetterboxedVideo:(id)arg1;
- (bool)playerViewControllerContentViewHasActiveTransition:(id)arg1;
- (bool)playerViewControllerContentViewIsBeingTransitionedFromFullScreen:(id)arg1;
- (bool)playerViewControllerContentViewIsPlayingOnSecondScreen:(id)arg1;
- (long long)playerViewControllerContentViewPreferredPlaybackControlsLoadedStatus:(id)arg1;
- (bool)playerViewControllerContentViewShouldApplyAutomaticVideoGravity:(id)arg1;
- (bool)playerViewControllerHasInvalidViewControllerHierarchy;
- (bool)playerViewControllerIsBeingTransitionedWithResizing;
- (bool)playerViewControllerIsPresentedFullScreen;
- (bool)playerViewControllerIsPresentingFullScreen;
- (long long)preferredUnobscuredArea;
- (bool)prefersVolumeSliderExpanded;
- (bool)prominentPlayButtonCanShowPauseGlyph;
- (void)prominentPlayButtonTouchUpInside:(id)arg1;
- (id)remainingTimeFormatter;
- (bool)requiresLinearPlayback;
- (id)routeDetectorCoordinator;
- (id)routePickerAlertController;
- (void)routePickerViewDidEndPresentingRoutes:(id)arg1;
- (void)routePickerViewWillBeginPresentingRoutes:(id)arg1;
- (id)scrollViewObserver;
- (void)scrollViewObserverValuesDidChange:(id)arg1;
- (void)setAVRouteDetectorCoordinatorMultipleRoutesDetectedObserver:(id)arg1;
- (void)setAllowsEnteringFullScreen:(bool)arg1;
- (void)setCollapseExpandSliderAnimator:(id)arg1;
- (void)setContentViewBeingScrolledOrOffScreen:(bool)arg1;
- (void)setCoveringWindow:(bool)arg1;
- (void)setEntersFullScreenWhenPlaybackBegins:(bool)arg1;
- (void)setEntersFullScreenWhenTapped:(bool)arg1;
- (void)setHasPlaybackBegunSincePlayerControllerBecameReadyToPlay:(bool)arg1;
- (void)setHasSeekableLiveStreamingContent:(bool)arg1;
- (void)setIncludesVideoGravityButton:(bool)arg1;
- (void)setInlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused:(bool)arg1;
- (void)setLoadingIndicatorTimer:(id)arg1;
- (void)setLoadingIndicatorTimerDelay:(double)arg1;
- (void)setMultipleRoutesDetected:(bool)arg1;
- (void)setNowPlayingInfoControllerIfLoaded:(id)arg1;
- (void)setNowPlayingLoadingInfoDelayTimer:(id)arg1;
- (void)setPictureInPictureController:(id)arg1;
- (void)setPlayButtonHandlerForLazyPlayerLoading:(id /* block */)arg1;
- (void)setPlaybackControlsIncludeDisplayModeControls:(bool)arg1;
- (void)setPlaybackControlsIncludeStartContentTransitionButtons:(bool)arg1;
- (void)setPlaybackControlsIncludeTransportControls:(bool)arg1;
- (void)setPlaybackControlsIncludeVolumeControls:(bool)arg1;
- (void)setPlaybackControlsObservationController:(id)arg1;
- (void)setPlaybackControlsView:(id)arg1;
- (void)setPlaybackSuspendedForScrubbing:(bool)arg1;
- (void)setPlaybackViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPlayerController:(id)arg1;
- (void)setPlayerViewControllerHasInvalidViewControllerHierarchy:(bool)arg1;
- (void)setPlayerViewControllerIsBeingTransitionedWithResizing:(bool)arg1;
- (void)setPlayerViewControllerIsPresentedFullScreen:(bool)arg1;
- (void)setPlayerViewControllerIsPresentingFullScreen:(bool)arg1;
- (void)setPlayingOnSecondScreen:(bool)arg1;
- (void)setPreferredUnobscuredArea:(long long)arg1;
- (void)setPrefersVolumeSliderExpanded:(bool)arg1;
- (void)setRequiresLinearPlayback:(bool)arg1;
- (void)setResumingUpdates:(bool)arg1;
- (void)setRouteDetectorCoordinator:(id)arg1;
- (void)setRoutePickerAlertController:(id)arg1;
- (void)setScrollViewObserver:(id)arg1;
- (void)setScrubbingOrSeeking:(bool)arg1;
- (void)setShouldIgnoreTimeResolverUpdates:(bool)arg1;
- (void)setShouldPreventUserInteractionForContentTransition:(bool)arg1;
- (void)setShowsDoneButtonWhenFullScreen:(bool)arg1;
- (void)setShowsLoadingIndicator:(bool)arg1;
- (void)setShowsPictureInPictureButton:(bool)arg1;
- (void)setShowsPlaybackControls:(bool)arg1;
- (void)setShowsPlaybackControlsWhenInline:(bool)arg1;
- (void)setStartLeftwardContentTransitionButtonEnabled:(bool)arg1;
- (void)setStartRightwardContentTransitionButtonEnabled:(bool)arg1;
- (void)setTimeControlStatus:(long long)arg1;
- (void)setTimeResolver:(id)arg1;
- (void)setTurboModePlaybackControlsPlaceholderView:(id)arg1;
- (void)setUpdatesNowPlayingInfoCenter:(bool)arg1;
- (void)setVideoGravity:(id)arg1;
- (void)setVideoGravityButtonType:(long long)arg1;
- (void)setVolumeControlsCanShowSlider:(bool)arg1;
- (bool)shouldEnterFullScreenWhenPlaybackBegins;
- (bool)shouldIgnoreTimeResolverUpdates;
- (bool)shouldPreventUserInteractionForContentTransition;
- (bool)showsDoneButtonWhenFullScreen;
- (bool)showsLoadingIndicator;
- (bool)showsMediaSelectionButton;
- (bool)showsPictureInPictureButton;
- (bool)showsPlaybackControls;
- (bool)showsPlaybackControlsWhenInline;
- (bool)showsProminentPlayButton;
- (bool)showsRoutePickerView;
- (bool)showsSkipButtons;
- (bool)showsStartContentTransitionButtons;
- (bool)showsTransportControls;
- (void)skipButtonForcePressChanged:(id)arg1;
- (void)skipButtonLongPressEnded:(id)arg1;
- (void)skipButtonLongPressTriggered:(id)arg1;
- (void)skipButtonTouchUpInside:(id)arg1;
- (void)startContentTransitionButtonTouchUpInside:(id)arg1;
- (void)startUpdates;
- (double)targetTime;
- (long long)timeControlStatus;
- (id)timeResolver;
- (void)transportControls:(id)arg1 scrubberDidBeginScrubbing:(id)arg2;
- (void)transportControls:(id)arg1 scrubberDidEndScrubbing:(id)arg2;
- (void)transportControls:(id)arg1 scrubberDidScrub:(id)arg2;
- (void)transportControlsNeedsLayoutIfNeeded:(id)arg1;
- (id)turboModePlaybackControlsPlaceholderView;
- (void)turboModePlaybackControlsPlaceholderViewDidLoad:(id)arg1;
- (id)turboModePlaybackControlsVisibilityItem;
- (bool)updatesNowPlayingInfoCenter;
- (id)videoGravity;
- (long long)videoGravityButtonType;
- (void)volumeButtonLongPressTriggered:(id)arg1;
- (void)volumeButtonPanChanged:(id)arg1;
- (void)volumeButtonTapTriggered:(id)arg1;
- (id)volumeController;
- (bool)volumeControlsCanShowSlider;
- (id)volumeControlsContainerVisibilityItem;
- (void)volumeSliderValueDidChange:(id)arg1;

@end
