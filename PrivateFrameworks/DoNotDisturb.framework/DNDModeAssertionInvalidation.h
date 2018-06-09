/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDModeAssertionInvalidation : NSObject <NSCopying, NSSecureCoding> {
    DNDModeAssertion * _assertion;
    unsigned long long  _reason;
}

@property (nonatomic, readonly, copy) DNDModeAssertion *assertion;
@property (nonatomic, readonly) unsigned long long reason;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assertion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAssertion:(id)arg1 reason:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)reason;

@end
