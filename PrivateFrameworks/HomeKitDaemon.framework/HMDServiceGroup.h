/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDServiceGroup : HMFObject <HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding> {
    HMDApplicationData * _appData;
    HMDHome * _home;
    HMFMessageDispatcher * _msgDispatcher;
    NSString * _name;
    NSMutableDictionary * _serviceMapping;
    NSMutableArray * _serviceUUIDs;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) HMDApplicationData *appData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableDictionary *serviceMapping;
@property (nonatomic, retain) NSMutableArray *serviceUUIDs;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)hasMessageReceiverChildren;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleAddServiceRequest:(id)arg1;
- (void)_handleRemoveAppDataModel:(id)arg1 message:(id)arg2;
- (void)_handleRemoveServiceRequest:(id)arg1;
- (void)_handleRenameRequest:(id)arg1;
- (void)_handleUpdateAppDataModel:(id)arg1 message:(id)arg2;
- (id)_handleUpdateNameTransaction:(id)arg1 error:(id*)arg2;
- (id)_handleUpdateServicesTransaction:(id)arg1 error:(id*)arg2;
- (void)_registerForMessages;
- (void)_transactionServiceGroupUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)appData;
- (id)assistantObject;
- (id)backingStoreObjects:(long long)arg1;
- (void)configure:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (void)fixupServiceGroup;
- (void)fixupServicesForReplacementAccessory:(id)arg1;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3 queue:(id)arg4;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)msgDispatcher;
- (id)name;
- (void)removeService:(id)arg1;
- (void)removeServicesForAccessory:(id)arg1;
- (id)serviceMapping;
- (id)serviceUUIDs;
- (void)setAppData:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setServiceIfPresent:(id)arg1;
- (void)setServiceMapping:(id)arg1;
- (void)setServiceUUIDs:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)updateServiceGroupWithModel:(id)arg1 message:(id)arg2;
- (id)url;
- (id)uuid;
- (id)workQueue;

@end
