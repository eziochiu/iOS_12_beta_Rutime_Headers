/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STRootViewController : STListViewController <STRestrictionsPINControllerDelegate> {
    NSObject<STRootViewModelCoordinator> * _coordinator;
    STEnableScreenTimeGroupSpecifierProvider * _enableScreenTimeGroupSpecifierProvider;
    bool  _hasAlreadyEnteredPINForSession;
    bool  _shouldRefreshUsageData;
    PSSpecifier * _showingPinSpecifier;
    id  _showingPinTarget;
}

@property (nonatomic, readonly) NSObject<STRootViewModelCoordinator> *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) STEnableScreenTimeGroupSpecifierProvider *enableScreenTimeGroupSpecifierProvider;
@property (nonatomic) bool hasAlreadyEnteredPINForSession;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldRefreshUsageData;
@property (nonatomic, retain) PSSpecifier *showingPinSpecifier;
@property (nonatomic, retain) id showingPinTarget;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)coordinator;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didAcceptRemovePIN;
- (void)didCancelEnteringPIN;
- (id)enableScreenTimeGroupSpecifierProvider;
- (bool)hasAlreadyEnteredPINForSession;
- (id)init;
- (id)initWithRootViewModelCoordinator:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)restoreSpecifierTarget;
- (void)setEnableScreenTimeGroupSpecifierProvider:(id)arg1;
- (void)setHasAlreadyEnteredPINForSession:(bool)arg1;
- (void)setShouldRefreshUsageData:(bool)arg1;
- (void)setShowingPinSpecifier:(id)arg1;
- (void)setShowingPinTarget:(id)arg1;
- (bool)shouldRefreshUsageData;
- (void)showPINSheet:(id)arg1;
- (id)showingPinSpecifier;
- (id)showingPinTarget;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)validatePIN:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willResignActive;

@end
