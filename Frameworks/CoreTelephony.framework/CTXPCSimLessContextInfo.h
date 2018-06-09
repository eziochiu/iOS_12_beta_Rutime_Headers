/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTXPCSimLessContextInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountID;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)contextWithUUID:(id)arg1 andAccountID:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 andAccountID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)uuid;

@end
