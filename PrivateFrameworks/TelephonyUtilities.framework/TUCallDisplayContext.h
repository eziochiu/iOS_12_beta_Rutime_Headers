/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallDisplayContext : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _callDirectoryExtensionIdentifier;
    NSString * _callDirectoryLabel;
    NSString * _callDirectoryLocalizedExtensionContainingAppName;
    NSString * _companyName;
    NSString * _contactIdentifier;
    NSString * _contactLabel;
    NSString * _contactName;
    NSString * _label;
    int  _legacyAddressBookIdentifier;
    NSString * _location;
    NSString * _mapName;
    NSString * _name;
    NSPersonNameComponents * _personNameComponents;
    NSString * _suggestedName;
}

@property (nonatomic, copy) NSString *callDirectoryExtensionIdentifier;
@property (nonatomic, copy) NSString *callDirectoryLabel;
@property (nonatomic, copy) NSString *callDirectoryLocalizedExtensionContainingAppName;
@property (nonatomic, copy) NSString *companyName;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic, copy) NSString *contactLabel;
@property (nonatomic, copy) NSString *contactName;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) int legacyAddressBookIdentifier;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *mapName;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSPersonNameComponents *personNameComponents;
@property (nonatomic, copy) NSString *suggestedName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)callDirectoryExtensionIdentifier;
- (id)callDirectoryLabel;
- (id)callDirectoryLocalizedExtensionContainingAppName;
- (id)companyName;
- (id)contactIdentifier;
- (id)contactLabel;
- (id)contactName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayContextByMergingWithDisplayContext:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)label;
- (int)legacyAddressBookIdentifier;
- (id)location;
- (id)mapName;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)personNameComponents;
- (void)setCallDirectoryExtensionIdentifier:(id)arg1;
- (void)setCallDirectoryLabel:(id)arg1;
- (void)setCallDirectoryLocalizedExtensionContainingAppName:(id)arg1;
- (void)setCompanyName:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setContactLabel:(id)arg1;
- (void)setContactName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLegacyAddressBookIdentifier:(int)arg1;
- (void)setLocation:(id)arg1;
- (void)setMapName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPersonNameComponents:(id)arg1;
- (void)setSuggestedName:(id)arg1;
- (id)suggestedName;

@end
