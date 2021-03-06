/* made by EzioChiu.
 */

@protocol FCFeedPersonalizing <FCTagRanking>

@required

- (double)decayedPublisherDiversificationPenalty;
- (NSArray *)diversifyArticles:(NSArray *)arg1 limit:(unsigned long long)arg2;
- (NSArray *)diversifyArticles:(NSArray *)arg1 limit:(unsigned long long)arg2 preselectedArticles:(NSArray *)arg3;
- (NSArray *)limitArticlesByFlowRate:(NSArray *)arg1 timeInterval:(double)arg2 publisherCount:(unsigned long long)arg3;
- (NSArray *)limitArticlesByMinimumArticleQuality:(NSArray *)arg1;
- (void)prepareAutoFavoritesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareForUseWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (FCFeedPersonalizedArticles *)sortArticles:(NSArray *)arg1;
- (FCFeedPersonalizedArticles *)sortArticles:(NSArray *)arg1 options:(long long)arg2;
- (unsigned long long)whitelistLevelForTagID:(NSString *)arg1;

@optional

- (FCFeedPersonalizedArticles *)sortArticles:(NSArray *)arg1 configurationSet:(long long)arg2;
- (FCFeedPersonalizedArticles *)sortArticles:(NSArray *)arg1 options:(long long)arg2 configurationSet:(long long)arg3;

@end
