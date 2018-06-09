/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICarrierSpacePlansController : PSListController <CTCarrierSpaceClientDelegate, RemoteUIControllerDelegate> {
    CTCarrierSpaceClient * _carrierSpaceClient;
    NSObject<OS_dispatch_queue> * _carrierSpaceQueue;
    RemoteUIController * _remoteUIController;
}

@property (nonatomic, retain) CTCarrierSpaceClient *carrierSpaceClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)carrierSpaceChanged;
- (id)carrierSpaceClient;
- (id)detailForPlanOption:(id)arg1;
- (void)dismissPlanDetail;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)moreDetailsButtonTapped:(id)arg1;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)setCarrierSpaceClient:(id)arg1;
- (void)simStatusChanged;
- (id)specifiers;
- (id)stringFromGroupCategory:(long long)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;

@end
