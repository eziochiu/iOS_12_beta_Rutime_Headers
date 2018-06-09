/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMAccessoryProfile : NSObject <HMFMessageReceiver, HMObjectMerge, NSSecureCoding> {
    HMAccessory * _accessory;
    _HMContext * _context;
    HMHome * _home;
    NSUUID * _profileUniqueIdentifier;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSArray * _services;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly, copy) NSUUID *profileUniqueIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) NSArray *services;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (id)accessory;
- (void)configureWithAccessory:(id)arg1 home:(id)arg2 context:(id)arg3;
- (id)context;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)home;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)profileUniqueIdentifier;
- (id)propertyQueue;
- (id)services;
- (void)setContext:(id)arg1;
- (id)uniqueIdentifier;

@end
