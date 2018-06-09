/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoProgressViewController : UIViewController <SVVideoTransitionObserver> {
    <SVVideoLoadingProgressObserving> * _loadingProgressObserver;
    <SVVideoLoadingProgressObserverFactory> * _loadingProgressObserverFactory;
    UIView * _loadingProgressView;
    UIViewPropertyAnimator * _playbackProgressAnimator;
    <SVVideoPlaybackProgressObserving> * _playbackProgressObserver;
    <SVVideoPlaybackProgressObserverFactory> * _playbackProgressObserverFactory;
    UIVisualEffectView * _playbackProgressView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SVVideoLoadingProgressObserving> *loadingProgressObserver;
@property (nonatomic, readonly) <SVVideoLoadingProgressObserverFactory> *loadingProgressObserverFactory;
@property (nonatomic, readonly) UIView *loadingProgressView;
@property (nonatomic, retain) UIViewPropertyAnimator *playbackProgressAnimator;
@property (nonatomic, retain) <SVVideoPlaybackProgressObserving> *playbackProgressObserver;
@property (nonatomic, readonly) <SVVideoPlaybackProgressObserverFactory> *playbackProgressObserverFactory;
@property (nonatomic, retain) UIVisualEffectView *playbackProgressView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithLoadingProgressObserverFactory:(id)arg1 playbackProgressObserverFactory:(id)arg2;
- (id)loadingProgressObserver;
- (id)loadingProgressObserverFactory;
- (id)loadingProgressView;
- (id)playbackProgressAnimator;
- (id)playbackProgressObserver;
- (id)playbackProgressObserverFactory;
- (id)playbackProgressView;
- (void)resetToPlaybackProgress:(double)arg1 animated:(bool)arg2;
- (void)setLoadingProgressObserver:(id)arg1;
- (void)setPlaybackProgressAnimator:(id)arg1;
- (void)setPlaybackProgressObserver:(id)arg1;
- (void)setPlaybackProgressView:(id)arg1;
- (void)startUpdatingLoadingProgressWithObserver:(id)arg1;
- (void)startUpdatingPlaybackProgressWithObserver:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
