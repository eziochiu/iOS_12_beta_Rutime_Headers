/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXWidgetCompositionUIViewElementTile : NSObject <PXUIViewBasicTile, PXWidgetContentViewTransitionCoordinator> {
    UIView * __containerView;
    _PXWidgetCompositionUIViewElementTileTransitionContext * __currentTransitionContext;
    bool  __didEmbedContentView;
    <PXWidget> * _widget;
}

@property (nonatomic, readonly) UIView *_containerView;
@property (setter=_setCurrentTransitionContext:, nonatomic, retain) _PXWidgetCompositionUIViewElementTileTransitionContext *_currentTransitionContext;
@property (setter=_setDidEmbedContentView:, nonatomic) bool _didEmbedContentView;
@property (nonatomic, readonly) PXBasicTileAnimationOptions *animationOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) <PXWidget> *widget;

- (void).cxx_destruct;
- (id)_containerView;
- (id)_currentTransitionContext;
- (void)_didAnimateTileWithContext:(id)arg1;
- (void)_didCompleteTileAnimationWithContext:(id)arg1;
- (bool)_didEmbedContentView;
- (void)_embedContentView;
- (void)_setCurrentTransitionContext:(id)arg1;
- (void)_setDidEmbedContentView:(bool)arg1;
- (id)_willAnimateTileToGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 withOptions:(id)arg2;
- (void)animateAlongsideTransition:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)animationOptions;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 withUserData:(id)arg2;
- (id)initWithWidget:(id)arg1;
- (id)view;
- (id)widget;

@end