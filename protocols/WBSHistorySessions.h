/* made by EzioChiu.
 */

@protocol WBSHistorySessions

@required

- (void)enumerateOrderedItemsLastVisitedInSession:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 7: WBSHistorySession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSHistoryItem *, void*
- (WBSHistoryItem *)itemLastVisitedInSession:(WBSHistorySession *)arg1 atIndex:(unsigned long long)arg2;
- (NSArray *)itemsLastVisitedInSession:(WBSHistorySession *)arg1;
- (unsigned long long)numberOfItemsVisitedInSession:(WBSHistorySession *)arg1;
- (unsigned long long)numberOfSessions;
- (NSArray *)orderedSessions;

@end
