/* made by EzioChiu.
 */

@protocol SearchUIResultShortLook <NSObject>

@required

- (bool)presentImmediately:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (SFSearchResult *)searchResult;
- (void)setSearchResult:(SFSearchResult *)arg1;

@end
