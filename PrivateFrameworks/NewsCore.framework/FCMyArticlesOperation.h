/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCMyArticlesOperation : FCOperation {
    long long  _binOverride;
    <FCCoreConfiguration> * _configuration;
    FCCloudContext * _context;
    FCDateRange * _dateRange;
    NSError * _error;
    NSDictionary * _feedContextByFeedID;
    id /* block */  _feedItemCompletionBlock;
    NSArray * _feedItems;
    id /* block */  _feedItemsChangedHandler;
    unsigned long long  _maxNumberOfFeedsToQuery;
    FCFeedPersonalizedArticles * _nonEditorialPersonalizedArticles;
    unsigned long long  _perFeedLimit;
    bool  _streamFeedItems;
}

@property (nonatomic) long long binOverride;
@property (nonatomic, copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, copy) FCDateRange *dateRange;
@property (copy) NSError *error;
@property (copy) NSDictionary *feedContextByFeedID;
@property (nonatomic, copy) id /* block */ feedItemCompletionBlock;
@property (copy) NSArray *feedItems;
@property (nonatomic, copy) id /* block */ feedItemsChangedHandler;
@property (nonatomic) unsigned long long maxNumberOfFeedsToQuery;
@property (readonly, copy) NSArray *nonEditorialFeedItems;
@property (retain) FCFeedPersonalizedArticles *nonEditorialPersonalizedArticles;
@property (nonatomic) unsigned long long perFeedLimit;
@property (nonatomic) bool streamFeedItems;

- (void).cxx_destruct;
- (void)_appendFeedItems:(id)arg1;
- (void)_fetchTagsForQueryingWithCompletionHandler:(id /* block */)arg1;
- (long long)binOverride;
- (id)configuration;
- (id)context;
- (id)dateRange;
- (id)error;
- (id)feedContextByFeedID;
- (id /* block */)feedItemCompletionBlock;
- (id)feedItems;
- (id /* block */)feedItemsChangedHandler;
- (id)init;
- (unsigned long long)maxNumberOfFeedsToQuery;
- (id)nonEditorialFeedItems;
- (id)nonEditorialPersonalizedArticles;
- (void)operationWillFinishWithError:(id)arg1;
- (unsigned long long)perFeedLimit;
- (void)performOperation;
- (void)setBinOverride:(long long)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDateRange:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFeedContextByFeedID:(id)arg1;
- (void)setFeedItemCompletionBlock:(id /* block */)arg1;
- (void)setFeedItems:(id)arg1;
- (void)setFeedItemsChangedHandler:(id /* block */)arg1;
- (void)setMaxNumberOfFeedsToQuery:(unsigned long long)arg1;
- (void)setNonEditorialPersonalizedArticles:(id)arg1;
- (void)setPerFeedLimit:(unsigned long long)arg1;
- (void)setStreamFeedItems:(bool)arg1;
- (bool)streamFeedItems;
- (bool)validateOperation;

@end
