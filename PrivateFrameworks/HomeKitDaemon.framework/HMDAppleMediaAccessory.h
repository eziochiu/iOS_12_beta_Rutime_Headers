/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAppleMediaAccessory : HMDMediaAccessory <HMFLogging> {
    HMDDevice * _device;
    bool  _deviceReachable;
    HMFPairingIdentity * _pairingIdentity;
    HMDRemoteLoginHandler * _remoteLoginHandler;
    HMDAccessorySettingGroup * _rootSettings;
    HMDSoftwareUpdate * _softwareUpdate;
    HMFSoftwareVersion * _softwareVersion;
    HMDAccessorySymptomHandler * _symptomsHandler;
    HMDTargetControlManager * _targetControlManager;
    HMFWiFiNetworkInfo * _wifiNetworkInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *device;
@property (getter=isDeviceReachable, nonatomic) bool deviceReachable;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HMFPairingIdentity *pairingIdentity;
@property (readonly) HMDRemoteLoginHandler *remoteLoginHandler;
@property (readonly) HMDAccessorySettingGroup *rootSettings;
@property (readonly) HMDSoftwareUpdate *softwareUpdate;
@property (readonly) HMFSoftwareVersion *softwareVersion;
@property (readonly) Class superclass;
@property (readonly) HMDAccessorySymptomHandler *symptomsHandler;
@property (nonatomic, retain) HMDTargetControlManager *targetControlManager;
@property (readonly) HMFWiFiNetworkInfo *wifiNetworkInfo;

+ (id)__deviceMediaRouteIdentifier;
+ (bool)hasMessageReceiverChildren;
+ (bool)shouldAcceptMessage:(id)arg1 home:(id)arg2 privilege:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__updateDeviceWithDeviceIdentifier:(id)arg1;
- (void)_fetchAvailableUpdate:(id)arg1;
- (void)_registerForMessages;
- (void)_relayRequestMessage:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_startUpdate:(id)arg1;
- (void)_updateSoftwareVersion:(id)arg1;
- (void)addRootSettings;
- (id)assistantObject;
- (void)autoConfigureTargetControllers;
- (id)backingStoreObjects:(long long)arg1;
- (void)configure:(id)arg1 msgDispatcher:(id)arg2 accessoryConfigureGroup:(id)arg3;
- (void)createPairingIdentity;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)deviceMonitor;
- (id)dumpSimpleState;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (void)handleAddedRootSettingsModel:(id)arg1 message:(id)arg2;
- (void)handleAddedSoftwareUpdateModel:(id)arg1 message:(id)arg2;
- (void)handleCurrentDeviceChanged:(id)arg1;
- (void)handleCurrentDeviceUpdated:(id)arg1;
- (void)handleCurrentNetworkChangedNotification:(id)arg1;
- (void)handleDeviceIsNotReachable:(id)arg1;
- (void)handleDeviceIsReachable:(id)arg1;
- (void)handleDeviceReachabilityChange:(bool)arg1;
- (void)handleDeviceUpdated;
- (void)handleRemovedSoftwareUpdateModel:(id)arg1 message:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (bool)isCurrentAccessory;
- (bool)isDeviceReachable;
- (bool)isRemotelyReachable;
- (id)messageReceiverChildren;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)notifyClientsOfUpdatedRootSettings:(id)arg1;
- (id)pairingIdentity;
- (void)populateModelObject:(id)arg1 version:(long long)arg2;
- (long long)reachableTransports;
- (void)reconfigureOnMediaSystemDisolve;
- (id)remoteLoginHandler;
- (id)remoteMessageDestination;
- (bool)requiresHomeAppForManagement;
- (id)rootSettings;
- (void)setDevice:(id)arg1;
- (void)setDeviceReachable:(bool)arg1;
- (void)setPairingIdentity:(id)arg1;
- (void)setRemotelyReachable:(bool)arg1;
- (void)setRootSettings:(id)arg1;
- (void)setSoftwareUpdate:(id)arg1;
- (void)setSoftwareVersion:(id)arg1;
- (void)setTargetControlManager:(id)arg1;
- (void)setWifiNetworkInfo:(id)arg1;
- (bool)shouldUpdateWithDevice:(id)arg1;
- (id)softwareUpdate;
- (id)softwareVersion;
- (void)startMonitoringReachability;
- (bool)supportsSettings;
- (bool)supportsSoftwareUpdate;
- (bool)supportsTargetControl;
- (bool)supportsUserManagement;
- (id)symptomsHandler;
- (id)targetControlManager;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (void)updateRootGroup:(id)arg1;
- (void)updateSoftwareUpdate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateWiFiNetworkInfo;
- (void)updateWithDevice:(id)arg1;
- (id)wifiNetworkInfo;

@end
