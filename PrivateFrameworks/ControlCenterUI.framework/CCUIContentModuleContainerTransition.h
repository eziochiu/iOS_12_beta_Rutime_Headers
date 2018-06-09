/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIContentModuleContainerTransition : NSObject <_UIPreviewInteractionViewControllerTransition> {
    bool  _appearanceTransition;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentRestOverrideFrame;
    CCUIContentModuleContainerViewController * _viewController;
}

@property (getter=isAppearanceTransition, nonatomic) bool appearanceTransition;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentRestOverrideFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) CCUIContentModuleContainerViewController *viewController;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRestOverrideFrame;
- (bool)isAppearanceTransition;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)setAppearanceTransition:(bool)arg1;
- (void)setContentRestOverrideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewController:(id)arg1;
- (void)transitionDidEnd:(bool)arg1;
- (id)viewController;

@end
