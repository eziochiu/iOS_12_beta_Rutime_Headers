/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface _CNAutocompleteUserDefaultsSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy> {
    CNUserDefaults * _userDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool includeCalendarServers;
@property (readonly) bool includeContacts;
@property (readonly) bool includeDirectoryServers;
@property (readonly) bool includePredictions;
@property (readonly) bool includeRecents;
@property (readonly) bool includeSuggestions;
@property (readonly) bool includeSupplementalResults;
@property (readonly) Class superclass;
@property (readonly) CNUserDefaults *userDefaults;

- (void).cxx_destruct;
- (bool)includeCalendarServers;
- (bool)includeContacts;
- (bool)includeDirectoryServers;
- (bool)includePredictions;
- (bool)includeRecents;
- (bool)includeSuggestions;
- (bool)includeSupplementalResults;
- (id)initWithUserDefaults:(id)arg1;
- (id)userDefaults;

@end
