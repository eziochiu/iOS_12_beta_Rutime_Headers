/* made by EzioChiu.
 */

@protocol MusicLibrarySearchResultsViewControllerDelegate <NSObject>

@optional

- (void)librarySearchResultsViewController:(MusicLibrarySearchResultsViewController *)arg1 didSelectResultWithTitle:(NSString *)arg2;
- (void)librarySearchResultsViewControllerDidHideResultsView:(MusicLibrarySearchResultsViewController *)arg1;
- (void)librarySearchResultsViewControllerDidShowResultsView:(MusicLibrarySearchResultsViewController *)arg1;

@end
