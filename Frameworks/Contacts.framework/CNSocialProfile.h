/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNSocialProfile : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {
    NSArray * _bundleIdentifiers;
    NSString * _displayname;
    NSString * _service;
    NSString * _teamIdentifier;
    NSString * _urlString;
    NSString * _userIdentifier;
    NSString * _username;
}

@property (nonatomic, copy) NSArray *bundleIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayname;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *service;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *teamIdentifier;
@property (nonatomic, copy) NSString *urlString;
@property (nonatomic, copy) NSString *userIdentifier;
@property (nonatomic, copy) NSString *username;

+ (id)localizedStringForKey:(id)arg1;
+ (id)localizedStringForService:(id)arg1;
+ (id)socialProfileWithDictionaryRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayname;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4;
- (id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayname:(id)arg5;
- (id)initWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayname:(id)arg5 teamIdentifier:(id)arg6 bundleIdentifiers:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqual:(id)arg1 ignoreURLs:(bool)arg2;
- (bool)isValid:(id*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)service;
- (void)setBundleIdentifiers:(id)arg1;
- (void)setDisplayname:(id)arg1;
- (void)setService:(id)arg1;
- (void)setTeamIdentifier:(id)arg1;
- (void)setUrlString:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)teamIdentifier;
- (id)urlString;
- (id)userIdentifier;
- (id)username;

@end
