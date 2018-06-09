/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMActionSet : NSObject <HFFavoritable, HFPrettyDescription, HFReorderableHomeKitObject, HFStateDumpSerializable, HMFMessageReceiver, HMMutableApplicationData, HMObjectMerge, NSSecureCoding> {
    NSString * _actionSetType;
    HMApplicationData * _applicationData;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMThreadSafeMutableArrayCollection * _currentActions;
    HMDelegateCaller * _delegateCaller;
    bool  _executionInProgress;
    HMHome * _home;
    NSDate * _lastExecutionDate;
    HMFMessageDispatcher * _msgDispatcher;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, readonly, copy) NSString *actionSetType;
@property (nonatomic, readonly, copy) NSSet *actions;
@property (nonatomic, readonly) HMApplicationData *applicationData;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *currentActions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (getter=isExecuting, nonatomic, readonly) bool executing;
@property (nonatomic) bool executionInProgress;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDate *hf_dateAdded;
@property (nonatomic, readonly, copy) NSString *hf_displayName;
@property (nonatomic, readonly) bool hf_hasSetFavorite;
@property (nonatomic, readonly) <HFIconDescriptor> *hf_iconDescriptor;
@property (nonatomic, readonly) bool hf_isFavorite;
@property (nonatomic, readonly) bool hf_requiresDeviceUnlock;
@property (nonatomic, readonly) bool hf_shouldShowInFavorites;
@property (nonatomic) HMHome *home;
@property (nonatomic, readonly, copy) NSDate *lastExecutionDate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_configure:(id)arg1 messageDispatcher:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4;
- (void)_handleActionAddedNotification:(id)arg1;
- (void)_handleActionRemovedNotification:(id)arg1;
- (void)_handleActionSetExecutedNotification:(id)arg1;
- (void)_handleActionSetRenamedNotification:(id)arg1;
- (void)_handleActionSetStartExecutionNotification:(id)arg1;
- (void)_handleActionUpdatedNotification:(id)arg1;
- (void)_invalidate;
- (id)_lookupActionWithInfo:(id)arg1;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)_removeAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_unconfigure;
- (void)_updateAction:(id)arg1 changes:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)actionSetType;
- (id)actions;
- (void)addAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)applicationData;
- (id)clientQueue;
- (id)currentActions;
- (void)dealloc;
- (id)delegateCaller;
- (void)encodeWithCoder:(id)arg1;
- (bool)executionInProgress;
- (id)home;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 type:(id)arg2 uuid:(id)arg3;
- (bool)isExecuting;
- (id)lastExecutionDate;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)name;
- (id)propertyQueue;
- (void)removeAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setApplicationData:(id)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setCurrentActions:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setExecutionInProgress:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setLastExecutionDate:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateApplicationData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_standardIconDescriptorForActionSetType:(id)arg1;

- (id)hf_affectedCharacteristics;
- (id)hf_affectedServices;
- (bool)hf_affectsServiceWithIdentifier:(id)arg1;
- (id)hf_dateAdded;
- (id)hf_displayName;
- (bool)hf_hasSetFavorite;
- (id)hf_iconDescriptor;
- (bool)hf_isAnonymous;
- (bool)hf_isFavorite;
- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (bool)hf_requiresDeviceUnlock;
- (id)hf_serializedStateDumpRepresentation;
- (bool)hf_shouldShowInFavorites;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_updateIconDescriptor:(id)arg1;
- (id)hf_updateIsFavorite:(bool)arg1;

@end
