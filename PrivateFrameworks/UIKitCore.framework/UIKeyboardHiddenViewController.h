/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardHiddenViewController : UIViewController <UIInputViewControllerNeedSceneSize, UIPopoverPresentationControllerDelegate, UIViewControllerTransitioningDelegate> {
    _SFPasswordViewController * _autofillVC;
    unsigned int  _deferredContextID;
    NSString * _deferredDisplayUUID;
    bool  _focusWasDeferredBeforeDeactivation;
    bool  _isFocusDeferred;
    bool  _presentedAutofill;
    UIView * _sourceView;
}

@property (nonatomic, retain) _SFPasswordViewController *autofillVC;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool presentedAutofill;
@property (nonatomic) UIView *sourceView;
@property (readonly) Class superclass;

- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillDeactivate:(id)arg1;
- (id)_clientDeferralProperties;
- (id)_deferredPropertiesForClientContext:(unsigned int)arg1;
- (bool)_formSheetObeysContentContainerSize;
- (id)_hostDeferralProperties;
- (void)_localAuthenticationUIDismissed;
- (void)_localAuthenticationUIPresented;
- (void)_sceneDidChange;
- (void)_setDeferred:(bool)arg1 forDisplayUUID:(id)arg2;
- (void)_willChangeToFirstResponder:(id)arg1;
- (id)autofillVC;
- (long long)customModalPresentationStyle;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)passwordViewControllerDidFinish:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)presentAutofillVCWithAnimation:(bool)arg1;
- (void)presentSelfWithAnimation:(bool)arg1;
- (void)presentViewController:(bool)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (bool)presentedAutofill;
- (void)setAutofillVC:(id)arg1;
- (void)setPresentedAutofill:(bool)arg1;
- (void)setSourceView:(id)arg1;
- (bool)shouldPresentAsPopover;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (id)sourceView;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
