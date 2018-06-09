/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding> {
    _HMDDeviceHandle * _internal;
}

@property (readonly, copy) HMDAccountHandle *accountHandle;
@property (readonly, copy) NSString *destination;
@property (getter=isGlobal, readonly) bool global;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) _HMDDeviceHandle *internal;
@property (getter=isLocal, readonly) bool local;

+ (id)deviceHandleForDestination:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountHandle;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternal:(id)arg1;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (bool)isGlobal;
- (bool)isLocal;
- (id)shortDescription;

@end
