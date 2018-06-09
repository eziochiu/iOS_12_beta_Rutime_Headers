/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactFormatterSmartFetcher : CNSmartPropertyFetcher {
    NSDictionary * _fallBackNamePropertyByNameKey;
    bool  _ignoresNickname;
    bool  _ignoresOrganization;
    NSSet * _mandatoryNameProperties;
}

@property (nonatomic, copy) NSDictionary *fallBackNamePropertyByNameKey;
@property (nonatomic) bool ignoresNickname;
@property (nonatomic) bool ignoresOrganization;
@property (nonatomic, copy) NSSet *mandatoryNameProperties;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_cn_executeGetterForRepresentedKeys:(id /* block */)arg1;
- (id)_cn_optionalKeys;
- (id)_cn_requiredKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fallBackNamePropertyByNameKey;
- (unsigned long long)hash;
- (bool)ignoresNickname;
- (bool)ignoresOrganization;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mandatoryNameProperties;
- (void)setFallBackNamePropertyByNameKey:(id)arg1;
- (void)setIgnoresNickname:(bool)arg1;
- (void)setIgnoresOrganization:(bool)arg1;
- (void)setMandatoryNameProperties:(id)arg1;
- (void)setupNameKeys;

@end
