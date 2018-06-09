/* made by EzioChiu.
 */

@protocol MusicJSSearchNativeViewController <JSExport, MusicJSNativeViewController>

@required

- (void)selectMediaPickerItem:(NSDictionary *)arg1;
- (void)setSearchTerm:(NSString *)arg1;
- (void)setStoreSearchResultsDocument:(IKDOMDocument *)arg1 :(NSDictionary *)arg2;

@end
