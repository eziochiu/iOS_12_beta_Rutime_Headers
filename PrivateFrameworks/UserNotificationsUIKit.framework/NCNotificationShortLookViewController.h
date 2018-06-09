/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationShortLookViewController : NCNotificationViewController <NCBannerPresentationTransitioningDelegateObserver, NCLongLookDefaultPresentationControllerDelegate, NCNotificationViewControllerObserving, PLExpandedPlatterPresentationControllerDelegate, PLPreviewInteractionManagerDelegate, PLPreviewInteractionPresenting> {
    UIView * _audioAccessoryView;
    NSHashTable * _audioAccessoryViewObservers;
    NCBannerPresentationTransitionDelegate * _bannerPresentationTransitionDelegate;
    UIView * _contextDefiningContainerView;
    UIViewController * _contextDefiningViewController;
    bool  _didScrollPresentLongLookViewController;
    NCNotificationViewController * _longLookNotificationViewController;
    PLPreviewInteractionManager * _previewInteractionManager;
    UIScrollView * _scrollView;
    NSDate * _tapBeginTime;
    UITapGestureRecognizer * _tapGesture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_didScrollPresentLongLookViewController, setter=_setDidScrollPresentLongLookViewController:, nonatomic) bool didScrollPresentLongLookViewController;
@property (readonly) unsigned long long hash;
@property (getter=_presentedLongLookViewController, nonatomic, readonly) NCNotificationViewController *presentedLongLookViewController;
@property (nonatomic, readonly) PLPreviewInteractionManager *previewInteractionManager;
@property (getter=_scrollView, nonatomic, retain) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *viewForPreview;

+ (long long)materialRecipeForLegibilitySettings:(id)arg1;
+ (unsigned long long)overlayMaterialOptionsForRecipe:(long long)arg1;

- (void).cxx_destruct;
- (void)_configureScrollViewIfNecessary;
- (bool)_didScrollPresentLongLookViewController;
- (id)_effectiveGroupName;
- (void)_expandCoalescedNotificationBundle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForTransitionViewInScrollView;
- (void)_handlePresentedContentDismissalWithTrigger:(long long)arg1;
- (void)_handleTapOnView:(id)arg1;
- (id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(bool)arg2;
- (bool)_isPresentingCustomContentProvidingViewController;
- (id)_legibilitySettings;
- (void)_loadExtensionIfNecessary;
- (void)_loadLookView;
- (void)_loadPresentationContainerViewIfNecessary;
- (id)_longLookNotificationViewController;
- (id)_newPreviewInteractionManager;
- (id)_notificationShortLookViewIfLoaded;
- (void)_notificationViewControllerViewDidLoad;
- (void)_presentLongLookAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)_presentLongLookForScrollAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)_presentLongLookViaPreviewInteraction:(id /* block */)arg1;
- (id)_presentedLongLookViewController;
- (id)_scrollView;
- (void)_setAudioAccessoryView:(id)arg1;
- (bool)_setDelegate:(id)arg1;
- (void)_setDidScrollPresentLongLookViewController:(bool)arg1;
- (bool)_setNotificationRequest:(id)arg1;
- (bool)_shouldPadScrollViewContentSizeHeight;
- (bool)_shouldPerformNotificationCoalescing;
- (bool)_tryDismissingShortLookInScrollView:(id)arg1;
- (void)_updateScrollViewContentSize;
- (void)_updateWithProvidedAuxiliaryOptionsContent;
- (void)_updateWithProvidedStaticContent;
- (void)addAudioAccessoryViewObserver:(id)arg1;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (unsigned long long)backgroundMaterialOptions;
- (id)containerViewForPreviewInteractionManager:(id)arg1;
- (void)customContent:(id)arg1 didLoadAudioAccessoryView:(id)arg2;
- (void)customContentDidLoadExtension:(id)arg1;
- (bool)didReceiveNotificationRequest:(id)arg1;
- (bool)dismissPresentedViewControllerAndClearNotification:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)expandAndPlayAudioMessage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })expandedPlatterPresentationController:(id)arg1 frameForTransitionViewInPresentationSuperview:(id)arg2;
- (bool)hasCommittedToPresentingCustomContentProvidingViewController;
- (bool)isCoalescedNotificationBundle;
- (bool)isContentExtensionVisible:(id)arg1;
- (bool)isShortLook;
- (long long)materialRecipe;
- (void)notificationViewControllerDidDismiss:(id)arg1;
- (void)notificationViewControllerDidPresent:(id)arg1;
- (void)notificationViewControllerWillDismiss:(id)arg1;
- (void)notificationViewControllerWillPresent:(id)arg1;
- (unsigned long long)overlayMaterialOptions;
- (void)presentLongLookAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)presentedViewControllerForPreviewInteractionManager:(id)arg1;
- (id)previewInteractionManager;
- (void)previewInteractionManager:(id)arg1 declinedDismissingPresentedContentWithTrigger:(long long)arg2;
- (void)previewInteractionManager:(id)arg1 shouldFinishInteractionWithCompletionBlock:(id /* block */)arg2;
- (void)previewInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
- (void)previewInteractionManagerDidEndUserInteraction:(id)arg1;
- (bool)previewInteractionManagerShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1;
- (bool)previewInteractionManagerShouldBeginInteraction:(id)arg1;
- (void)previewInteractionManagerWillBeginUserInteraction:(id)arg1;
- (void)removeAudioAccesoryViewObserver:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setCustomContentHomeAffordanceGestureRecognizer:(id)arg1;
- (void)setCustomContentHomeAffordanceVisible:(bool)arg1;
- (void)setInteractionEnabled:(bool)arg1;
- (void)setScrollView:(id)arg1;
- (bool)shouldRestorePresentingShortLookOnDismiss;
- (id)transitioningDelegateForPreviewInteractionManager:(id)arg1;
- (id)viewForPreview;
- (void)viewWillLayoutSubviews;
- (bool)wantsUseableContainerBoundsForTransitionWithDelegate:(id)arg1;

@end
