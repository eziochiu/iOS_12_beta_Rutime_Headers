/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTCatchUpOperation : FCOperation {
    <FCNewsAppConfiguration> * _appConfiguration;
    NSMutableArray * _articleIDsRequests;
    NSMutableArray * _articleListRequests;
    FCCachePolicy * _cachePolicyForArticleLists;
    id /* block */  _catchUpCompletionHandler;
    <FCContentContext> * _contentContext;
    <FCFeedPersonalizing> * _feedPersonalizer;
    NSDate * _fetchDate;
    bool  _forYouEnabled;
    NTCatchUpOperationForYouFetchInfo * _forYouFetchInfo;
    NTCatchUpOperationForYouRequest * _forYouRequest;
    NTCatchUpOperationResults * _forYouResults;
    unsigned long long  _maximumCachedAgeForForYou;
    NSDictionary * _resultsByArticleIDsRequestID;
    NSDictionary * _resultsByArticleListID;
    id /* block */  _sessionProvider;
}

@property (nonatomic, copy) <FCNewsAppConfiguration> *appConfiguration;
@property (nonatomic, retain) NSMutableArray *articleIDsRequests;
@property (nonatomic, retain) NSMutableArray *articleListRequests;
@property (nonatomic, retain) FCCachePolicy *cachePolicyForArticleLists;
@property (nonatomic, copy) id /* block */ catchUpCompletionHandler;
@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (nonatomic, retain) <FCFeedPersonalizing> *feedPersonalizer;
@property (nonatomic, copy) NSDate *fetchDate;
@property (getter=isForYouEnabled, nonatomic) bool forYouEnabled;
@property (nonatomic, copy) NTCatchUpOperationForYouFetchInfo *forYouFetchInfo;
@property (nonatomic, copy) NTCatchUpOperationForYouRequest *forYouRequest;
@property (nonatomic, copy) NTCatchUpOperationResults *forYouResults;
@property (nonatomic) unsigned long long maximumCachedAgeForForYou;
@property (nonatomic, copy) NSDictionary *resultsByArticleIDsRequestID;
@property (nonatomic, copy) NSDictionary *resultsByArticleListID;
@property (nonatomic, copy) id /* block */ sessionProvider;

- (void).cxx_destruct;
- (void)_fetchArticleListAndArticleIDsResultsIfNeededWithCompletion:(id /* block */)arg1;
- (void)_fetchForYouResultsIfNeededWithCompletion:(id /* block */)arg1;
- (void)addArticleIDsRequest:(id)arg1;
- (void)addArticleListRequest:(id)arg1;
- (id)appConfiguration;
- (id)articleIDsRequests;
- (id)articleListRequests;
- (id)cachePolicyForArticleLists;
- (id /* block */)catchUpCompletionHandler;
- (id)contentContext;
- (id)feedPersonalizer;
- (id)fetchDate;
- (id)forYouFetchInfo;
- (id)forYouRequest;
- (id)forYouResults;
- (id)init;
- (bool)isForYouEnabled;
- (unsigned long long)maximumCachedAgeForForYou;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (id)resultsByArticleIDsRequestID;
- (id)resultsByArticleListID;
- (id /* block */)sessionProvider;
- (void)setAppConfiguration:(id)arg1;
- (void)setArticleIDsRequests:(id)arg1;
- (void)setArticleListRequests:(id)arg1;
- (void)setCachePolicyForArticleLists:(id)arg1;
- (void)setCatchUpCompletionHandler:(id /* block */)arg1;
- (void)setContentContext:(id)arg1;
- (void)setFeedPersonalizer:(id)arg1;
- (void)setFetchDate:(id)arg1;
- (void)setForYouEnabled:(bool)arg1;
- (void)setForYouFetchInfo:(id)arg1;
- (void)setForYouRequest:(id)arg1;
- (void)setForYouResults:(id)arg1;
- (void)setMaximumCachedAgeForForYou:(unsigned long long)arg1;
- (void)setResultsByArticleIDsRequestID:(id)arg1;
- (void)setResultsByArticleListID:(id)arg1;
- (void)setSessionProvider:(id /* block */)arg1;
- (bool)validateOperation;

@end
