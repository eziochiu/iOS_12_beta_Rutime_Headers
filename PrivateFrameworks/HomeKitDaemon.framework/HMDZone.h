/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDZone : HMFObject <HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding> {
    NSMutableDictionary * _currentRooms;
    HMDHome * _home;
    HMFMessageDispatcher * _msgDispatcher;
    NSString * _name;
    NSMutableArray * _roomUUIDs;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSMutableDictionary *currentRooms;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableArray *roomUUIDs;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)hasMessageReceiverChildren;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_checkForAddValidity:(id)arg1 room:(id*)arg2;
- (void)_handleAddRoom:(id)arg1;
- (void)_handleRemoveRoom:(id)arg1;
- (void)_handleRename:(id)arg1;
- (id)_handleRenameZoneTransaction:(id)arg1 error:(id*)arg2;
- (id)_handleSetRoomsZoneTransaction:(id)arg1 error:(id*)arg2;
- (void)_registerForMessages;
- (id)assistantObject;
- (id)backingStoreObjects:(long long)arg1;
- (void)configure:(id)arg1 queue:(id)arg2;
- (id)currentRooms;
- (void)dealloc;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3 queue:(id)arg4;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)msgDispatcher;
- (id)name;
- (void)removeRoom:(id)arg1;
- (id)roomUUIDs;
- (id)roomWithName:(id)arg1;
- (id)roomWithUUID:(id)arg1;
- (id)rooms;
- (void)setCurrentRooms:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRoomUUIDs:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)updateZoneWithModel:(id)arg1 message:(id)arg2;
- (id)url;
- (id)uuid;
- (id)workQueue;

@end
