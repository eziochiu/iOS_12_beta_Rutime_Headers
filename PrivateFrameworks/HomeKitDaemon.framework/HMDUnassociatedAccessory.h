/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUnassociatedAccessory : HMFObject <HMFLogging, HMFMessageReceiver, NSSecureCoding> {
    long long  _associationOptions;
    HMAccessoryCategory * _category;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSString * _identifier;
    HMFMessageDispatcher * _messageDispatcher;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _uuid;
}

@property (readonly) long long associationOptions;
@property (retain) HMAccessoryCategory *category;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *identifier;
@property (nonatomic, readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (getter=isReachable, readonly) bool reachable;
@property (readonly) Class superclass;
@property (setter=setUUID:, copy) NSUUID *uuid;

+ (id)logCategory;
+ (id)otherAccessoryCategory;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleIdentify:(id)arg1;
- (void)_registerForMessages;
- (long long)associationOptions;
- (id)category;
- (id)clientQueue;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1 additionalDescription:(id)arg2;
- (id)dumpDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (void)identifyWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isReachable;
- (id)logIdentifier;
- (id)messageDestination;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)name;
- (void)notifyClientOfUpdatedCategory:(id)arg1;
- (void)notifyClientOfUpdatedName:(id)arg1;
- (id)propertyQueue;
- (void)setCategory:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)shortDescription;
- (void)updateCategoryWithCategoryIdentifier:(id)arg1;
- (id)uuid;

@end
