/* made by EzioChiu.
 */

@protocol MusicSearchViewControllerMediaPickerDelegate <NSObject>

@optional

- (void)musicSearchViewController:(MusicSearchViewController *)arg1 didSelectStoreItemWithID:(NSString *)arg2;
- (void)musicSearchViewControllerDidFinish:(MusicSearchViewController *)arg1 withSearchBar:(MusicSearchBar *)arg2;

@end
