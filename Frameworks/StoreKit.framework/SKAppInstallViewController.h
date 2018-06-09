/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKAppInstallViewController : UIViewController <SKStoreRemoteViewControllerDelegate> {
    NSDictionary * _parameters;
    _UIResilientRemoteViewContainerViewController * _remoteContainerViewController;
    SKStoreRemoteViewController * _remoteViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *parameters;
@property (nonatomic, retain) _UIResilientRemoteViewContainerViewController *remoteContainerViewController;
@property (nonatomic, retain) SKStoreRemoteViewController *remoteViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRemoteView;
- (void)_requestRemoteViewController;
- (void)_setupChildViewController:(id)arg1 animated:(bool)arg2;
- (bool)_viewControllerIsDescendent:(id)arg1 ofViewController:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithParameters:(id)arg1;
- (id)parameters;
- (id)remoteContainerViewController;
- (id)remoteViewController;
- (void)setParameters:(id)arg1;
- (void)setRemoteContainerViewController:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)storeRemoteViewController:(id)arg1 presentRequestedViewControllerWithIdentifier:(id)arg2;
- (void)storeRemoteViewControllerNeedsTabSelection:(id)arg1;
- (void)viewDidAppear:(bool)arg1;

@end
