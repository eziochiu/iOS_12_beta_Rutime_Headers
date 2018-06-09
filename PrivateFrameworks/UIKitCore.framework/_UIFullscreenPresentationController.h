/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFullscreenPresentationController : _UICurrentContextPresentationController {
    double  _counterRotatedAngle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _counterRotatedOriginalBounds;
    UIView * _counterRotatedView;
    long long  _originalOrientation;
    bool  _presentingViewControllerHandledCounterRotation;
    id /* block */  finalRotationBlock;
}

- (void).cxx_destruct;
- (void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3;
- (bool)_invokesDelegatesOnOrientationChange;
- (void)_placeCounterRotationViewWithView:(id)arg1 inWindow:(id)arg2 fromOrientation:(long long)arg3 toOrientation:(long long)arg4 force:(bool)arg5;
- (void)_removeCounterRotation;
- (void)_setPresentedViewController:(id)arg1;
- (bool)_shouldPresentedViewControllerControlStatusBarAppearance;
- (bool)_shouldRespectDefinesPresentationContext;
- (void)dealloc;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (long long)presentationStyle;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (bool)shouldPresentInFullscreen;
- (bool)shouldRemovePresentersView;

@end
