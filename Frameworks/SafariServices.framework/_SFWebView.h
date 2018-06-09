/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFWebView : WKWebView <_SFDialogViewPresenting, _SFKillWebContentProcessUIActivityDelegate> {
    UIView * _clippingView;
    <_SFWebViewDelegate> * _delegate;
    _SFDialogView * _dialogView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitTestInsets;
    long long  _navigationGesturePolicy;
    UIImageView * _placeholderView;
    NSTimer * _placeholderViewRemovalTimer;
}

@property (nonatomic) UIView *clippingView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFWebViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIView *effectiveViewToLayOut;
@property (nonatomic, readonly, copy) NSString *evOrganizationName;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitTestInsets;
@property (nonatomic) long long navigationGesturePolicy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_close;
- (id)_enclosingViewForExposedRectComputation;
- (void)_setObscuredInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_updateNavigationGesturesAllowed;
- (bool)becomeFirstResponder;
- (id)clippingView;
- (void)dealloc;
- (id)delegate;
- (void)didEndFormControlInteraction;
- (void)dismissDialogView:(id)arg1 withAdditionalAnimations:(id /* block */)arg2 forDialogController:(id)arg3;
- (id)effectiveViewToLayOut;
- (id)evOrganizationName;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTestInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(id)arg2;
- (void)layoutSubviews;
- (long long)navigationGesturePolicy;
- (void)presentDialogView:(id)arg1 withAdditionalAnimations:(id /* block */)arg2 forDialogController:(id)arg3;
- (void)safariKillWebContentProcessUIActivityKillWebProcess:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (void)setAllowsBackForwardNavigationGestures:(bool)arg1;
- (void)setClippingView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHitTestInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNavigationGesturePolicy:(long long)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (int)webProcessIDForDialogController:(id)arg1;

@end
