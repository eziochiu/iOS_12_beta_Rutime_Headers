/* made by EzioChiu.
 */

@protocol EKEventAutocompleteResultsEditItemDelegate <EKCalendarItemEditItemDelegate>

@optional

- (void)autocompleteResultsEditItem:(EKEventAutocompleteResultsEditItem *)arg1 resultSelected:(EKUIAutocompleteSearchResult *)arg2;
- (void)autocompleteResultsEditItemDidHideResults:(EKEventAutocompleteResultsEditItem *)arg1;
- (void)autocompleteResultsEditItemDidShowResults:(EKEventAutocompleteResultsEditItem *)arg1;

@end
