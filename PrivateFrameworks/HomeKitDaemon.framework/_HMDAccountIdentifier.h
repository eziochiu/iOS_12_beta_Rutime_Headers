/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface _HMDAccountIdentifier : HMFObject <NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
}

@property (getter=isAuthenticated, readonly) bool authenticated;
@property (readonly, copy) NSUUID *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isAuthenticated;
- (bool)isEqual:(id)arg1;

@end
