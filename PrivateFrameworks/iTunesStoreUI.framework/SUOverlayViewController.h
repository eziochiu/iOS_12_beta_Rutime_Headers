/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUOverlayViewController : SUViewController {
    NSMutableArray * _actionQueue;
    UIViewController * _activeViewController;
    UIViewController * _backViewController;
    bool  _canSwipeToDismiss;
    UIViewController * _frontViewController;
    SUOverlayTransition * _lastFlipTransition;
    struct CGSize { 
        double width; 
        double height; 
    }  _overlaySize;
    SUOverlayTransition * _presentationTransition;
    SUScriptWindowContext * _scriptWindowContext;
    double  _shadowOpacity;
    double  _shadowRadius;
    SUScriptFunction * _shouldDismissFunction;
    long long  _state;
    SUMaskedView * _subviewContainerView;
    SUTouchCaptureView * _touchCaptureView;
}

@property (getter=isActiveOverlay, nonatomic, readonly) bool activeOverlay;
@property (nonatomic, readonly) UIViewController *activeViewController;
@property (nonatomic, retain) UIViewController *backViewController;
@property (nonatomic) bool canSwipeToDismiss;
@property (nonatomic, retain) UIViewController *frontViewController;
@property (nonatomic, retain) SUMaskProvider *maskProvider;
@property (getter=isOnFront, nonatomic, readonly) bool onFront;
@property (nonatomic) struct CGSize { double x1; double x2; } overlaySize;
@property (nonatomic, retain) SUOverlayTransition *presentationTransition;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (nonatomic, retain) SUScriptFunction *shouldDismissFunction;

+ (struct CGSize { double x1; double x2; })defaultOverlaySize;

- (id)_activeViewController;
- (void)_applyDisplayProperties;
- (void)_applyOverlayConfiguration:(id)arg1;
- (void)_enqueueAction:(id)arg1;
- (void)_finishFlipAction:(id)arg1;
- (id)_flipTransition;
- (bool)_isControllerLoaded:(id)arg1;
- (void)_overlayActionDidFinish;
- (void)_overlayAnimationDidFinish;
- (void)_performFlipAction:(id)arg1;
- (void)_performFlipTransitionAction:(id)arg1;
- (void)_performNextAction;
- (void)_setActiveViewController:(id)arg1 updateInterface:(bool)arg2;
- (void)_setShadowVisible:(bool)arg1;
- (id)_subviewContainerView;
- (void)_tearDownTouchCaptureView;
- (void)_touchCaptureAction:(id)arg1;
- (id)activeViewController;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)backViewController;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canSwipeToDismiss;
- (id)copyArchivableContext;
- (void)dealloc;
- (void)flipWithTransition:(id)arg1;
- (id)frontViewController;
- (void)imagePageViewTapped:(id)arg1;
- (id)init;
- (id)initWithOverlayConfiguration:(id)arg1;
- (void)invalidateForMemoryPurge;
- (bool)isActiveOverlay;
- (bool)isOnFront;
- (void)loadView;
- (id)maskProvider;
- (struct CGSize { double x1; double x2; })overlaySize;
- (id)presentationTransition;
- (void)restoreArchivableContext:(id)arg1;
- (id)scriptWindowContext;
- (void)setBackViewController:(id)arg1;
- (void)setCanSwipeToDismiss:(bool)arg1;
- (void)setFrontViewController:(id)arg1;
- (void)setMaskProvider:(id)arg1;
- (void)setOverlaySize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPresentationTransition:(id)arg1;
- (void)setScriptWindowContext:(id)arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setShouldDismissFunction:(id)arg1;
- (double)shadowOpacity;
- (double)shadowRadius;
- (id)shouldDismissFunction;
- (bool)shouldExcludeFromNavigationHistory;
- (void)storePage:(id)arg1 finishedWithSuccess:(bool)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDismissWithTransition:(id)arg1;

@end