/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKContentQueryOperation : FCNetworkOperation {
    CKQueryCursor * _cursor;
    FCCKContentDatabase * _database;
    NSArray * _desiredKeys;
    FCEdgeCacheHint * _edgeCacheHint;
    long long  _networkEventType;
    NSArray * _networkEvents;
    CKQuery * _query;
    id /* block */  _queryCompletionBlock;
    id /* block */  _recordFetchedBlock;
    NSArray * _requestUUIDs;
    CKQueryCursor * _resultCursor;
    unsigned long long  _resultsLimit;
}

@property (nonatomic, retain) CKQueryCursor *cursor;
@property (nonatomic, retain) FCCKContentDatabase *database;
@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic, copy) FCEdgeCacheHint *edgeCacheHint;
@property (nonatomic) long long networkEventType;
@property (nonatomic, copy) NSArray *networkEvents;
@property (nonatomic, retain) CKQuery *query;
@property (nonatomic, copy) id /* block */ queryCompletionBlock;
@property (nonatomic, copy) id /* block */ recordFetchedBlock;
@property (nonatomic, copy) NSArray *requestUUIDs;
@property (nonatomic, retain) CKQueryCursor *resultCursor;
@property (nonatomic) unsigned long long resultsLimit;

- (void).cxx_destruct;
- (id)_ckCursorFromQueryResponse:(id)arg1;
- (id)_ckRecordsFromQueryResponse:(id)arg1;
- (id)_requestOperations;
- (id)cursor;
- (id)database;
- (id)desiredKeys;
- (id)edgeCacheHint;
- (id)init;
- (long long)networkEventType;
- (id)networkEvents;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)query;
- (id /* block */)queryCompletionBlock;
- (id /* block */)recordFetchedBlock;
- (id)requestUUIDs;
- (id)resultCursor;
- (unsigned long long)resultsLimit;
- (void)setCursor:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setEdgeCacheHint:(id)arg1;
- (void)setNetworkEventType:(long long)arg1;
- (void)setNetworkEvents:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryCompletionBlock:(id /* block */)arg1;
- (void)setRecordFetchedBlock:(id /* block */)arg1;
- (void)setRequestUUIDs:(id)arg1;
- (void)setResultCursor:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (id)throttleGroup;
- (bool)validateOperation;

@end
