/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoViewController : AVPlayerViewController <AVPlayerViewControllerDelegatePrivate, NUAsyncContentViewControllerLoader> {
    <SVVideoViewControllerControlsVisibilityDelegate> * _controlsVisibilityDelegate;
    <SVVideoViewControllerFullscreenPresentationDelegate> * _fullscreenPresentationDelegate;
    UIView * _sourceViewForPresentation;
    UIView * _targetViewForDismissal;
    <SVVideoVisibilityManager> * _visibilityManager;
}

@property (nonatomic) <SVVideoViewControllerControlsVisibilityDelegate> *controlsVisibilityDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <SVVideoViewControllerFullscreenPresentationDelegate> *fullscreenPresentationDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIView *sourceViewForPresentation;
@property (readonly) Class superclass;
@property (nonatomic) UIView *targetViewForDismissal;
@property (nonatomic, readonly) <SVVideoVisibilityManager> *visibilityManager;

// Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo

- (void).cxx_destruct;
- (id)controlsVisibilityDelegate;
- (void)dismissToTargetView:(id)arg1 completion:(id /* block */)arg2;
- (id)fullscreenPresentationDelegate;
- (id)initWithVisiblityManager:(id)arg1;
- (id)playerViewController:(id)arg1 targetViewForDismissalAnimationWithProposedTargetView:(id)arg2;
- (void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewController:(id)arg1 willTransitionToVisibilityOfPlaybackControls:(bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)presentFromSourceView:(id)arg1 completion:(id /* block */)arg2;
- (void)setControlsVisibilityDelegate:(id)arg1;
- (void)setFullscreenPresentationDelegate:(id)arg1;
- (void)setSourceViewForPresentation:(id)arg1;
- (void)setTargetViewForDismissal:(id)arg1;
- (id)sourceViewForPresentation;
- (id)targetViewForDismissal;
- (id)visibilityManager;

// Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI

- (id)loadContentWithTimeoutTime:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
- (void)setVideoLoadingCoordinator:(id)arg1;

@end
