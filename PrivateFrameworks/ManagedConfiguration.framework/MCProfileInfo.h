/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCProfileInfo : NSObject <NSSecureCoding> {
    NSString * _UUID;
    NSDate * _expiryDate;
    NSString * _friendlyName;
    NSString * _identifier;
    NSString * _organization;
    NSString * _profileDescription;
}

@property (nonatomic, retain) NSString *UUID;
@property (nonatomic, retain) NSDate *expiryDate;
@property (nonatomic, retain) NSString *friendlyName;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *organization;
@property (nonatomic, retain) NSString *profileDescription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (void)encodeWithCoder:(id)arg1;
- (id)expiryDate;
- (id)friendlyName;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)organization;
- (id)profileDescription;
- (void)setExpiryDate:(id)arg1;
- (void)setFriendlyName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOrganization:(id)arg1;
- (void)setProfileDescription:(id)arg1;
- (void)setUUID:(id)arg1;

@end
