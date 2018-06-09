/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPFullScreenVideoViewController : UIViewController <UIGestureRecognizerDelegate> {
    AVPlayer * _player;
    AVPlayerController * _playerController;
    __AVPlayerLayerView * _playerLayerView;
    LPControlsSuppressingAVPlayerViewController * _playerViewController;
    UIPanGestureRecognizer * _slideGesture;
    LPVideoView * _sourceView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _swipeDownInitialBounds;
    PHSwipeDownTracker * _swipeDownTracker;
    CALayer * _videoMaskLayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateIn;
- (void)beginSlideToDismissTransitionWithRecognizer:(id)arg1;
- (void)cancelDismissalGestures;
- (void)completeSlideToDismissTransition;
- (void)completeTransitionWithInitialVelocity:(struct PHDisplayVelocity { double x1; double x2; double x3; double x4; })arg1 damping:(double)arg2 duration:(double)arg3 didComplete:(bool)arg4;
- (void)dismissNonInteractively;
- (void)fadeBackgroundToColor:(id)arg1 withDuration:(double)arg2 damping:(double)arg3;
- (id)initWithPlayer:(id)arg1 sourceView:(id)arg2;
- (void)installCornerMaskLayer;
- (void)installGestureRecognizers;
- (void)prepareForDisplayWithCompletionHandler:(id /* block */)arg1;
- (void)setUpFullScreenVideoViewControllerIfNeeded;
- (void)slideToDismissGestureRecognized:(id)arg1;
- (void)updateSlideToDismissTransitionWithRecognizer:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
