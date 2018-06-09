/* made by EzioChiu
   Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

@interface _NCWidgetViewController : UIViewController <NCSizeObservingViewDelegate, _NCWidgetViewController_Service_IPC> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _clientMarginInsets;
    bool  _clientUsesAutolayout;
    NSString * _containerIdentifier;
    UIViewController<NCWidgetProvidingPrivate> * _contentProvidingViewController;
    struct { 
        unsigned int implementsPerformUpdateWithCompletionHandler : 1; 
        unsigned int implementsMarginInsets : 1; 
        unsigned int implementsActiveDisplayModeDidChange : 1; 
        unsigned int implementsDidBecomeForeground : 1; 
        unsigned int implementsVisibleFrameDidChange : 1; 
    }  _contentProvidingViewControllerFlags;
    UIView * _contentView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialBounds;
    NSObject<OS_dispatch_queue> * _remoteViewControllerProxyQueue;
    bool  _snapshotTimestampsEnabled;
    UIScrollViewDelayedTouchesBeganGestureRecognizer * _touchDelayGestureRecognizer;
    long long  _visibilityState;
    NSString * _widgetIdentifier;
    NSMapTable * _wrappedAppearStatesToOpenTransactionIDs;
}

@property (getter=_clientMarginInsets, setter=_setClientMarginInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } clientMarginInsets;
@property (getter=_containerIdentifier, nonatomic, copy) NSString *containerIdentifier;
@property (getter=_contentProvidingViewController, nonatomic, retain) UIViewController<NCWidgetProvidingPrivate> *contentProvidingViewController;
@property (getter=_contentView, setter=_setContentView:, nonatomic, retain) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=_visibilityState, setter=_setVisibilityState:, nonatomic) long long visibilityState;
@property (getter=_widgetIdentifier, nonatomic, copy) NSString *widgetIdentifier;

+ (id)_exportedInterface;
+ (void)_reduceTransparencyDidChange:(id)arg1;
+ (id)_remoteViewControllerInterface;
+ (void)initialize;

- (void).cxx_destruct;
- (void)__openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;
- (void)__performUpdateWithReplyHandler:(id /* block */)arg1;
- (void)__requestEncodedLayerTreeToURL:(id)arg1 withCodingImageFormat:(id)arg2 withReplyHandler:(id /* block */)arg3;
- (void)__setActiveDisplayMode:(long long)arg1;
- (void)__setMaximumSize:(struct CGSize { double x1; double x2; })arg1 forDisplayMode:(long long)arg2;
- (void)__updateVisibilityState:(long long)arg1;
- (void)__updateVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withReplyHandler:(id /* block */)arg2;
- (long long)_clientLargestSupportedDisplayMode;
- (void)_clientLargestSupportedDisplayModeDidChange;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_clientMarginInsets;
- (double)_clientPreferredContentHeight;
- (double)_clientPreferredContentHeightPermittingAutolayout:(bool)arg1 didUseFittingSize:(bool*)arg2;
- (void)_closeTransactionWithAppearState:(int)arg1;
- (id)_containerIdentifier;
- (id)_contentProvidingViewController;
- (id)_contentView;
- (bool)_disableAutomaticKeyboardBehavior;
- (double)_effectiveHeightForRequestedHeight:(double)arg1;
- (void)_encodeLayerTreeToURL:(id)arg1 withCodingImageFormat:(id)arg2 withReplyHandler:(id /* block */)arg3;
- (void)_enqueueProxyRequest:(id /* block */)arg1;
- (void)_notifyContentProvidingViewControllerOfActiveDisplayModeChange;
- (void)_performUpdateWithCompletionHandler:(id /* block */)arg1;
- (void)_processInputItems:(id)arg1 initialActiveDisplayMode:(long long*)arg2;
- (void)_requestMarginInsets;
- (void)_requestPreferredViewHeight:(double)arg1;
- (void)_setActiveDisplayMode:(long long)arg1 unconditionallyNotifyingContentProvidingViewController:(bool)arg2;
- (void)_setClientMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setContentProvidingViewController:(id)arg1;
- (void)_setContentView:(id)arg1;
- (void)_setMaximumWidth:(double)arg1 forDisplayMode:(long long)arg2;
- (void)_setVisibilityState:(long long)arg1;
- (void)_setVisibilityState:(long long)arg1 force:(bool)arg2;
- (bool)_setVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_shouldRemoveViewFromHierarchyOnDisappear;
- (long long)_visibilityState;
- (id)_widgetExtensionContext;
- (id)_widgetIdentifier;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)dealloc;
- (void)delayed:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setContentProvidingViewController:(id)arg1;
- (void)setWidgetIdentifier:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)sizeObservingView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
