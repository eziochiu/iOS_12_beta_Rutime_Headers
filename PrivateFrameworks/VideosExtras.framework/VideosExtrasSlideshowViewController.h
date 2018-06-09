/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasSlideshowViewController : UIViewController <CAAnimationDelegate, VideosExtrasZoomingImageTransitionParticipant> {
    bool  _animatingTransition;
    <VideosExtrasSlideshowViewControllerDataSource> * _dataSource;
    VideosExtrasConstrainedArtworkContainerView * _disappearingImageContainerView;
    VideosExtrasConstrainedArtworkContainerView * _imageContainerView;
    UIImage * _nextImage;
    double  _transitionInterval;
    unsigned long long  _transitionStyle;
    NSTimer * _transitionTimer;
    bool  _viewVisible;
    unsigned long long  _visibleImageIndex;
}

@property (getter=isAnimatingTransition, nonatomic) bool animatingTransition;
@property (nonatomic) <VideosExtrasSlideshowViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VideosExtrasConstrainedArtworkContainerView *disappearingImageContainerView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VideosExtrasConstrainedArtworkContainerView *imageContainerView;
@property (nonatomic, retain) UIImage *nextImage;
@property (readonly) Class superclass;
@property (nonatomic) double transitionInterval;
@property (nonatomic) unsigned long long transitionStyle;
@property (nonatomic, retain) NSTimer *transitionTimer;
@property (getter=isViewVisible, nonatomic) bool viewVisible;
@property (nonatomic) unsigned long long visibleImageIndex;

- (void).cxx_destruct;
- (void)_invalidateTransitionTimer;
- (void)_loadImageContainerViewIfAppropriateWithImage:(id)arg1;
- (unsigned long long)_numberOfImages;
- (void)_performDissolveTransition;
- (void)_performInstantaneousTransition;
- (void)_performPushTransition;
- (void)_performWipeTransition;
- (void)_prepareNextImageAndScheduleTransitionTimerIfAppropriate;
- (void)_reload;
- (void)_scheduleTransitionTimer;
- (void)_transitionDidComplete;
- (void)_transitionTimerDidFire:(id)arg1;
- (void)_transitionToNextImageIfAppropriate;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)dataSource;
- (void)dealloc;
- (id)disappearingImageContainerView;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(bool)arg2;
- (id)imageContainerView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isAnimatingTransition;
- (bool)isViewVisible;
- (id)nextImage;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)setAnimatingTransition:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDisappearingImageContainerView:(id)arg1;
- (void)setImageContainerView:(id)arg1;
- (void)setNextImage:(id)arg1;
- (void)setTransitionInterval:(double)arg1;
- (void)setTransitionStyle:(unsigned long long)arg1;
- (void)setTransitionTimer:(id)arg1;
- (void)setViewVisible:(bool)arg1;
- (void)setVisibleImageIndex:(unsigned long long)arg1;
- (double)transitionInterval;
- (unsigned long long)transitionStyle;
- (id)transitionTimer;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)visibleImageIndex;

@end
