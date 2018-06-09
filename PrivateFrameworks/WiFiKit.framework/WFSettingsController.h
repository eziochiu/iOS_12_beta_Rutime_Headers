/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFSettingsController : NSObject <WFNetworkSettingsViewControllerDataCoordinator> {
    bool  _cloudSyncRunning;
    WFNetworkSettingsConfig * _config;
    bool  _currentNetwork;
    <WFSettingsControllerDelegate> * _delegate;
    WFIPMonitor * _ipMonitor;
    bool  _monitorIPChanges;
    WFNetworkScanRecord * _network;
    WFMutableNetworkProfile * _profile;
    NSOperationQueue * _queue;
    NSSet * _recommendations;
    WFNetworkSettingsViewController * _settingsViewController;
}

@property (nonatomic) bool cloudSyncRunning;
@property (nonatomic, retain) WFNetworkSettingsConfig *config;
@property (nonatomic) bool currentNetwork;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFSettingsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFIPMonitor *ipMonitor;
@property (nonatomic) bool monitorIPChanges;
@property (nonatomic, retain) WFNetworkScanRecord *network;
@property (nonatomic, retain) WFMutableNetworkProfile *profile;
@property (nonatomic, retain) NSOperationQueue *queue;
@property (nonatomic, retain) NSSet *recommendations;
@property (nonatomic, retain) WFNetworkSettingsViewController *settingsViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_baseConfigForNetwork:(id)arg1 current:(bool)arg2;
- (void)_ipStateDidChange:(id)arg1;
- (id)_profileForNetwork:(id)arg1;
- (void)_refreshSettingsConfig:(id)arg1;
- (void)_startMontoringIPChanges;
- (void)_stopMonitoringIPChanges;
- (bool)cloudSyncRunning;
- (id)config;
- (bool)currentNetwork;
- (void)dealloc;
- (id)delegate;
- (id)initWithNetwork:(id)arg1 ipMonitor:(id)arg2 recommendations:(id)arg3 currentNetwork:(bool)arg4;
- (id)initWithNetwork:(id)arg1 networkProfile:(id)arg2 ipMonitor:(id)arg3 recommendations:(id)arg4 currentNetwork:(bool)arg5 delegate:(id)arg6;
- (id)ipMonitor;
- (bool)monitorIPChanges;
- (id)network;
- (void)networkSettingsViewController:(id)arg1 saveAutoJoinEnabed:(bool)arg2;
- (void)networkSettingsViewController:(id)arg1 saveAutoLoginEnabed:(bool)arg2;
- (void)networkSettingsViewController:(id)arg1 saveConfig:(id)arg2 errorHandler:(id /* block */)arg3;
- (id)profile;
- (id)queue;
- (id)recommendations;
- (void)setCloudSyncRunning:(bool)arg1;
- (void)setConfig:(id)arg1;
- (void)setCurrentNetwork:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIpMonitor:(id)arg1;
- (void)setMonitorIPChanges:(bool)arg1;
- (void)setNetwork:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRecommendations:(id)arg1;
- (void)setSettingsViewController:(id)arg1;
- (id)settingsViewController;

@end