/* made by EzioChiu.
 */

@protocol CNAutocompleteSourceInclusionPolicy <NSObject>

@required

- (bool)includeCalendarServers;
- (bool)includeContacts;
- (bool)includeDirectoryServers;
- (bool)includePredictions;
- (bool)includeRecents;
- (bool)includeSuggestions;
- (bool)includeSupplementalResults;

@end
