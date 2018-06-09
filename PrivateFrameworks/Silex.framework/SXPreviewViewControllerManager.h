/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXPreviewViewControllerManager : NSObject <SXPreviewViewControllerManager> {
    <SXActionManager> * _actionManager;
    SXComponentController * _componentController;
    <SXComponentInteractionManager> * _componentInteractionManager;
    unsigned long long  _previewType;
    SXTangierController * _tangierController;
    SXViewport * _viewport;
    <SXPreviewViewControllerManagerDelegate> * delegate;
}

@property (nonatomic, readonly) <SXActionManager> *actionManager;
@property (nonatomic, readonly) SXComponentController *componentController;
@property (nonatomic, readonly) <SXComponentInteractionManager> *componentInteractionManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXPreviewViewControllerManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long previewType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXTangierController *tangierController;
@property (nonatomic, readonly) SXViewport *viewport;

- (void).cxx_destruct;
- (void)_previewingContext:(id)arg1 willDismissViewController:(id)arg2;
- (void)_previewingContext:(id)arg1 willPresentViewController:(id)arg2;
- (id)actionManager;
- (id)componentController;
- (id)componentInteractionManager;
- (id)componentInteractionViewControllerForLocation:(struct CGPoint { double x1; double x2; })arg1 previewContext:(id)arg2;
- (id)componentViewControllerForLocation:(struct CGPoint { double x1; double x2; })arg1 previewContext:(id)arg2;
- (id)delegate;
- (id)initWithTangierController:(id)arg1 componentController:(id)arg2 viewport:(id)arg3 componentInteractionManager:(id)arg4 actionManager:(id)arg5;
- (void)previewGestureDidChange:(id)arg1;
- (unsigned long long)previewType;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)setDelegate:(id)arg1;
- (void)setPreviewType:(unsigned long long)arg1;
- (bool)shouldStartPreviewing;
- (id)tangierController;
- (id)textLinkViewControllerForLocation:(struct CGPoint { double x1; double x2; })arg1 previewContext:(id)arg2;
- (id)viewport;
- (void)willEndPreviewing;
- (void)willStartPreviewing;

@end
