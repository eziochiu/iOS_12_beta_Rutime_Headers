/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleZoomOverlayTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    PXPeopleZoomOverlayVisualEffectView * _blurView;
    id  _contextObject;
    UIViewController<PXPeopleZoomOverlayTransitionEndPoint> * _detailViewController;
    bool  _isTransitionZooming;
    UIViewController<PXPeopleZoomOverlayTransitionEndPoint> * _masterViewController;
    unsigned long long  _transitionDirection;
}

@property (nonatomic, retain) PXPeopleZoomOverlayVisualEffectView *blurView;
@property (nonatomic, readonly) id contextObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIViewController<PXPeopleZoomOverlayTransitionEndPoint> *detailViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTransitionZooming;
@property (nonatomic, readonly) UIViewController<PXPeopleZoomOverlayTransitionEndPoint> *masterViewController;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long transitionDirection;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)blurView;
- (id)contextObject;
- (id)detailViewController;
- (id)init;
- (id)initWithMasterViewController:(id)arg1 detailViewController:(id)arg2 contextObject:(id)arg3;
- (bool)isTransitionZooming;
- (id)masterViewController;
- (void)setBlurView:(id)arg1;
- (void)setIsTransitionZooming:(bool)arg1;
- (void)setTransitionDirection:(unsigned long long)arg1;
- (unsigned long long)transitionDirection;
- (double)transitionDuration:(id)arg1;

@end
