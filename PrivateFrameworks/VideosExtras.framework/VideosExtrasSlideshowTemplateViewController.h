/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasSlideshowTemplateViewController : VideosExtrasTemplateViewController <VideosExtrasSlideshowViewControllerDataSource, VideosExtrasZoomingImageTransitionParticipant> {
    NSArray * _imageElements;
    bool  _overlayHidden;
    bool  _preventNavbarAutohide;
    VideosExtrasSlideshowViewController * _slideshowViewController;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *imageElements;
@property (nonatomic, retain) VideosExtrasSlideshowViewController *slideshowViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, readonly) IKSlideshowElement *templateElement;

- (void).cxx_destruct;
- (void)_firstImageLoadedHideNavigationBar;
- (void)_handleTap:(id)arg1;
- (void)_toggleVisibilityOfNavigationBar;
- (void)dealloc;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(bool)arg2;
- (id)imageElements;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (unsigned long long)numberOfImagesForSlideshowViewController:(id)arg1;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (bool)prefersStatusBarHidden;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)setImageElements:(id)arg1;
- (void)setSlideshowViewController:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (bool)shouldPerformZoomingImageTransitionFromImageElement:(id)arg1 toImageAtIndex:(unsigned long long)arg2;
- (bool)showsPlaceholder;
- (id)slideshowViewController;
- (void)slideshowViewController:(id)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)tapGestureRecognizer;
- (id)templateElement;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
