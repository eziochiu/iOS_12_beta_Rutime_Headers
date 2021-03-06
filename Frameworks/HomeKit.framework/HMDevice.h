/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMDevice : NSObject <HMObjectMerge, NSSecureCoding> {
    bool  _currentDevice;
    NSUUID * _idsIdentifier;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (getter=isCurrentDevice, readonly) bool currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *idsIdentifier;
@property (copy) NSString *name;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)IDSDeviceForIDSService:(id)arg1;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)idsIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCurrentDevice;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)propertyQueue;
- (void)setName:(id)arg1;
- (id)uniqueIdentifier;
- (id)uuid;

@end
