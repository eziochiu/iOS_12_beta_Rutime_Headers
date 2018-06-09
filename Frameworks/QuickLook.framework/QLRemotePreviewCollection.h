/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLRemotePreviewCollection : _UIRemoteViewController <QLPreviewCollectionProtocol> {
    QLRemotePreviewCollection * _accessoryViewController;
    bool  _allowInteractiveTransitions;
    QLPreviewCollectionHostContext * _hostContext;
    bool  _isAvailable;
    id  _request;
    <QLPreviewControllerStateProtocolHostOnly> * _stateManager;
}

@property (retain) QLRemotePreviewCollection *accessoryViewController;
@property (nonatomic) bool allowInteractiveTransitions;
@property (retain) QLPreviewCollectionHostContext *hostContext;
@property bool isAvailable;
@property (retain) id request;

- (void).cxx_destruct;
- (void)_presentViewControllerForError:(id)arg1;
- (id)accessoryView;
- (id)accessoryViewController;
- (bool)allowInteractiveTransitions;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4;
- (void)getPreviewCollectionUUIDWithCompletionHandler:(id /* block */)arg1;
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationDidEnterBackground:(bool)arg1;
- (id)hostContext;
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)invalidateService;
- (bool)isAvailable;
- (bool)isRemote;
- (void)keyCommandWasPerformed:(id)arg1;
- (void)keyCommandsWithCompletionHandler:(id /* block */)arg1;
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1;
- (void)prepareForActionSheetPresentationWithCompletionHandler:(id /* block */)arg1;
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(id /* block */)arg1;
- (id)request;
- (void)setAccessoryViewController:(id)arg1;
- (void)setAllowInteractiveTransitions:(bool)arg1;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(bool)arg2;
- (void)setHostContext:(id)arg1;
- (void)setIsAvailable:(bool)arg1;
- (void)setLoadingString:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(bool)arg3 useInteractiveTransition:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)tearDownTransition:(bool)arg1;
- (void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)toolbarButtonsForTraitCollection:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
