/* made by EzioChiu.
 */

@protocol PSIQueryDelegate <PSIGroupResultDelegate, PSITopAssetsResultDelegate>

@required

- (void)executeQuery:(void *)arg1 resultsHandler:(void *)arg2; // needs 2 arg types, found 7: PSIQuery *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (NSArray *)groupArraysFromGroupIdSets:(void *)arg1 dateFilter:(void *)arg2 progressBlock:(void *)arg3; // needs 3 arg types, found 9: NSArray *, PSIDateFilter *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, bool*, void*
- (const struct __CFSet { }*)groupIdsMatchingString:(NSString *)arg1 categories:(NSIndexSet *)arg2 textIsSearchable:(bool)arg3;
- (PSIGroupResult *)groupResultWithDateToken:(PSIQueryToken *)arg1;
- (NSObject<OS_dispatch_queue> *)groupResultsQueue;
- (PSIGroup *)groupWithMatchingGroupId:(unsigned long long)arg1 dateFilter:(PSIDateFilter *)arg2;
- (NSString *)meNodeIdentifier;
- (PSITokenizer *)tokenizer;
- (NSArray *)wordEmbeddingMatchesForToken:(NSString *)arg1;

@end
