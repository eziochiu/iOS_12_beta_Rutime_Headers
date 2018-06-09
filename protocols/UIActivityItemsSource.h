/* made by EzioChiu.
 */

@protocol UIActivityItemsSource <NSObject>

@required

- (NSArray *)activityViewController:(UIActivityViewController *)arg1 itemsForActivityType:(NSString *)arg2;
- (NSArray *)activityViewControllerPlaceholderItems:(UIActivityViewController *)arg1;

@end
