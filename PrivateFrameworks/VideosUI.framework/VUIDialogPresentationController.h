/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIDialogPresentationController : UIPresentationController {
    UIVisualEffectView * _backdropView;
    id /* block */  _completedAnimationBlock;
    struct CGSize { 
        double width; 
        double height; 
    }  _modalSize;
}

@property (nonatomic, readonly) UIVisualEffectView *backdropView;
@property (nonatomic, copy) id /* block */ completedAnimationBlock;
@property (nonatomic) struct CGSize { double x1; double x2; } modalSize;

- (void).cxx_destruct;
- (void)_layoutPresentedView;
- (void)_tapGesture:(id)arg1;
- (id)backdropView;
- (id /* block */)completedAnimationBlock;
- (void)dealloc;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (struct CGSize { double x1; double x2; })modalSize;
- (long long)presentationStyle;
- (void)presentationTransitionWillBegin;
- (void)setCompletedAnimationBlock:(id /* block */)arg1;
- (void)setModalSize:(struct CGSize { double x1; double x2; })arg1;

@end
