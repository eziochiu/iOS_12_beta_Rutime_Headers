/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUSenderIdentity : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    TUHandle * _handle;
    NSString * _localizedName;
    NSString * _localizedShortName;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) TUHandle *handle;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly, copy) NSString *localizedShortName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 handle:(id)arg2 localizedName:(id)arg3;
- (id)initWithUUID:(id)arg1 handle:(id)arg2 localizedName:(id)arg3 localizedShortName:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSenderIdentity:(id)arg1;
- (id)localizedName;
- (id)localizedShortName;

@end
