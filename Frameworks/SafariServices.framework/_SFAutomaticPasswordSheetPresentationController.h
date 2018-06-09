/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFAutomaticPasswordSheetPresentationController : UIPresentationController {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentKeyboardFrame;
    UIView * _dimmingView;
}

- (void).cxx_destruct;
- (void)_animateAuthenticationSheetWithDuration:(double)arg1 keyboardBeginFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 keyboardEndFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_animateSheetWithKeyboardNotification:(id)arg1;
- (id)_presentedSheetViewController;
- (void)containerViewWillLayoutSubviews;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;

@end
