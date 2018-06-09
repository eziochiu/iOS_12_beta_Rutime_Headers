/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlayerContentTransitioningView : UIScrollView <AVContentTransitioning, UIScrollViewDelegate> {
    AVPlayerLayerAndContentOverlayContainerView * _activeContentView;
    long long  _boundsOrContentSizeAdjustmentCount;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentMargins;
    <AVContentTransitioningDelegate> * _contentTransitioningDelegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frameForActiveContentView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frameForTransitioningContentView;
    NSString * _stateDescription;
    NSValue * _targetContentOffset;
    long long  _transitionDirection;
    bool  _transitionInteractive;
    double  _transitionProgress;
    long long  _transitionState;
    AVPlayerLayerAndContentOverlayContainerView * _transitioningContentView;
}

@property (nonatomic, readonly) AVPlayerLayerAndContentOverlayContainerView *activeContentView;
@property (nonatomic) long long boundsOrContentSizeAdjustmentCount;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentMargins;
@property (nonatomic) <AVContentTransitioningDelegate> *contentTransitioningDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameForActiveContentView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameForTransitioningContentView;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *stateDescription;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSValue *targetContentOffset;
@property (nonatomic, readonly) long long transitionDirection;
@property (getter=isTransitionInteractive, nonatomic) bool transitionInteractive;
@property (nonatomic, readonly) double transitionProgress;
@property (nonatomic, readonly) long long transitionState;
@property (nonatomic, readonly) AVPlayerLayerAndContentOverlayContainerView *transitioningContentView;

- (void).cxx_destruct;
- (bool)_canTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (id)_descriptionForState:(long long)arg1;
- (void)_ensureContentViews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameExcludingActiveContent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameExcludingTransitioningContent;
- (bool)_isAdjustingBoundsOrContentSize;
- (id)_makeStateDescription;
- (void)_performBoundsOrContentSizeAdjustment:(id /* block */)arg1;
- (void)_setTransitionState:(id)arg1 transitionDirection:(id)arg2 transitionProgress:(id)arg3;
- (void)_updateSizeAndContentFrame;
- (void)_updateTransitionStateIfPossible;
- (id)activeContentView;
- (long long)boundsOrContentSizeAdjustmentCount;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentMargins;
- (id)contentTransitioningDelegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForActiveContentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForTransitioningContentView;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 playerLayerView:(id)arg2;
- (bool)isTransitionInteractive;
- (void)performTransition:(long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setBoundsOrContentSizeAdjustmentCount:(long long)arg1;
- (void)setContentMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentTransitioningDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrameForActiveContentView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrameForTransitioningContentView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStateDescription:(id)arg1;
- (void)setTargetContentOffset:(id)arg1;
- (void)setTransitionInteractive:(bool)arg1;
- (id)stateDescription;
- (id)targetContentOffset;
- (long long)transitionDirection;
- (double)transitionProgress;
- (long long)transitionState;
- (id)transitioningContentView;

@end
