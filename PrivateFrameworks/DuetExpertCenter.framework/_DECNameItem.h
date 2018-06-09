/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECNameItem : _DECItem {
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
    double  _score;
    NSString * _source;
    NSArray * _streetNames;
}

@property (nonatomic, readonly) NSArray *cityNames;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *jobTitle;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *middleName;
@property (nonatomic, readonly) NSString *nickname;
@property (nonatomic, readonly) NSString *organizationName;
@property (nonatomic, readonly) NSString *phoneticFirstName;
@property (nonatomic, readonly) NSString *phoneticLastName;
@property (nonatomic, readonly) NSString *phoneticMiddleName;
@property (nonatomic, readonly) NSDictionary *relatedNames;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) NSString *source;
@property (nonatomic, readonly) NSArray *streetNames;

+ (id)nameWithFirstName:(id)arg1 phoneticFirstName:(id)arg2 middleName:(id)arg3 phoneticMiddleName:(id)arg4 lastName:(id)arg5 phoneticLastName:(id)arg6 organizationName:(id)arg7 jobTitle:(id)arg8 nickname:(id)arg9 relatedNames:(id)arg10 score:(double)arg11 source:(id)arg12;
+ (id)nameWithFirstName:(id)arg1 phoneticFirstName:(id)arg2 middleName:(id)arg3 phoneticMiddleName:(id)arg4 lastName:(id)arg5 phoneticLastName:(id)arg6 organizationName:(id)arg7 jobTitle:(id)arg8 nickname:(id)arg9 relatedNames:(id)arg10 streetNames:(id)arg11 cityNames:(id)arg12 score:(double)arg13 source:(id)arg14;
+ (id)nameWithFirstName:(id)arg1 phoneticFirstName:(id)arg2 middleName:(id)arg3 phoneticMiddleName:(id)arg4 lastName:(id)arg5 phoneticLastName:(id)arg6 organizationName:(id)arg7 jobTitle:(id)arg8 nickname:(id)arg9 score:(double)arg10 source:(id)arg11;
+ (id)nameWithFirstName:(id)arg1 phoneticFirstName:(id)arg2 middleName:(id)arg3 phoneticMiddleName:(id)arg4 lastName:(id)arg5 phoneticLastName:(id)arg6 organizationName:(id)arg7 jobTitle:(id)arg8 nickname:(id)arg9 source:(id)arg10;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToDECNameItem:(id)arg1;
- (id)cityNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirstName:(id)arg1 phoneticFirstName:(id)arg2 middleName:(id)arg3 phoneticMiddleName:(id)arg4 lastName:(id)arg5 phoneticLastName:(id)arg6 organizationName:(id)arg7 jobTitle:(id)arg8 nickname:(id)arg9 relatedNames:(id)arg10 streetNames:(id)arg11 cityNames:(id)arg12 score:(double)arg13 source:(id)arg14;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalent:(id)arg1;
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
- (id)source;
- (id)streetNames;

@end
