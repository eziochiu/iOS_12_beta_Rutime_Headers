/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXContactNameItem : PEXItem {
    NSArray * _cityNames;
    NSString * _firstName;
    NSString * _jobTitle;
    NSString * _lastName;
    NSString * _middleName;
    NSString * _nickname;
    NSString * _organizationName;
    NSString * _phoneticFirstName;
    NSString * _phoneticLastName;
    NSString * _phoneticMiddleName;
    NSDictionary * _relatedNames;
    NSArray * _streetNames;
}

@property (nonatomic, retain) NSArray *cityNames;
@property (nonatomic, retain) NSString *firstName;
@property (nonatomic, retain) NSString *jobTitle;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) NSString *middleName;
@property (nonatomic, retain) NSString *nickname;
@property (nonatomic, retain) NSString *organizationName;
@property (nonatomic, retain) NSString *phoneticFirstName;
@property (nonatomic, retain) NSString *phoneticLastName;
@property (nonatomic, retain) NSString *phoneticMiddleName;
@property (nonatomic, retain) NSDictionary *relatedNames;
@property (nonatomic, retain) NSArray *streetNames;

+ (id)contactNameItemWithFirstName:(id)arg1 phoneticFirstName:(id)arg2 middleName:(id)arg3 phoneticMiddleName:(id)arg4 lastName:(id)arg5 phoneticLastName:(id)arg6 organizationName:(id)arg7 jobTitle:(id)arg8 nickname:(id)arg9 relatedNames:(id)arg10 streetNames:(id)arg11 cityNames:(id)arg12 score:(double)arg13 source:(unsigned char)arg14 sourceIdentifier:(id)arg15 changeType:(unsigned char)arg16;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cityNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirstName:(id)arg1 phoneticFirstName:(id)arg2 middleName:(id)arg3 phoneticMiddleName:(id)arg4 lastName:(id)arg5 phoneticLastName:(id)arg6 organizationName:(id)arg7 jobTitle:(id)arg8 nickname:(id)arg9 relatedNames:(id)arg10 streetNames:(id)arg11 cityNames:(id)arg12 score:(double)arg13 source:(unsigned char)arg14 sourceIdentifier:(id)arg15 changeType:(unsigned char)arg16;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNameItem:(id)arg1;
- (id)jobTitle;
- (id)lastName;
- (id)middleName;
- (id)nickname;
- (id)organizationName;
- (id)phoneticFirstName;
- (id)phoneticLastName;
- (id)phoneticMiddleName;
- (id)relatedNames;
- (void)setCityNames:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setJobTitle:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setPhoneticFirstName:(id)arg1;
- (void)setPhoneticLastName:(id)arg1;
- (void)setPhoneticMiddleName:(id)arg1;
- (void)setRelatedNames:(id)arg1;
- (void)setStreetNames:(id)arg1;
- (id)streetNames;

@end
