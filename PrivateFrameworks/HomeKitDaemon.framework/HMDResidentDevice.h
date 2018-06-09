/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDResidentDevice : HMFObject <HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging, NSSecureCoding> {
    long long  _batteryState;
    bool  _confirmed;
    HMDDevice * _device;
    HMDDeviceHandle * _deviceHandle;
    bool  _enabled;
    HMDHome * _home;
    NSUUID * _identifier;
    bool  _lowBattery;
    bool  _reachable;
    HMDResidentDeviceManager * _residentDeviceManager;
}

@property (nonatomic) long long batteryState;
@property (nonatomic, readonly) unsigned long long capabilities;
@property (getter=isConfirmed, nonatomic) bool confirmed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMDDevice *device;
@property (nonatomic, retain) HMDDeviceHandle *deviceHandle;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, copy) NSUUID *identifier;
@property (getter=isLowBattery, nonatomic) bool lowBattery;
@property (getter=isReachable, nonatomic) bool reachable;
@property (nonatomic) HMDResidentDeviceManager *residentDeviceManager;
@property (nonatomic, readonly) unsigned long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsMediaSystem;
@property (nonatomic, readonly) bool supportsSharedEventTriggerActivation;

+ (id)batteryStateAsString:(long long)arg1;
+ (id)logCategory;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__accountAddedDevice:(id)arg1;
- (void)__accountRemovedDevice:(id)arg1;
- (void)_handleResidentDeviceUpdateConfirmed:(bool)arg1;
- (bool)_handleResidentDeviceUpdateDeviceWithUUID:(id)arg1;
- (void)_handleResidentDeviceUpdateEnabled:(bool)arg1;
- (void)_residentDeviceModelUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (bool)_updateDevice:(id)arg1;
- (long long)batteryState;
- (unsigned long long)capabilities;
- (void)configureWithHome:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)device;
- (id)deviceHandle;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)home;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 home:(id)arg2;
- (id)initWithModel:(id)arg1 residentDeviceManager:(id)arg2;
- (bool)isConfirmed;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isLowBattery;
- (bool)isReachable;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)residentDeviceManager;
- (void)setBatteryState:(long long)arg1;
- (void)setConfirmed:(bool)arg1;
- (void)setDevice:(id)arg1;
- (void)setDeviceHandle:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLowBattery:(bool)arg1;
- (void)setReachable:(bool)arg1;
- (void)setResidentDeviceManager:(id)arg1;
- (id)shortDescription;
- (unsigned long long)status;
- (bool)supportsMediaSystem;
- (bool)supportsSharedEventTriggerActivation;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;

@end
