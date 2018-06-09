/* made by EzioChiu.
 */

@protocol TUSearchModuleProtocol <NSObject>

@required

- (void)cancelSearch;
- (bool)isSearchComplete;
- (void)searchForString:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TUSearchModuleProtocol> *, bool, void*
- (TUSearchResults *)searchResults;

@optional

- (TUSearchController *)searchController;
- (void)setSearchController:(TUSearchController *)arg1;

@end