/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCContextInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountID;
    long long  _slotID;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) long long slotID;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)contextWithUUID:(id)arg1 andAccountID:(id)arg2 andSlot:(long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 andAccountID:(id)arg2 andSlot:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)slotID;
- (id)uuid;

@end
