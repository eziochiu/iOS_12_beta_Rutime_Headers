/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessorySymptomHandler : HMFObject <HMDAccessorySymptomsDelegate, HMDHomeMessageReceiver, HMFLogging, NSSecureCoding> {
    HMDAppleMediaAccessory * _accessory;
    bool  _canInitiateFix;
    long long  _fixState;
    NSSet * _localSymptoms;
    HMFMessageDispatcher * _msgDispatcher;
    HMDSymptomManager * _symptomManager;
    NSSet * _syncedSymptoms;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDAppleMediaAccessory *accessory;
@property (nonatomic) bool canInitiateFix;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long fixState;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *localSymptoms;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMDSymptomManager *symptomManager;
@property (nonatomic, retain) NSSet *syncedSymptoms;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_filteredAccessorySymptomsForSymptoms:(id)arg1;
- (id)_filteredMediaSystemSymptomsForSymptoms:(id)arg1;
- (void)_handleFixErrorMessage:(id)arg1;
- (void)_refreshCurrentDeviceSymptoms;
- (void)_registerMessages;
- (void)_updateBackingStoreModelWithNewSymptoms:(id)arg1;
- (void)_updateStateWithNewBroadcastedSymptoms:(id)arg1;
- (void)_updateStateWithNewLocalSymptoms:(id)arg1;
- (void)_updateWithNewCanInitiateFix:(bool)arg1;
- (id)accessory;
- (bool)canInitiateFix;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (long long)fixState;
- (void)handleAccessoryDeviceUpdated;
- (void)handleCurrentDeviceSymptomsChangedNotification:(id)arg1;
- (void)handleNewSyncedSymptoms:(id)arg1 message:(id)arg2;
- (id)initWithAccessory:(id)arg1 syncedSymptoms:(id)arg2;
- (id)initWithAccessory:(id)arg1 syncedSymptoms:(id)arg2 symptomManager:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)localSymptoms;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (void)refreshCurrentDeviceSymptoms;
- (void)setCanInitiateFix:(bool)arg1;
- (void)setFixState:(long long)arg1;
- (void)setLocalSymptoms:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setSyncedSymptoms:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)symptomManager;
- (void)symptomManager:(id)arg1 didChangeBroadcastedSymptoms:(id)arg2;
- (void)symptomManager:(id)arg1 didChangeCanInitiateFix:(bool)arg2;
- (void)symptomManager:(id)arg1 didChangeLocalSymptoms:(id)arg2;
- (id)syncedSymptoms;
- (id)uuid;
- (id)workQueue;

@end
