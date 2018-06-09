/* made by EzioChiu.
 */

@protocol UISearchControllerDelegate <NSObject>

@optional

- (void)didDismissSearchController:(UISearchController *)arg1;
- (void)didPresentSearchController:(UISearchController *)arg1;
- (void)presentSearchController:(UISearchController *)arg1;
- (void)willDismissSearchController:(UISearchController *)arg1;
- (void)willPresentSearchController:(UISearchController *)arg1;

@end
