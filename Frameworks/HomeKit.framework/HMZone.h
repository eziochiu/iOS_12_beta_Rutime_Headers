/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMZone : NSObject <HFPrettyDescription, HFStateDumpSerializable, HMFMessageReceiver, HMObjectMerge, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMThreadSafeMutableArrayCollection * _currentRooms;
    HMDelegateCaller * _delegateCaller;
    HMHome * _home;
    HMFMessageDispatcher * _msgDispatcher;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *currentRooms;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly, copy) NSArray *rooms;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addRoom:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_configure:(id)arg1 messageDispatcher:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4;
- (void)_handleRoomAddedNotification:(id)arg1;
- (void)_handleRoomRemovedNotification:(id)arg1;
- (void)_handleZoneRenamedNotification:(id)arg1;
- (void)_invalidate;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)_removeRoom:(id)arg1;
- (void)_removeRoom:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_unconfigure;
- (void)_updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addRoom:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)clientQueue;
- (id)currentRooms;
- (void)dealloc;
- (id)delegateCaller;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)name;
- (id)propertyQueue;
- (void)removeRoom:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)roomWithUUID:(id)arg1;
- (id)rooms;
- (void)setClientQueue:(id)arg1;
- (void)setCurrentRooms:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_serializedStateDumpRepresentation;

@end
