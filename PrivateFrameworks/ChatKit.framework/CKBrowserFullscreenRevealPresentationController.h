/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserFullscreenRevealPresentationController : UIPresentationController {
    CKBrowserFullscreenRevealDimmingView * _dimmingView;
    id /* block */  _dismissHandler;
    bool  _dismissing;
    bool  _presenting;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _presentingSnapshotFrame;
    UIView * _presentingSnapshotView;
    UIStatusBar * _statusBar;
    unsigned long long  _statusBarResizeMask;
    UIStatusBarWindow * _statusBarWindow;
}

@property (nonatomic, retain) CKBrowserFullscreenRevealDimmingView *dimmingView;
@property (nonatomic, copy) id /* block */ dismissHandler;
@property (getter=isDismissing, nonatomic) bool dismissing;
@property (getter=isPresenting, nonatomic) bool presenting;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } presentingSnapshotFrame;
@property (nonatomic, retain) UIView *presentingSnapshotView;
@property (nonatomic, retain) UIStatusBar *statusBar;
@property (nonatomic) unsigned long long statusBarResizeMask;
@property (nonatomic, retain) UIStatusBarWindow *statusBarWindow;

- (void).cxx_destruct;
- (void)_cleanupPresentation;
- (void)_configureViewsForDismissedState;
- (void)_configureViewsForPresentedState;
- (void)_prepareViewHierarchyForPresentation;
- (bool)_shouldGrabPresentersView;
- (id)_viewsToApplyCornerRadius;
- (id)_viewsToApplyTransform;
- (void)_willChangeStatusBarFrame:(id)arg1;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (void)dealloc;
- (id)dimmingView;
- (void)dimmingViewTapped:(id)arg1;
- (id /* block */)dismissHandler;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (bool)isDismissing;
- (bool)isPresenting;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentingSnapshotFrame;
- (id)presentingSnapshotView;
- (void)setDimmingView:(id)arg1;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)setDismissing:(bool)arg1;
- (void)setPresenting:(bool)arg1;
- (void)setPresentingSnapshotFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPresentingSnapshotView:(id)arg1;
- (void)setStatusBar:(id)arg1;
- (void)setStatusBarResizeMask:(unsigned long long)arg1;
- (void)setStatusBarWindow:(id)arg1;
- (bool)shouldRemovePresentersView;
- (id)statusBar;
- (unsigned long long)statusBarResizeMask;
- (id)statusBarWindow;

@end
