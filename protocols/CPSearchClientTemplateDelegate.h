/* made by EzioChiu.
 */

@protocol CPSearchClientTemplateDelegate <CPTemplateDelegate>

@required

- (void)searchTemplate:(void *)arg1 selectedResult:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: CPSearchTemplate *, CPListItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)searchTemplate:(void *)arg1 updateSearchResultsForSearchText:(void *)arg2 completionResults:(void *)arg3; // needs 3 arg types, found 8: CPSearchTemplate *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)searchTemplateSearchButtonPressed:(CPSearchTemplate *)arg1;

@end
