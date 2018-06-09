/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUZoomableGridTransition : NSObject <UIViewControllerInteractiveTransitioning> {
    UICollectionViewTransitionLayout * __transitionLayout;
    NSIndexPath * _anchorItemIndexPath;
    UICollectionView * _collectionView;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentInteractiveCenterOffset;
    double  _currentInteractiveProgress;
    bool  _interactive;
    unsigned long long  _originZoomLevel;
    unsigned long long  _targetZoomLevel;
    <UIViewControllerContextTransitioning> * _transitionContext;
    unsigned long long  _transitionState;
    PUMomentsZoomLevelManager * _zoomLevelManager;
}

@property (setter=_setTransitionLayout:, nonatomic, retain) UICollectionViewTransitionLayout *_transitionLayout;
@property (nonatomic, retain) NSIndexPath *anchorItemIndexPath;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) double completionSpeed;
@property (setter=_setCurrentInteractiveCenterOffset:, nonatomic) struct CGSize { double x1; double x2; } currentInteractiveCenterOffset;
@property (setter=_setCurrentInteractiveProgress:, nonatomic) double currentInteractiveProgress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInteractive, nonatomic, readonly) bool interactive;
@property (setter=_setOriginZoomLevel:, nonatomic) unsigned long long originZoomLevel;
@property (readonly) Class superclass;
@property (setter=_setTargetZoomLevel:, nonatomic) unsigned long long targetZoomLevel;
@property (nonatomic, retain) <UIViewControllerContextTransitioning> *transitionContext;
@property (setter=_setTransitionState:, nonatomic) unsigned long long transitionState;
@property (nonatomic, readonly) bool wantsInteractiveStart;
@property (nonatomic, readonly) PUMomentsZoomLevelManager *zoomLevelManager;

- (void).cxx_destruct;
- (void)_setCurrentInteractiveCenterOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)_setCurrentInteractiveProgress:(double)arg1;
- (void)_setOriginZoomLevel:(unsigned long long)arg1;
- (void)_setTargetZoomLevel:(unsigned long long)arg1;
- (void)_setTransitionLayout:(id)arg1;
- (void)_setTransitionState:(unsigned long long)arg1;
- (id)_transitionLayout;
- (id)anchorItemIndexPath;
- (void)cancelInteractiveTransitionAnimated;
- (struct CGSize { double x1; double x2; })currentInteractiveCenterOffset;
- (double)currentInteractiveProgress;
- (void)finishInteractiveTransitionAnimated;
- (id)initWithOriginLevel:(unsigned long long)arg1 targetLevel:(unsigned long long)arg2 zoomLevelManager:(id)arg3 interactive:(bool)arg4;
- (bool)isInteractive;
- (unsigned long long)originZoomLevel;
- (void)setAnchorItemIndexPath:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (unsigned long long)targetZoomLevel;
- (id)transitionContext;
- (unsigned long long)transitionState;
- (void)updateInteractiveTransitionForProgress:(double)arg1 centerOffset:(struct CGSize { double x1; double x2; })arg2;
- (id)zoomLevelManager;

@end
