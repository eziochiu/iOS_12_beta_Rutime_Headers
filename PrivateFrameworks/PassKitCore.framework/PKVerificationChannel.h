/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKVerificationChannel : NSObject <NSCopying, NSSecureCoding> {
    NSString * _contactPoint;
    NSString * _identifier;
    NSString * _organizationName;
    bool  _requiresUserInteraction;
    NSString * _sourceAddress;
    unsigned long long  _type;
    NSString * _typeDescription;
}

@property (nonatomic, copy) NSString *contactPoint;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *organizationName;
@property (nonatomic) bool requiresUserInteraction;
@property (nonatomic, copy) NSString *sourceAddress;
@property (nonatomic) unsigned long long type;
@property (nonatomic, copy) NSString *typeDescription;
@property (nonatomic, readonly, copy) NSString *typeDescriptionUnlocalized;

+ (bool)supportsSecureCoding;
+ (id)verificationChannelWithDictionary:(id)arg1 andOrganizationName:(id)arg2;

- (void).cxx_destruct;
- (id)contactPoint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)needsServerRequest;
- (id)organizationName;
- (bool)requiresUserInteraction;
- (void)setContactPoint:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setRequiresUserInteraction:(bool)arg1;
- (void)setSourceAddress:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setTypeDescription:(id)arg1;
- (id)sourceAddress;
- (unsigned long long)type;
- (id)typeDescription;
- (id)typeDescriptionUnlocalized;

@end
