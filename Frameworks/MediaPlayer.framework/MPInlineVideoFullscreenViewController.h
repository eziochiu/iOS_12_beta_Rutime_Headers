/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPInlineVideoFullscreenViewController : UIViewController <MPSwipableViewDelegate, MPTransportControlsTarget, MPVideoOverlayDelegate, MPVolumeControllerDelegate> {
    unsigned long long  _activeOverlayUserEvents;
    bool  _disableTaps;
    UITapGestureRecognizer * _doubleTapGestureRecognizer;
    MPWeakTimer * _idleTimer;
    bool  _isAnimatingOverlay;
    MPAVItem * _item;
    UIActivityIndicatorView * _loadingIndicator;
    MPInlineVideoController * _masterController;
    MPVideoPlaybackOverlayView * _overlayView;
    UIPinchGestureRecognizer * _pinchGestureRecognizer;
    bool  _shouldForwardRotationEvents;
    bool  _statusBarWasHidden;
    MPSwipableView * _swipableView;
    UITapGestureRecognizer * _tapGestureRecognizer;
    MPVolumeController * _volumeController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPAVItem *item;
@property (nonatomic) MPInlineVideoController *masterController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_hideOverlayAnimated:(bool)arg1;
- (void)_hideOverlayDidEnd;
- (void)_overlayIdleTimerFired;
- (void)_showOverlayDidEnd;
- (void)_viewWasPinched:(id)arg1;
- (void)_viewWasTapped:(id)arg1;
- (void)cancelOverlayIdleTimer;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)hideLoadingIndicator;
- (id)init;
- (id)item;
- (void)loadView;
- (id)masterController;
- (void)overlay:(id)arg1 didBeginUserEvent:(unsigned long long)arg2;
- (void)overlay:(id)arg1 didCancelUserEvent:(unsigned long long)arg2;
- (void)overlay:(id)arg1 didEndUserEvent:(unsigned long long)arg2;
- (void)overlayTappedBackButton:(id)arg1;
- (void)overlayTappedFullscreenButton:(id)arg1;
- (bool)prefersStatusBarHidden;
- (void)prepareForTransitionFromFullscreen;
- (void)resetOverlayIdleTimer;
- (void)setItem:(id)arg1;
- (void)setMasterController:(id)arg1;
- (bool)shouldAutorotate;
- (void)showAlternateTracks;
- (void)showLoadingIndicator;
- (void)showOverlayAnimated:(bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)swipableViewHadActivity:(id)arg1;
- (bool)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)updateOverlayView;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
