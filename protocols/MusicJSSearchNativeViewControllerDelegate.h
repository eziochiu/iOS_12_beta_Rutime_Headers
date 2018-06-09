/* made by EzioChiu.
 */

@protocol MusicJSSearchNativeViewControllerDelegate <NSObject>

@required

- (void)jsSearchNativeViewController:(MusicJSSearchNativeViewController *)arg1 selectMediaPickerItem:(NSDictionary *)arg2;
- (void)jsSearchNativeViewController:(MusicJSSearchNativeViewController *)arg1 setSearchTerm:(NSString *)arg2;
- (void)jsSearchNativeViewController:(MusicJSSearchNativeViewController *)arg1 setStoreSearchResultsDocument:(IKAppDocument *)arg2 options:(NSDictionary *)arg3;

@end
