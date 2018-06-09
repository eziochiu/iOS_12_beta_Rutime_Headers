/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCSourceViewController : UIViewController <DOCAppearanceProtocol, DOCHostSourceViewControllerProxy, UIPopoverPresentationControllerDelegate> {
    NSArray * _additionalTrailingNavigationBarButtonItems;
    DOCConfiguration * _configuration;
    bool  _editing;
    bool  _inPopoverMode;
    UINavigationController * _internalNavigationController;
    DOCAppearance * _lastAppearance;
    UIViewController<DOCRemoteAppearanceInterface> * _localViewController;
    _UIResilientRemoteViewContainerViewController * _remoteViewController;
    <DOCServiceSourceViewControllerProxy> * _serviceProxy;
    <DOCSourceViewControllerDelegate> * _sourceDelegate;
}

@property (nonatomic, retain) NSArray *additionalTrailingNavigationBarButtonItems;
@property (readonly) DOCConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <DOCServiceSourceViewControllerProxy> *serviceProxy;
@property (nonatomic) <DOCSourceViewControllerDelegate> *sourceDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_defaultPreferredContentSize;
- (void)_dismissViewController;
- (void)_toggleEditMode;
- (void)_updateAppearance;
- (void)_updateDefaultPreferredContentSizeWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateNavigationButtons;
- (id)additionalTrailingNavigationBarButtonItems;
- (id)configuration;
- (void)currentlySelectedLocationDidChange:(id)arg1;
- (void)didPickItem:(id)arg1;
- (void)didSelectLocation:(id)arg1;
- (void)embedViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isEditing;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (id)remoteInterface;
- (id)remoteViewController;
- (void)removeViewController:(id)arg1;
- (id)serviceProxy;
- (void)setAdditionalTrailingNavigationBarButtonItems:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setSourceDelegate:(id)arg1;
- (void)showLocation:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)sourceDelegate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAppearance:(id)arg1;
- (void)updatePreferredSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateViewsForParent:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
