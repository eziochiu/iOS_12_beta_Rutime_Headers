/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
 */

@interface IMADockViewController : UIViewController <CKBrowserDragControllerTranscriptDelegate, CKBrowserSwitcherFooterViewDelegate, CKBrowserSwitcherViewControllerDelegate, CKBrowserTransitionCoordinatorDelegate, CKBrowserViewControllerSendDelegate> {
    CKBrowserSwitcherFooterView * _appStrip;
    CKBrowserSwitcherFooterViewDataSource * _appStripDataSource;
    IMBalloonPlugin * _currentBalloonPlugin;
    <IMADockViewControllerDelegate> * _delegate;
    CKBrowserSwitcherViewController * _switcherViewController;
}

@property (nonatomic, readonly) UIViewController *currentAppViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IMADockViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double minimizedDockHeight;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKBrowserSwitcherViewController *switcherViewController;

- (void).cxx_destruct;
- (void)_hideBrowserAnimated:(bool)arg1 clearCurrentPlugin:(bool)arg2 completion:(id /* block */)arg3;
- (bool)addSwitcherForPlugin:(id)arg1;
- (id)appViewControllerPresenter;
- (double)browserTransitionCoordinatorCollapsedContentHeight:(id)arg1;
- (void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
- (void)cleanupRunningApps;
- (void)commitPayload:(id)arg1;
- (void)commitSticker:(id)arg1;
- (void)commitSticker:(id)arg1 withDragTarget:(id)arg2;
- (id)currentAppViewController;
- (void)dealloc;
- (id)delegate;
- (void)dismiss;
- (void)dismissAndReloadInputViews:(bool)arg1;
- (void)dismissToKeyboard:(bool)arg1;
- (id)dragControllerTranscriptDelegate;
- (void)dragManager:(id)arg1 draggedItemWithTarget:(id)arg2;
- (int)dragManager:(id)arg1 dropAreaForDragTarget:(id)arg2;
- (void)dragManagerDidBeginDragging:(id)arg1;
- (void)dragManagerDidEndDragging:(id)arg1;
- (void)hideAppViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)hideBrowserAnimated:(bool)arg1;
- (id)imageViewForSticker:(id)arg1;
- (double)minimizedDockHeight;
- (void)notifyDelegateOfSelectedPlugin:(id)arg1;
- (void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)positionSwitcherOffscreen:(bool)arg1;
- (void)requestPresentationStyleExpanded:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocalUserIsTyping:(bool)arg1;
- (void)setSwitcherViewController:(id)arg1;
- (bool)shouldAlwaysShowAppTitle;
- (void)startEditingPayload:(id)arg1;
- (void)startEditingPayload:(id)arg1 dismiss:(bool)arg2;
- (double)switcherHeight;
- (void)switcherView:(id)arg1 didMagnify:(bool)arg2;
- (void)switcherView:(id)arg1 didSelectPluginAtIndex:(id)arg2;
- (id)switcherViewController;
- (void)switcherViewControllerDidCollapse:(id)arg1;
- (void)switcherViewControllerDidFinishSwitching:(id)arg1 toViewController:(id)arg2;
- (id)transitionsPresentationViewController;
- (void)updateAppStripFrame;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
