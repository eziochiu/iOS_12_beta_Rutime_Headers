/* made by EzioChiu.
 */

@protocol MFAutocompleteResultsTableViewControllerDelegate <NSObject>

@optional

- (void)autocompleteResultsController:(MFAutocompleteResultsTableViewController *)arg1 didRequestInfoAboutRecipient:(MFComposeRecipient *)arg2;
- (void)autocompleteResultsController:(MFAutocompleteResultsTableViewController *)arg1 didSelectRecipient:(MFComposeRecipient *)arg2;
- (void)autocompleteResultsController:(MFAutocompleteResultsTableViewController *)arg1 didSelectRecipient:(MFComposeRecipient *)arg2 atIndex:(unsigned long long)arg3;

@end
