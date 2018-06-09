/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPerson : SADomainObject <SAAceComparable>

@property (nonatomic, copy) NSArray *addresses;
@property (nonatomic, copy) NSDate *birthday;
@property (nonatomic, copy) NSString *company;
@property (nonatomic, copy) NSString *companyPhonetic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *emails;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSDictionary *firstNameAPGs;
@property (nonatomic, copy) NSString *firstNamePhonetic;
@property (nonatomic, copy) NSString *fullName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *internalGUID;
@property (nonatomic, copy) NSNumber *isBlocked;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSDictionary *lastNameAPGs;
@property (nonatomic, copy) NSString *lastNamePhonetic;
@property (nonatomic, copy) NSNumber *me;
@property (nonatomic, copy) NSString *middleName;
@property (nonatomic, copy) NSString *nickName;
@property (nonatomic, copy) NSDictionary *nickNameAPGs;
@property (nonatomic, copy) NSString *phonemeData;
@property (nonatomic, copy) NSArray *phones;
@property (nonatomic, copy) NSString *prefix;
@property (nonatomic, copy) NSNumber *pseudo;
@property (nonatomic, copy) NSArray *relatedNames;
@property (nonatomic, copy) NSArray *socialProfiles;
@property (nonatomic, copy) NSString *suffix;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)person;
+ (id)personWithDictionary:(id)arg1 context:(id)arg2;

- (id)addresses;
- (id)birthday;
- (id)company;
- (id)companyPhonetic;
- (id)emails;
- (id)encodedClassName;
- (id)firstName;
- (id)firstNameAPGs;
- (id)firstNamePhonetic;
- (id)fullName;
- (id)groupIdentifier;
- (id)internalGUID;
- (id)isBlocked;
- (id)lastName;
- (id)lastNameAPGs;
- (id)lastNamePhonetic;
- (id)me;
- (id)middleName;
- (id)nickName;
- (id)nickNameAPGs;
- (id)phonemeData;
- (id)phones;
- (id)prefix;
- (id)pseudo;
- (id)relatedNames;
- (void)setAddresses:(id)arg1;
- (void)setBirthday:(id)arg1;
- (void)setCompany:(id)arg1;
- (void)setCompanyPhonetic:(id)arg1;
- (void)setEmails:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFirstNameAPGs:(id)arg1;
- (void)setFirstNamePhonetic:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setInternalGUID:(id)arg1;
- (void)setIsBlocked:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setLastNameAPGs:(id)arg1;
- (void)setLastNamePhonetic:(id)arg1;
- (void)setMe:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setNickName:(id)arg1;
- (void)setNickNameAPGs:(id)arg1;
- (void)setPhonemeData:(id)arg1;
- (void)setPhones:(id)arg1;
- (void)setPrefix:(id)arg1;
- (void)setPseudo:(id)arg1;
- (void)setRelatedNames:(id)arg1;
- (void)setSocialProfiles:(id)arg1;
- (void)setSuffix:(id)arg1;
- (id)socialProfiles;
- (id)suffix;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)personFromDisplayName:(id)arg1 address:(id)arg2;

@end
