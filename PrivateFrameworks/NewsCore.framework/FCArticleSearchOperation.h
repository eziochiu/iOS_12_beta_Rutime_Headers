/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCArticleSearchOperation : FCOperation {
    id /* block */  _articleSearchCompletion;
    FCCloudContext * _cloudContext;
    FCArticleSearchOperationFeedbackResult * _feedbackResult;
    NSString * _query;
    FCArticleStreamingResults * _results;
    unsigned long long  _resultsLimit;
    NSError * _searchError;
}

@property (copy) id /* block */ articleSearchCompletion;
@property (nonatomic, retain) FCCloudContext *cloudContext;
@property (nonatomic, retain) FCArticleSearchOperationFeedbackResult *feedbackResult;
@property (nonatomic, copy) NSString *query;
@property (nonatomic, retain) FCArticleStreamingResults *results;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic, retain) NSError *searchError;

- (void).cxx_destruct;
- (void)_performSearchQuery:(id /* block */)arg1;
- (id /* block */)articleSearchCompletion;
- (id)cloudContext;
- (id)feedbackResult;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)query;
- (id)results;
- (unsigned long long)resultsLimit;
- (id)searchError;
- (void)setArticleSearchCompletion:(id /* block */)arg1;
- (void)setCloudContext:(id)arg1;
- (void)setFeedbackResult:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setSearchError:(id)arg1;
- (bool)validateOperation;

@end
