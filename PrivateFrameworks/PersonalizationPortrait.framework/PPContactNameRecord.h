/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPContactNameRecord : NSObject <NSSecureCoding> {
    unsigned char  _changeType;
    NSArray * _cityNames;
    NSString * _firstName;
    NSString * _identifier;
    NSString * _jobTitle;
    NSString * _lastName;
    NSString * _middleName;
    NSString * _nickname;
    NSString * _organizationName;
    NSString * _phoneticFirstName;
    NSString * _phoneticLastName;
    NSString * _phoneticMiddleName;
    NSDictionary * _relatedNames;
    double  _score;
    unsigned char  _source;
    NSString * _sourceIdentifier;
    NSArray * _streetNames;
}

@property (nonatomic) unsigned char changeType;
@property (nonatomic, retain) NSArray *cityNames;
@property (nonatomic, retain) NSString *firstName;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *jobTitle;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) NSString *middleName;
@property (nonatomic, retain) NSString *nickname;
@property (nonatomic, retain) NSString *organizationName;
@property (nonatomic, retain) NSString *phoneticFirstName;
@property (nonatomic, retain) NSString *phoneticLastName;
@property (nonatomic, retain) NSString *phoneticMiddleName;
@property (nonatomic, retain) NSDictionary *relatedNames;
@property (nonatomic) double score;
@property (nonatomic) unsigned char source;
@property (nonatomic, retain) NSString *sourceIdentifier;
@property (nonatomic, retain) NSArray *streetNames;

+ (id)contactNameRecordWithScore:(double)arg1 source:(unsigned char)arg2 sourceIdentifier:(id)arg3 changeType:(unsigned char)arg4 firstName:(id)arg5 phoneticFirstName:(id)arg6 middleName:(id)arg7 phoneticMiddleName:(id)arg8 lastName:(id)arg9 phoneticLastName:(id)arg10 organizationName:(id)arg11 jobTitle:(id)arg12 nickname:(id)arg13 relatedNames:(id)arg14 streetNames:(id)arg15 cityNames:(id)arg16;
+ (id)describeChangeType:(unsigned char)arg1;
+ (id)describeSource:(unsigned char)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned char)changeType;
- (id)cityNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (bool)hasScoreSimilarToRecord:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 score:(double)arg2 source:(unsigned char)arg3 sourceIdentifier:(id)arg4 changeType:(unsigned char)arg5 firstName:(id)arg6 phoneticFirstName:(id)arg7 middleName:(id)arg8 phoneticMiddleName:(id)arg9 lastName:(id)arg10 phoneticLastName:(id)arg11 organizationName:(id)arg12 jobTitle:(id)arg13 nickname:(id)arg14 relatedNames:(id)arg15 streetNames:(id)arg16 cityNames:(id)arg17;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContactNameRecord:(id)arg1;
- (id)jobTitle;
- (id)lastName;
- (id)middleName;
- (id)nickname;
- (id)organizationName;
- (id)phoneticFirstName;
- (id)phoneticLastName;
- (id)phoneticMiddleName;
- (id)relatedNames;
- (double)score;
- (void)setChangeType:(unsigned char)arg1;
- (void)setCityNames:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setJobTitle:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setPhoneticFirstName:(id)arg1;
- (void)setPhoneticLastName:(id)arg1;
- (void)setPhoneticMiddleName:(id)arg1;
- (void)setRelatedNames:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setSource:(unsigned char)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setStreetNames:(id)arg1;
- (unsigned char)source;
- (id)sourceIdentifier;
- (id)streetNames;

@end