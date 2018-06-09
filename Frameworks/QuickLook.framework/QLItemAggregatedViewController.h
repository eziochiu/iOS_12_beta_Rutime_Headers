/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLItemAggregatedViewController : QLItemViewController {
    QLAppearance * _appearance;
    QLItemViewController * _currentPreviewViewController;
    <QLPreviewItemViewControllerDelegate> * _delegate;
    bool  _fullScreen;
    bool  _isAppearing;
    bool  _isVisible;
}

@property (nonatomic, retain) QLItemViewController *currentPreviewViewController;

- (void).cxx_destruct;
- (id)accessoryView;
- (id)appearance;
- (bool)automaticallyUpdateScrollViewContentInset;
- (bool)automaticallyUpdateScrollViewContentOffset;
- (bool)automaticallyUpdateScrollViewIndicatorInset;
- (void)beginPreviewHostAppearanceTransitionIfNeeded:(bool)arg1 animated:(bool)arg2;
- (void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)canEnterFullScreen;
- (bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;
- (bool)canPinchToDismiss;
- (bool)canShowNavBar;
- (bool)canShowToolBar;
- (bool)canSwipeToDismiss;
- (id)currentPreviewViewController;
- (id)delegate;
- (id)draggableView;
- (void)endPreviewHostAppearanceTransitionIfNeeded;
- (id)excludedToolbarButtonIdentifiersForTraitCollection:(id)arg1;
- (id)fullscreenBackgroundColor;
- (id)parallaxView;
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)previewBecameFullScreen:(bool)arg1 animated:(bool)arg2;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewIsAppearingWithProgress:(double)arg1;
- (void)previewWillAppear:(bool)arg1;
- (void)previewWillDisappear:(bool)arg1;
- (void)previewWillFinishAppearing;
- (id)printer;
- (id)registeredKeyCommands;
- (id)safeAreaLayoutGuide;
- (id)scrollView;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setCurrentPreviewViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;
- (bool)shouldRecognizeGestureRecognizer:(id)arg1;
- (void)showPreviewViewController:(id)arg1;
- (void)showPreviewViewController:(id)arg1 animatingWithCrossfade:(bool)arg2;
- (id)title;
- (id)toolbarButtonsForTraitCollection:(id)arg1;
- (void)transitionDidFinish:(bool)arg1 didComplete:(bool)arg2;
- (void)transitionDidStart:(bool)arg1;
- (void)transitionWillFinish:(bool)arg1 didComplete:(bool)arg2;
- (id)transitioningView;

@end
