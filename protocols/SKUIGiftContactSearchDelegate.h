/* made by EzioChiu.
 */

@protocol SKUIGiftContactSearchDelegate <NSObject>

@optional

- (void)searchController:(SKUIGiftContactSearchController *)arg1 didSelectRecipient:(MFComposeRecipient *)arg2;
- (void)searchControllerDidFinishSearch:(SKUIGiftContactSearchController *)arg1;

@end
