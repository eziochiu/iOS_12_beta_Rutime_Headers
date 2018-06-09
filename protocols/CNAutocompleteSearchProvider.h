/* made by EzioChiu.
 */

@protocol CNAutocompleteSearchProvider <NSObject>

@required

- (<CNAutocompleteSearch> *)calendarServerSearch;
- (<CNAutocompleteSearch> *)directoryServerSearch;
- (<CNAutocompleteSearch> *)duetSearch;
- (<CNAutocompleteSearch> *)localSearch;
- (<CNAutocompleteSearch> *)recentsSearch;
- (<CNAutocompleteSearch> *)suggestionsSearch;

@end
