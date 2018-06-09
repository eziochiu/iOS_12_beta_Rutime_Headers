/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDModeAssertion : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    DNDModeAssertionDetails * _details;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) DNDModeAssertionDetails *details;
@property (nonatomic, readonly, copy) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)details;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 startDate:(id)arg2 details:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)startDate;

@end
