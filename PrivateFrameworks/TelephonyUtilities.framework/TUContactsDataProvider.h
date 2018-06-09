/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUContactsDataProvider : NSObject {
    <TUContactsDataSource> * _contactsDataSource;
    id /* block */  _localeSupportsPrefixHintForFetchRequest;
    bool  _useAsianNameFormat;
}

@property (nonatomic, readonly) <TUContactsDataSource> *contactsDataSource;
@property (nonatomic, copy) id /* block */ localeSupportsPrefixHintForFetchRequest;
@property (nonatomic) bool useAsianNameFormat;

+ (id)asianLocaleCountryCodes;
+ (id)defaultContactKeyDescriptors;
+ (id)keysByCombiningDefaultKeysWithKeysToFetch:(id)arg1;
+ (id)numberFormatter;
+ (id)unsupportedLocalesForPrefixHint;

- (void).cxx_destruct;
- (id)compositeNameForContacts:(id)arg1;
- (id)compositeNameForHandles:(id)arg1 countryCode:(id)arg2;
- (id)contactLabelForContacts:(id)arg1 matchingHandle:(id)arg2 countryCode:(id)arg3;
- (id)contactWithIdentifier:(id)arg1 keysToFetch:(id)arg2;
- (id)contactsDataSource;
- (id)executeFetchRequest:(id)arg1;
- (id)formattedNameForHandle:(id)arg1 countryCode:(id)arg2;
- (id)init;
- (id)initWithContactsDataSource:(id)arg1;
- (id)labeledHandlesForContactWithIdentifier:(id)arg1;
- (id)labeledHandlesForContacts:(id)arg1;
- (id /* block */)localeSupportsPrefixHintForFetchRequest;
- (id)localizedCompositeNameForContact:(id)arg1 secondContact:(id)arg2;
- (int)personIDForContact:(id)arg1;
- (id)prefixHintForFetchRequest:(id)arg1;
- (void)setLocaleSupportsPrefixHintForFetchRequest:(id /* block */)arg1;
- (void)setUseAsianNameFormat:(bool)arg1;
- (id)unifiedContactsForFetchRequest:(id)arg1 countryCode:(id)arg2;
- (bool)useAsianNameFormat;

@end
