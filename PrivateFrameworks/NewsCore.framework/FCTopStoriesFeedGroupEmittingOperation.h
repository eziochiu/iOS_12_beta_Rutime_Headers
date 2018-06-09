/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTopStoriesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

- (void)_buildGroupWithCatchUpOperation:(id)arg1;
- (id)_defaultBackgroundGradient;
- (id)_feedTransformationWithOtherArticleIDs:(id)arg1;
- (void)_fetchHeadlinesForArticleIDs:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_filterHeadlines:(id)arg1 withArticleMetadata:(id)arg2;
- (void)_headlinesFromMandatory:(id)arg1 optional:(id)arg2 articleIDs:(id)arg3 completion:(id /* block */)arg4;
- (id)_personalizedFeedTransformationWithLimit:(unsigned long long)arg1 otherArticleIDs:(id)arg2 preselectedArticles:(id)arg3;
- (void)_selectHeadlinesFromMandatory:(id)arg1 optional:(id)arg2 publishDate:(id)arg3 articleMetadataByArticleID:(id)arg4 cursor:(id)arg5 isAllowedToCollapse:(bool)arg6 completion:(id /* block */)arg7;
- (bool)hasSeenAllPreviousArticleIDs:(id)arg1;
- (id)headlinesLogFromHeadlines:(id)arg1 includeScore:(bool)arg2;
- (void)performOperation;

@end
