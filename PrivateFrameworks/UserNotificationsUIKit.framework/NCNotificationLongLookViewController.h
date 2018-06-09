/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationLongLookViewController : NCNotificationViewController <NCLongLookDefaultPresentationControllerDelegate, NCNotificationCustomContentDelegate, NCNotificationLongLookViewDelegate, PLExpandedPlatterDismissing, PLExpandedPlatterPresentable, PLExpandedPlatterPresentationControllerDelegate, PLExpandedPlatterPresentationViewDelegate, PLPreviewInteractionPresentable> {
    id  _cancelTouchesToken;
    <PLExpandedPlatterDismissing> * _dismisser;
    NCLongLookTransitioningDelegate * _longLookTransitionDelegate;
    id /* block */  _notificationTapBlock;
    <PLPreviewInteractionPresenting> * _presenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PLExpandedPlatterDismissing> *dismisser;
@property (readonly) unsigned long long hash;
@property (getter=_notificationTapBlock, setter=_setNotificationTapBlock:, nonatomic, copy) id /* block */ notificationTapBlock;
@property (nonatomic) <PLPreviewInteractionPresenting> *presenter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *viewForTouchContinuation;
@property (nonatomic, readonly) UIView *viewWithContent;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_expandedPlatterPresentationViewLoadingIfNecessary:(bool)arg1;
- (id)_extensionIdentifier;
- (void)_handleIconButton:(id)arg1;
- (void)_handleNotificationTap:(id)arg1;
- (id)_initWithNotificationRequest:(id)arg1 andPresentingNotificationViewController:(id)arg2 revealingAdditionalContentOnPresentation:(bool)arg3;
- (id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(bool)arg2;
- (void)_loadLookView;
- (id)_longLookViewIfLoaded;
- (id)_longLookViewLoadingIfNecessary;
- (id /* block */)_notificationTapBlock;
- (void)_notificationViewControllerViewDidLoad;
- (struct CGSize { double x1; double x2; })_preferredCustomContentSizeForSize:(struct CGSize { double x1; double x2; })arg1 parentContentContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_presentedLongLookViewController;
- (id)_presentingNotificationViewController;
- (id)_scrollView;
- (void)_setNotificationTapBlock:(id /* block */)arg1;
- (void)_setPreferredCustomContentSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_shouldPadScrollViewContentSizeHeight;
- (void)_updateTitleWithProvidedCustomContent;
- (void)_updateWithProvidedAuxiliaryOptionsContent;
- (void)_updateWithProvidedCustomContent;
- (void)_updateWithProvidedStaticContent;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;
- (void)contentProviderDismissCustomContent:(id)arg1 animated:(bool)arg2;
- (void)customContent:(id)arg1 didUpdateUserNotificationActions:(id)arg2;
- (void)customContentDidLoadExtension:(id)arg1;
- (void)customContentDidUpdateTitle:(id)arg1;
- (bool)dismissPresentedViewControllerAndClearNotification:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)dismisser;
- (void)expandedPlatterPresentable:(id)arg1 requestsDismissalWithTrigger:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })expandedPlatterPresentationController:(id)arg1 frameForTransitionViewInPresentationSuperview:(id)arg2;
- (id)expandedPlatterPresentationController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2;
- (bool)expandedPlatterPresentationControllerShouldAllowKeyboardOnAppearance:(id)arg1;
- (id)expandedPlatterViewForPresentationView:(id)arg1;
- (id)hideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)arg1;
- (bool)isContentExtensionVisible:(id)arg1;
- (bool)isLookStyleLongLook;
- (void)loadView;
- (void)notificationLongLookView:(id)arg1 willInteractWithURL:(id)arg2;
- (void)presentLongLookAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)presenter;
- (void)preserveInputViews;
- (bool)resignFirstResponder;
- (bool)restoreInputViews;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setCustomContentHomeAffordanceGestureRecognizer:(id)arg1;
- (void)setCustomContentHomeAffordanceVisible:(bool)arg1;
- (void)setDismisser:(id)arg1;
- (void)setNotificationRequest:(id)arg1;
- (void)setPresenter:(id)arg1;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForExpandedPlatterPresentationController:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (id)unhideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)arg1;
- (long long)viewControllerTransitionTypeForTransitionDelegate:(id)arg1;
- (id)viewForTouchContinuation;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)viewWithContent;

@end
