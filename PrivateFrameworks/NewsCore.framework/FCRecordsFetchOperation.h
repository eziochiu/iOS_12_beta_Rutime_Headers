/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCRecordsFetchOperation : FCFetchOperation {
    FCInterestToken * _fetchToken;
    NSDictionary * _holdTokens;
    NSArray * _ignoreCacheForRecordIDs;
    NSArray * _recordIdentifiers;
    FCRecordSource * _recordSource;
    FCInterestToken * _refreshToken;
}

- (void).cxx_destruct;
- (id)initWithRecordSource:(id)arg1 recordIdentifiers:(id)arg2;
- (id)initWithRecordSource:(id)arg1 recordIdentifiers:(id)arg2 ignoreCacheForRecordIDs:(id)arg3;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;

@end
