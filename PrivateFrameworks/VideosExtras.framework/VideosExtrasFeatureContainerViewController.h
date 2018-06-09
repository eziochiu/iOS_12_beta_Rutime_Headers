/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasFeatureContainerViewController : UIViewController {
    double  _collectionViewHeight;
    VideosExtrasContext * _context;
    UIView * _menuBarView;
    NSLayoutConstraint * _overlayViewAdjustmentConstraint;
    UIViewController<VideosExtrasVideoPlaybackViewController> * _videoPlaybackViewController;
}

@property (nonatomic) double collectionViewHeight;
@property (nonatomic, readonly) VideosExtrasContext *context;
@property (nonatomic) UIView *menuBarView;
@property (nonatomic, retain) UIViewController<VideosExtrasVideoPlaybackViewController> *videoPlaybackViewController;

- (void).cxx_destruct;
- (void)_menuBarHeightChange:(id)arg1;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (double)collectionViewHeight;
- (id)context;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)menuBarView;
- (void)setCollectionViewHeight:(double)arg1;
- (void)setMenuBarView:(id)arg1;
- (void)setVideoPlaybackViewController:(id)arg1;
- (id)videoPlaybackViewController;
- (void)viewDidLoad;

@end
