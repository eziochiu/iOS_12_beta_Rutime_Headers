/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGalleryViewController : UIViewController <SKUIArtworkRequestDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate> {
    SKUIResourceLoader * _artworkLoader;
    NSMapTable * _componentArtworkRequests;
    NSObject<OS_dispatch_source> * _cycleTimer;
    <SKUIEmbeddedMediaViewDelegate> * _embeddedMediaDelegate;
    SKUIGalleryPageComponent * _galleryComponent;
    UIPageControl * _pageIndicator;
    UIPageViewController * _pageViewController;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <SKUIEmbeddedMediaViewDelegate> *embeddedMediaDelegate;
@property (nonatomic, readonly) SKUIGalleryPageComponent *galleryComponent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUIMediaComponent *selectedMediaComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishPaneAnimation;
- (id)_newViewControllerWithIndex:(long long)arg1;
- (id)_newViewWithMediaComponent:(id)arg1;
- (id)_selectedViewController;
- (void)_showNextPaneAnimated:(bool)arg1;
- (void)_startCycleTimer;
- (void)_stopCycleTimer;
- (void)_tapAction:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)dealloc;
- (id)embeddedMediaDelegate;
- (id)galleryComponent;
- (id)initWithGalleryComponent:(id)arg1 artworkLoader:(id)arg2;
- (void)loadArtworkForChildComponent:(id)arg1 reason:(long long)arg2 constraintWidth:(double)arg3;
- (void)loadView;
- (void)pageViewController:(id)arg1 didFinishAnimating:(bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)performActionForSelectedComponentAnimated:(bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)selectedMediaComponent;
- (void)setBackgroundColor:(id)arg1;
- (void)setEmbeddedMediaDelegate:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
