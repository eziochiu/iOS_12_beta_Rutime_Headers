/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STUsageDetailsViewModelCoordinator : NSObject <STUsageDetailsViewModelCoordinator> {
    NSString * _deviceIdentifier;
    NSDate * _lastUsageDataRefreshTime;
    NSString * _organizationIdentifier;
    <RMPersistenceControllerProtocol> * _persistence;
    unsigned long long  _usageDataRefreshReferenceCount;
    NSTimer * _usageDataRefreshTimer;
    NSNumber * _userDSID;
    STUsageDetailsViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastUsageDataRefreshTime;
@property (nonatomic, copy) NSString *organizationIdentifier;
@property (nonatomic, retain) <RMPersistenceControllerProtocol> *persistence;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long usageDataRefreshReferenceCount;
@property (nonatomic, retain) NSTimer *usageDataRefreshTimer;
@property (nonatomic, copy) NSNumber *userDSID;
@property (nonatomic, readonly) STUsageDetailsViewModel *viewModel;

- (void).cxx_destruct;
- (void)_persistenceStoreDidChange:(id)arg1;
- (void)_registerForPersistenceStoreNotifications;
- (void)dealloc;
- (id)deviceIdentifier;
- (id)initWithPersistenceController:(id)arg1 organizationIdentifier:(id)arg2 userDSID:(id)arg3 deviceIdentifier:(id)arg4;
- (id)lastUsageDataRefreshTime;
- (void)loadViewModelWithCompletionHandler:(id /* block */)arg1;
- (id)organizationIdentifier;
- (id)persistence;
- (void)refreshUsageData;
- (void)refreshUsageDataWithCompletion:(id /* block */)arg1;
- (void)scheduleRefreshUsageData;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setLastUsageDataRefreshTime:(id)arg1;
- (void)setOrganizationIdentifier:(id)arg1;
- (void)setPersistence:(id)arg1;
- (void)setUsageDataRefreshReferenceCount:(unsigned long long)arg1;
- (void)setUsageDataRefreshTimer:(id)arg1;
- (void)setUserDSID:(id)arg1;
- (void)startRefreshingUsageData;
- (void)stopRefreshingUsageData;
- (void)updateWithUser:(id)arg1;
- (void)updateWithUserDevicePairRecord:(id)arg1;
- (unsigned long long)usageDataRefreshReferenceCount;
- (id)usageDataRefreshTimer;
- (id)userDSID;
- (id)viewModel;

@end
