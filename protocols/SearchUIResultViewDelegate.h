/* made by EzioChiu.
 */

@protocol SearchUIResultViewDelegate <NSObject>

@optional

- (void)clearResultsFromSection:(SFResultSection *)arg1;
- (NSString *)currentQuery;
- (void)didBeginScrollingResults;
- (void)didChangeExpansionStateForSection:(SFResultSection *)arg1 expanded:(bool)arg2;
- (void)didScrollPastBottomOfContent;
- (void)didTapInEmptyRegion;
- (void)didUpdateContentScrolledOffScreenStatus:(bool)arg1 animated:(bool)arg2;
- (void)getUserActivityForResult:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: SFSearchResult *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUserActivity *, void*
- (bool)hasShortLookViewControllerForResult:(SFSearchResult *)arg1;
- (bool)sectionIsClearable:(SFResultSection *)arg1;
- (bool)sectionShouldBeExpanded:(SFResultSection *)arg1;
- (UIViewController<SearchUIResultShortLook> *)shortLookViewControllerForResult:(SFSearchResult *)arg1;

@end
