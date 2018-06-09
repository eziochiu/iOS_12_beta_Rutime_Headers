/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDTargetControllerManager : HMFObject <HMFLogging> {
    NSArray * _buttonConfiguration;
    bool  _configurationRefreshed;
    NSMutableSet * _configuredTargets;
    HMDHAPAccessory * _controller;
    NSString * _logID;
    unsigned char  _maximumTargets;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    unsigned long long  _ticksPerSecond;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSArray *buttonConfiguration;
@property (nonatomic) bool configurationRefreshed;
@property (nonatomic, retain) NSMutableSet *configuredTargets;
@property (nonatomic, readonly) HMDHAPAccessory *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logID;
@property (nonatomic) unsigned char maximumTargets;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *targetUUIDs;
@property (nonatomic) unsigned long long ticksPerSecond;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)__accessoryIsNotReachable:(id)arg1;
- (void)__accessoryIsReachable:(id)arg1;
- (void)__accessoryNameUpdated:(id)arg1;
- (void)__accessoryRemoved:(id)arg1;
- (void)__characteristicsChanged:(id)arg1;
- (void)__handleActiveIdentifierChanges:(id)arg1;
- (id)__refreshedConfiguration:(id)arg1;
- (void)_addTargets:(id)arg1;
- (void)_auditTargets:(id)arg1;
- (void)_configureTargetAccessories:(id)arg1 reason:(id)arg2 targetAccessories:(id)arg3 responseHandler:(id /* block */)arg4;
- (id)_dataForAddTargets:(id)arg1 outError:(id*)arg2;
- (id)_dataForListTargetsWithOutError:(id*)arg1;
- (id)_dataForRemoveTargets:(id)arg1 outError:(id*)arg2;
- (id)_dataForResetTargetsWithOutError:(id*)arg1;
- (id)_dataForUpdateTarget:(id)arg1 name:(id)arg2 buttonConfiguration:(id)arg3 outError:(id*)arg4;
- (void)_handleActiveIdentifierReadResponses:(id)arg1;
- (void)_handleConfigureTargets:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_listTargetsWithCompletionHandler:(id /* block */)arg1;
- (void)_notifyConfigurationRefresh:(id)arg1;
- (int)_parseSupportedTargetConfiguration:(id)arg1;
- (void)_readSupportedConfigurationWithCompletion:(id /* block */)arg1;
- (void)_refreshConfigurationWithCompletion:(id /* block */)arg1;
- (void)_registerForActiveIdentifierNotifications;
- (void)_removeTargets:(id)arg1;
- (void)_resetTargets;
- (void)_saveTargetUUIDs;
- (void)_updateName:(id)arg1 buttonConfiguration:(id)arg2 target:(id)arg3;
- (void)_writeData:(id)arg1 toCharacteristic:(id)arg2 completion:(id /* block */)arg3;
- (void)acknowledgeTargetControlService:(id)arg1 active:(bool)arg2;
- (void)addConfiguredTarget:(id)arg1;
- (void)addTargetAccessory:(id)arg1 buttonConfiguration:(id)arg2;
- (void)autoConfigureTargets;
- (id)buttonConfiguration;
- (bool)configurationRefreshed;
- (id)configuredTargets;
- (id)controller;
- (void)handleConfigureTargets:(id)arg1 responseHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithTargetControllerAccessory:(id)arg1 targets:(id)arg2;
- (void)invalidate;
- (id)logID;
- (id)logIdentifier;
- (unsigned char)maximumTargets;
- (id)propertyQueue;
- (void)refreshConfigurationWithCompletion:(id /* block */)arg1;
- (void)removeConfiguredTarget:(id)arg1;
- (void)removeTargetAccessory:(id)arg1;
- (void)resetConfiguredTargets;
- (void)setButtonConfiguration:(id)arg1;
- (void)setConfigurationRefreshed:(bool)arg1;
- (void)setConfiguredTargets:(id)arg1;
- (void)setMaximumTargets:(unsigned char)arg1;
- (void)setTicksPerSecond:(unsigned long long)arg1;
- (id)targetConfigurationMatchingAccessory:(id)arg1;
- (id)targetConfigurationMatchingIdentifier:(id)arg1;
- (id)targetUUIDs;
- (unsigned long long)ticksPerSecond;
- (void)updateButtonConfigurationForTarget:(id)arg1;
- (void)updateTargetAccessory:(id)arg1 name:(id)arg2 buttonConfiguration:(id)arg3;
- (void)updateTargets:(id)arg1;
- (id)workQueue;

@end
