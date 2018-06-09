/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMUser : NSObject <HFPrettyDescription, HFStateDumpSerializable, HMFLogging, HMFMessageReceiver, HMObjectMerge, NSSecureCoding> {
    HMAssistantAccessControl * _assistantAccessControl;
    _HMContext * _context;
    bool  _currentUser;
    <HMUserDelegatePrivate> * _delegate;
    HMHome * _home;
    HMHomeAccessControl * _homeAccessControl;
    NSString * _name;
    HMFPairingIdentity * _pairingIdentity;
    HMThreadSafeMutableArrayCollection * _pendingAccessoryInvitations;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _uniqueIdentifier;
    NSString * _userID;
    NSUUID * _uuid;
}

@property (copy) HMAssistantAccessControl *assistantAccessControl;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain) _HMContext *context;
@property (getter=isCurrentUser, nonatomic) bool currentUser;
@property (readonly, copy) NSString *debugDescription;
@property <HMUserDelegatePrivate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMHome *home;
@property (nonatomic, retain) HMHomeAccessControl *homeAccessControl;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, copy) NSString *name;
@property (copy) HMFPairingIdentity *pairingIdentity;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, copy) NSString *userID;
@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_configureWith:(id)arg1 context:(id)arg2;
- (id)_filterAccessoryInvitationsFromOutgoingInvitation:(id)arg1;
- (void)_handleUpdatedAssistantAccessControl:(id)arg1;
- (bool)_mergeWithNewAccessoryInvitations:(id)arg1 operations:(id)arg2;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)_unconfigure;
- (void)_updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)assistantAccessControl;
- (id)assistantAccessControlForHome:(id)arg1;
- (id)clientQueue;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)homeAccessControl;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4 accessControls:(id)arg5;
- (bool)isCurrentUser;
- (id)logIdentifier;
- (bool)mergePendingAccessoryInvitationsWithOutgoingInvitation:(id)arg1 operations:(id)arg2;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)name;
- (id)pairingIdentity;
- (id)pendingAccessoryInvitations;
- (id)propertyQueue;
- (void)setAssistantAccessControl:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentUser:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setHomeAccessControl:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPairingIdentity:(id)arg1;
- (void)setPendingAccessoryInvitationsWithOutgoingInvitation:(id)arg1;
- (void)setUserID:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateAssistantAccessControl:(id)arg1 forHome:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateHomeAccessControl:(bool)arg1 remoteAccess:(bool)arg2;
- (void)updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)userID;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_serializedStateDumpRepresentation;

@end
