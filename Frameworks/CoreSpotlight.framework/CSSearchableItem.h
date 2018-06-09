/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSSearchableItem : NSObject <CSIndexQueuableItem, NSCopying, NSSecureCoding> {
    CSSearchableItemAttributeSet * _attributeSet;
    /* Warning: Unrecognized filer type: 'T' using 'void*' */ void* _score;
}

@property (retain) CSSearchableItemAttributeSet *attributeSet;
@property (copy) NSString *bundleID;
@property (copy) NSString *domainIdentifier;
@property (copy) NSDate *expirationDate;
@property bool isUpdate;
@property bool noIndex;
@property (copy) NSString *protection;
@property /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*score;
@property (copy) NSString *uniqueIdentifier;

// Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight

+ (id)searchableItemFromUserActivity:(id)arg1 bundleID:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_fixBrokenAuthorNames:(id)arg1;
- (bool)_hasAttributesOfType:(id)arg1;
- (bool)_isFullyFormed;
- (void)_parseEmailHeadersForFeatures:(id)arg1;
- (void)_populateMissingPeopleWithNames:(id)arg1 emailAddresses:(id)arg2 allItemPersons:(id)arg3 primaryItemPersons:(id)arg4 additionalItemPersons:(id)arg5 hiddenAdditionalItemPersons:(id)arg6 personDictionary:(id)arg7 contactProperties:(id)arg8 nameKey:(id)arg9 emailKey:(id)arg10 contactIdentifierKey:(id)arg11 personKey:(id)arg12 attributeSet:(id)arg13;
- (id)_propertiesDescription;
- (void)_standardizeDeprecatedProperties:(id)arg1;
- (void)_standardizeFileProvider:(id)arg1;
- (void)_standardizeHTML:(id)arg1;
- (void)_standardizeMarkAs:(id)arg1;
- (void)_standardizePeople:(id)arg1;
- (void)_updateWithSearchableItem:(id)arg1;
- (id)attributeSet;
- (id)attributes;
- (void)breakOutPersonInformationInSet:(id)arg1 withName:(id)arg2 emails:(id)arg3 contactIdentifiers:(id)arg4 nameKey:(id)arg5 emailKey:(id)arg6 contactIdentifierKey:(id)arg7 emailAddressKey:(id)arg8 attributeSet:(id)arg9;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)filteredSpotlightAttributes;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAttributeSet:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 domainIdentifier:(id)arg2 attributeSet:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isUpdate;
- (bool)noIndex;
- (id)protection;
- (/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)score;
- (id)searchableItem;
- (void)setAttributeSet:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIsUpdate:(bool)arg1;
- (void)setNoIndex:(bool)arg1;
- (void)setProtection:(id)arg1;
- (void)setScore:(/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)standardizeAttributes;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

- (id)_cnui_valueForAttribute:(id)arg1;

@end
