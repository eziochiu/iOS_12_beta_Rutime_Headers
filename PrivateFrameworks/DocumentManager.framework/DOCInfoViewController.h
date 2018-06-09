/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCInfoViewController : UINavigationController <DOCAppearanceProtocol, DOCHostInfoViewControllerProxy, UIPopoverPresentationControllerDelegate> {
    DOCConfiguration * _configuration;
    bool  _inPopoverMode;
    DOCItem * _item;
    DOCAppearance * _lastAppearance;
    UIViewController<DOCRemoteAppearanceInterface> * _localViewController;
    _UIResilientRemoteViewContainerViewController * _remoteViewController;
    <DOCServiceInfoViewControllerProxy> * _serviceProxy;
    bool  _showTagsOnly;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inPopoverMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doneButtonPressed:(id)arg1;
- (void)_updateForPresentation;
- (void)dismissViewController;
- (bool)inPopoverMode;
- (id)initWithConfiguration:(id)arg1 items:(id)arg2;
- (id)initWithConfiguration:(id)arg1 items:(id)arg2 showTagsOnly:(bool)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (id)remoteInterface;
- (id)remoteViewController;
- (void)setInPopoverMode:(bool)arg1;
- (void)updateAppearance:(id)arg1;
- (void)updatePreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
