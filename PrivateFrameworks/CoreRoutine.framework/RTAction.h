/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTAction : NSObject <NSCopying, NSSecureCoding> {
    long long  _conditions;
    NSUUID * _identifier;
    NSString * _name;
}

@property (nonatomic, readonly) long long conditions;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)conditions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 conditions:(long long)arg2;
- (id)initWithName:(id)arg1 conditions:(long long)arg2 identifier:(id)arg3;
- (id)initWithType:(long long)arg1 andOptions:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAction:(id)arg1;
- (id)name;

@end
