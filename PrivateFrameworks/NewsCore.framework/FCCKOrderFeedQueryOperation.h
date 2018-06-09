/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKOrderFeedQueryOperation : FCOperation {
    NSArray * _articleKeysMappingToTag;
    FCCKContentDatabase * _database;
    NSArray * _desiredKeys;
    FCEdgeCacheHint * _edgeCacheHint;
    NSArray * _feedRequests;
    NSArray * _networkEvents;
    id /* block */  _queryCompletionHandler;
    long long  _queryPriority;
    NSError * _resultError;
    NSArray * _resultFeedItemAndArticleRecords;
    NSArray * _resultFeedResponses;
    NSArray * _resultTagRecords;
    unsigned long long  _resultsLimit;
}

@property (nonatomic, copy) NSArray *articleKeysMappingToTag;
@property (nonatomic, retain) FCCKContentDatabase *database;
@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic, copy) FCEdgeCacheHint *edgeCacheHint;
@property (nonatomic, copy) NSArray *feedRequests;
@property (nonatomic, copy) NSArray *networkEvents;
@property (nonatomic, copy) id /* block */ queryCompletionHandler;
@property (nonatomic) long long queryPriority;
@property (nonatomic, retain) NSError *resultError;
@property (nonatomic, retain) NSArray *resultFeedItemAndArticleRecords;
@property (nonatomic, retain) NSArray *resultFeedResponses;
@property (nonatomic, retain) NSArray *resultTagRecords;
@property (nonatomic) unsigned long long resultsLimit;

- (void).cxx_destruct;
- (id)_constructFeedQuery;
- (id)_feedRelativeDictionaryFromResultsArray:(id)arg1;
- (id)_predicateForPerFeedFieldName:(id)arg1 key:(id)arg2 defaultValue:(id)arg3;
- (void)_processResultsRecord:(id)arg1 feedItemAndArticleRecords:(id)arg2 tagRecords:(id)arg3;
- (id)_requiredKeys;
- (id)articleKeysMappingToTag;
- (id)database;
- (id)desiredKeys;
- (id)edgeCacheHint;
- (id)feedRequests;
- (id)networkEvents;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (id /* block */)queryCompletionHandler;
- (long long)queryPriority;
- (void)resetForRetry;
- (id)resultError;
- (id)resultFeedItemAndArticleRecords;
- (id)resultFeedResponses;
- (id)resultTagRecords;
- (unsigned long long)resultsLimit;
- (void)setArticleKeysMappingToTag:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setEdgeCacheHint:(id)arg1;
- (void)setFeedRequests:(id)arg1;
- (void)setNetworkEvents:(id)arg1;
- (void)setQueryCompletionHandler:(id /* block */)arg1;
- (void)setQueryPriority:(long long)arg1;
- (void)setResultError:(id)arg1;
- (void)setResultFeedItemAndArticleRecords:(id)arg1;
- (void)setResultFeedResponses:(id)arg1;
- (void)setResultTagRecords:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (bool)validateOperation;

@end
