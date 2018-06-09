/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMMediaSystemComponent : NSObject <HMFLogging, HMObjectMerge, NSCopying, NSMutableCopying, NSSecureCoding> {
    HMAccessory * _accessory;
    HMMediaProfile * _mediaProfile;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMMediaSystemRole * _role;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic) HMAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMMediaProfile *mediaProfile;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) HMMediaSystemRole *role;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)logCategory;
+ (id)mediaSystemComponentWithDictionary:(id)arg1 home:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_invalidate;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_updateAccessoryReference:(id)arg1;
- (id)accessory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaProfile:(id)arg1 role:(id)arg2;
- (id)initWithUUID:(id)arg1 mediaProfile:(id)arg2 role:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)mediaProfile;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)propertyQueue;
- (id)role;
- (id)serialize;
- (void)setAccessory:(id)arg1;
- (void)setRole:(id)arg1;
- (id)uniqueIdentifier;
- (id)uuid;

@end
