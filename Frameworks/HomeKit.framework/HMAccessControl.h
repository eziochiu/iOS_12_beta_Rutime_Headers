/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessControl : NSObject <NSSecureCoding> {
    unsigned long long  _cachedHash;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMUser * _user;
}

@property (readonly) unsigned long long cachedHash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property HMUser *user;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)cachedHash;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)propertyQueue;
- (void)setUser:(id)arg1;
- (id)user;

@end
