/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKOAuth2TokenSession : NSObject <NSCopying, NSSecureCoding> {
    NSString * _code;
    NSString * _query;
    NSUUID * _state;
}

@property (nonatomic, readonly, copy) NSString *code;
@property (nonatomic, readonly, copy) NSString *query;
@property (nonatomic, readonly, copy) NSUUID *state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCode:(id)arg1 query:(id)arg2 state:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)query;
- (id)state;

@end
