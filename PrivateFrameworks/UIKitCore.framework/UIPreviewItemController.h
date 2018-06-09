/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPreviewItemController : NSObject <UIInteractionProgressObserver, UIPreviewInteractionControllerDelegate> {
    bool  _contentManagedByClient;
    <UIPreviewItemDelegate> * _delegate;
    bool  _interactionInProgress;
    double  _lastPreviewIndicatorAnimationTimestamp;
    MLULookupItem * _lookupItem;
    UIViewController * _presentedViewController;
    UIViewController * _presentingViewController;
    NSDictionary * _previewData;
    double  _previewIndicatorAnimationTargetAlpha;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previewIndicatorBoundingRect;
    CADisplayLink * _previewIndicatorDisplayLink;
    UIImageView * _previewIndicatorImageView;
    UIView * _previewIndicatorSnapshotView;
    bool  _previewIndicatorUsesStandardAnimation;
    UIView * _previewIndicatorView;
    UIPreviewInteractionController * _previewInteractionController;
    UIPreviewItemController * _strongSelf;
    long long  _type;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIPreviewItemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool interactionInProgress;
@property (nonatomic, readonly) UIGestureRecognizer *presentationGestureRecognizer;
@property (nonatomic, readonly) UIGestureRecognizer *presentationSecondaryGestureRecognizer;
@property (nonatomic, readonly) UIViewController *presentedViewController;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (nonatomic, readonly) NSDictionary *previewData;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (bool)_isMobileSafariRestricted;
- (bool)_shouldCancelPreviewWithNegativeFeedback;
- (void)clearPreviewIndicator;
- (void)dealloc;
- (id)delegate;
- (id)gestureRecognizers;
- (id)init;
- (id)initWithView:(id)arg1;
- (bool)interactionInProgress;
- (void)interactionProgress:(id)arg1 didEnd:(bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (bool)performsCustomCommitTransitionForPreviewInteractionController:(id)arg1;
- (bool)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1;
- (void)preparePreviewIndicatorViewInSourceView:(id)arg1 updateScreen:(bool)arg2;
- (id)presentationGestureRecognizer;
- (id)presentationSecondaryGestureRecognizer;
- (id)presentedViewController;
- (id)presentingViewController;
- (id)previewData;
- (void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(bool)arg3;
- (void)previewInteractionController:(id)arg1 interactionProgress:(id)arg2 forRevealAtLocation:(struct CGPoint { double x1; double x2; })arg3 inSourceView:(id)arg4 containerView:(id)arg5;
- (void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3;
- (void)previewInteractionController:(id)arg1 performCustomCommitForPreviewViewController:(id)arg2 completion:(id /* block */)arg3;
- (bool)previewInteractionController:(id)arg1 shouldUseStandardRevealTransformForPreviewingAtLocation:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3;
- (id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3 presentingViewController:(id*)arg4;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(struct CGPoint { double x1; double x2; })arg3 inSourceView:(id)arg4;
- (bool)previewInteractionControllerShouldPerformCompatibilityCommitTransition:(id)arg1;
- (id)previewViewControllerForPosition:(struct CGPoint { double x1; double x2; })arg1 inSourceView:(id)arg2 documentProperties:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setupPreviewIndicatorInSourceView:(id)arg1;
- (void)startInteraction;
- (void)stopInteraction;
- (long long)type;
- (void)updatePreviewIndicatorAnimation:(id)arg1;
- (id)view;

@end
