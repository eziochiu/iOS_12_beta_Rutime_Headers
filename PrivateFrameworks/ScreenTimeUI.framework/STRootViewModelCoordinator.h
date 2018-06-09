/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STRootViewModelCoordinator : NSObject <STRootViewModelCoordinator> {
    NSObject<STContentPrivacyViewModelCoordinator> * _contentPrivacyCoordinator;
    NSMutableDictionary * _coordinatorsByChildDSID;
    bool  _isLocalUser;
    RMPersistenceController * _persistenceController;
    NSArray * _selectedDeviceIdentifiers;
    NSObject<STTimeAllowancesViewModelCoordinator> * _timeAllowancesCoordinator;
    NSObject<STUsageDetailsViewModelCoordinator> * _usageDetailsCoordinator;
    NSNumber * _userDSID;
    NSString * _userName;
    STRootViewModel * _viewModel;
}

@property (readonly) NSObject<STContentPrivacyViewModelCoordinator> *contentPrivacyCoordinator;
@property (nonatomic, retain) NSMutableDictionary *coordinatorsByChildDSID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasShownMiniBuddy;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLocalUser;
@property (getter=isPasscodeEnabled, nonatomic, readonly) bool passcodeEnabled;
@property (nonatomic, retain) RMPersistenceController *persistenceController;
@property (nonatomic, copy) NSArray *selectedDeviceIdentifiers;
@property (readonly) Class superclass;
@property (readonly) NSObject<STTimeAllowancesViewModelCoordinator> *timeAllowancesCoordinator;
@property (readonly) NSObject<STUsageDetailsViewModelCoordinator> *usageDetailsCoordinator;
@property (nonatomic, copy) NSNumber *userDSID;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, retain) STRootViewModel *viewModel;

+ (id)keyPathsForValuesAffectingPasscodeEnabled;
+ (id)keyPathsForValuesAffectingUsageDetailsCoordinator;
+ (id)loadViewModelFromManagedObjectContext:(id)arg1 isLocalUser:(bool)arg2 userDSID:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (void)_persistenceStoreDidChange:(id)arg1;
- (void)_registerForPersistenceStoreNotifications;
- (void)clearUsageDataWithCompletionHandler:(id /* block */)arg1;
- (id)contentPrivacyCoordinator;
- (id)coordinatorForChild:(id)arg1;
- (id)coordinatorsByChildDSID;
- (bool)hasShownMiniBuddy;
- (id)init;
- (id)initWithPersistenceController:(id)arg1;
- (id)initWithPersistenceController:(id)arg1 userDSID:(id)arg2 selectedDevices:(id)arg3;
- (id)initWithUserDSID:(id)arg1 selectedDevices:(id)arg2;
- (bool)isLocalUser;
- (bool)isPasscodeEnabled;
- (void)loadViewModelRightNow;
- (void)loadViewModelWithCompletionHandler:(id /* block */)arg1;
- (id)organizationIdentifierForManagement;
- (id)organizationIdentifierForUsage;
- (id)persistenceController;
- (void)saveViewModel:(id)arg1;
- (id)selectedDeviceIdentifiers;
- (void)setCoordinatorsByChildDSID:(id)arg1;
- (void)setHasShownMiniBuddy:(bool)arg1;
- (void)setIsLocalUser:(bool)arg1;
- (void)setPIN:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setPIN:(id)arg1 screenTimeEnabled:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setPersistenceController:(id)arg1;
- (void)setScreenTimeEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setSelectedDeviceIdentifiers:(id)arg1;
- (void)setUserDSID:(id)arg1;
- (void)setUserName:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)timeAllowancesCoordinator;
- (id)usageDetailsCoordinator;
- (id)userDSID;
- (id)userName;
- (bool)validatePIN:(id)arg1;
- (id)viewModel;

@end
