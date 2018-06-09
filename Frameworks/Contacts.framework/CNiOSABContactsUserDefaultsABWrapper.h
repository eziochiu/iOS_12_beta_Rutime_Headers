/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABContactsUserDefaultsABWrapper : NSObject

- (unsigned int)ABPersonGetCompositeNameFormatForRecord:(void*)arg1;
- (unsigned int)ABPersonGetEditNameFormat;
- (unsigned int)ABPersonGetShortNameFormat;
- (bool)ABPersonGetShortNameFormatEnabled;
- (bool)ABPersonGetShortNamePreferNicknames;
- (unsigned int)ABPersonGetSortOrdering;
- (void)ABPersonSetCompositeNameFormat:(unsigned int)arg1;
- (void)ABPersonSetShortNameFormat:(unsigned int)arg1;
- (void)ABPersonSetShortNameFormatEnabled:(bool)arg1;
- (void)ABPersonSetShortNamePreferNicknames:(bool)arg1;
- (id)abDefaultCountryCode;
- (id)displayedContactsFilterRepresentationPref;
- (void)setDisplayedContactsFilterRepresentationPref:(id)arg1;

@end
