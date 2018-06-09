/* made by EzioChiu.
 */

@protocol WBSParsecFeedbackDispatcher <NSObject>

@required

- (void)didDisplayCompletionListItems:(NSArray *)arg1 forQuery:(WBSCompletionQuery *)arg2 forEvent:(long long)arg3;
- (void)didReceiveLocalResultsForQuery:(WBSCompletionQuery *)arg1;
- (void)didReceiveWebSuggestionsForQuery:(WBSCompletionQuery *)arg1 fromSearchProvider:(NSString *)arg2 responseSize:(long long)arg3 statusCode:(long long)arg4 networkTimingData:(NSDictionary *)arg5;
- (void)userDidCancelSession;
- (void)userDidCancelSession:(long long)arg1;

@optional

- (void)didBeginSearchOfType:(long long)arg1 withQuery:(WBSCompletionQuery *)arg2 endpoint:(unsigned long long)arg3;
- (void)didBeginSearchOfType:(long long)arg1 withQuery:(WBSCompletionQuery *)arg2 urlString:(NSString *)arg3 headers:(NSDictionary *)arg4 endpoint:(unsigned long long)arg5;
- (void)didGenerateCompletionListItemsWithRankingObserver:(WBSCompletionListRankingObserver *)arg1;
- (void)didReceiveParsecResultsAfterTimeout:(NSArray *)arg1;
- (void)searchViewAppearedBecauseOfEvent:(unsigned long long)arg1;
- (void)searchViewAppearedBecauseOfEvent:(unsigned long long)arg1 isSafariReaderAvailable:(bool)arg2;
- (void)searchViewDisappearedBecauseOfEvent:(long long)arg1;
- (void)userDidEngageWithCardShowingResult:(WBSParsecLegacySearchResult *)arg1 onCardOfType:(NSString *)arg2 actionType:(NSString *)arg3 actionTarget:(NSString *)arg4 destination:(NSString *)arg5;
- (void)userDidEngageWithCompletionListItem:(id <WBSCompletionListItem>)arg1 atPosition:(unsigned long long)arg2 withEngagementActionDictionary:(NSDictionary *)arg3;
- (void)userDidEngageWithCompletionListItem:(id <WBSCompletionListItem>)arg1 onActionButton:(bool)arg2 method:(long long)arg3;
- (void)userDidEngageWithCompletionListItem:(id <WBSCompletionListItem>)arg1 onActionButton:(bool)arg2 method:(long long)arg3 doesMatchSiriSuggestion:(bool)arg4;
- (void)userDidEngageWithCompletionListItem:(id <WBSCompletionListItem>)arg1 withCardActionDictionary:(NSDictionary *)arg2;
- (void)userDidSelectCompletionListItem:(id <WBSCompletionListItem>)arg1;
- (void)userDidSelectCompletionListItem:(id <WBSCompletionListItem>)arg1 atPosition:(unsigned long long)arg2;
- (void)userTypedGoToSearch:(NSString *)arg1 endpoint:(unsigned long long)arg2;
- (void)userTypedURLDirectly:(NSString *)arg1;

@end
