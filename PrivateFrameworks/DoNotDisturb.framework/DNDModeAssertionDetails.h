/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDModeAssertionDetails : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    DNDModeAssertionLifetime * _lifetime;
    NSString * _modeIdentifier;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) DNDModeAssertionLifetime *lifetime;
@property (nonatomic, readonly, copy) NSString *modeIdentifier;

+ (id)_lifetimeClasses;
+ (id)detailsWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetime:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetime:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lifetime;
- (id)modeIdentifier;

@end
