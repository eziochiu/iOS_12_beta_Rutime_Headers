/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCRecordChainFetchOperation : FCOperation {
    NSMutableSet * _actualTopLevelRecordIDs;
    NSArray * _additionalRecordSources;
    NSDictionary * _cachePoliciesByRecordType;
    FCHeldRecords * _cachedRecords;
    <FCContentContext> * _context;
    id /* block */  _dynamicCachePolicyBlock;
    FCEdgeCacheHint * _edgeCacheHint;
    NSDictionary * _linkKeysByRecordType;
    NSMutableArray * _mutableNetworkEvents;
    NSDictionary * _pbRecordTypesByRecordType;
    id /* block */  _recordChainCompletionHandler;
    NSArray * _recordSources;
    NSDictionary * _recordSourcesByRecordType;
    NSDictionary * _resultHeldRecordsByType;
    bool  _shouldReturnErrorWhenSomeRecordsMissing;
    NSMutableSet * _skippedTopLevelRecordIDs;
    NSArray * _topLevelRecordIDs;
}

@property (nonatomic, retain) NSMutableSet *actualTopLevelRecordIDs;
@property (nonatomic, retain) NSArray *additionalRecordSources;
@property (nonatomic, copy) NSDictionary *cachePoliciesByRecordType;
@property (nonatomic, retain) FCHeldRecords *cachedRecords;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, copy) id /* block */ dynamicCachePolicyBlock;
@property (nonatomic, copy) FCEdgeCacheHint *edgeCacheHint;
@property (nonatomic, copy) NSDictionary *linkKeysByRecordType;
@property (nonatomic, retain) NSMutableArray *mutableNetworkEvents;
@property (nonatomic, readonly, copy) NSArray *networkEvents;
@property (nonatomic, retain) NSDictionary *pbRecordTypesByRecordType;
@property (nonatomic, copy) id /* block */ recordChainCompletionHandler;
@property (nonatomic, retain) NSArray *recordSources;
@property (nonatomic, retain) NSDictionary *recordSourcesByRecordType;
@property (nonatomic, retain) NSDictionary *resultHeldRecordsByType;
@property (nonatomic) bool shouldReturnErrorWhenSomeRecordsMissing;
@property (nonatomic, retain) NSMutableSet *skippedTopLevelRecordIDs;
@property (nonatomic, copy) NSArray *topLevelRecordIDs;

- (void).cxx_destruct;
- (void)_collectActualTopLevelRecordIDsFromRecordIDs:(id)arg1;
- (void)_collectCachedRecordsFromRecordIDs:(id)arg1;
- (id)_errorForMissingRecordNames:(id)arg1;
- (void)_filterOrphansFromCachedRecords;
- (void)_finalizeResultFromCachedRecords;
- (void)_issueCloudRequestIfNeeded;
- (id)_partialErrorForMissingRecordName:(id)arg1;
- (int)_pbRecordTypeForRecordID:(id)arg1;
- (int)_pbRecordTypeForRecordType:(id)arg1;
- (id)_recordIDsMissingFromCachedRecords;
- (id)_recordSourceForRecordType:(id)arg1;
- (id)_recordTypeForRecordID:(id)arg1;
- (void)_walkRecordChainStartingWithRecordIDs:(id)arg1 recordsLookupBlock:(id /* block */)arg2 visitorBlock:(id /* block */)arg3;
- (id)actualTopLevelRecordIDs;
- (id)additionalRecordSources;
- (id)cachePoliciesByRecordType;
- (id)cachedRecords;
- (id)context;
- (id /* block */)dynamicCachePolicyBlock;
- (id)edgeCacheHint;
- (id)init;
- (id)linkKeysByRecordType;
- (id)mutableNetworkEvents;
- (id)networkEvents;
- (void)operationWillFinishWithError:(id)arg1;
- (id)pbRecordTypesByRecordType;
- (void)performOperation;
- (void)prepareOperation;
- (id /* block */)recordChainCompletionHandler;
- (id)recordSources;
- (id)recordSourcesByRecordType;
- (id)resultHeldRecordsByType;
- (void)setActualTopLevelRecordIDs:(id)arg1;
- (void)setAdditionalRecordSources:(id)arg1;
- (void)setCachePoliciesByRecordType:(id)arg1;
- (void)setCachedRecords:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDynamicCachePolicyBlock:(id /* block */)arg1;
- (void)setEdgeCacheHint:(id)arg1;
- (void)setLinkKeysByRecordType:(id)arg1;
- (void)setMutableNetworkEvents:(id)arg1;
- (void)setPbRecordTypesByRecordType:(id)arg1;
- (void)setRecordChainCompletionHandler:(id /* block */)arg1;
- (void)setRecordSources:(id)arg1;
- (void)setRecordSourcesByRecordType:(id)arg1;
- (void)setResultHeldRecordsByType:(id)arg1;
- (void)setShouldReturnErrorWhenSomeRecordsMissing:(bool)arg1;
- (void)setSkippedTopLevelRecordIDs:(id)arg1;
- (void)setTopLevelRecordIDs:(id)arg1;
- (bool)shouldReturnErrorWhenSomeRecordsMissing;
- (id)skippedTopLevelRecordIDs;
- (id)topLevelRecordIDs;
- (bool)validateOperation;

@end
