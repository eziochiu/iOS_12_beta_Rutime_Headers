/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKChartCachePendingFetchOperationManager : NSObject {
    NSMutableDictionary * _fetchOperationsByIdentifier;
    NSMutableDictionary * _fetchOperationsByUUID;
    NSMutableDictionary * _retryCountByIdentifier;
}

- (void).cxx_destruct;
- (void)addFetchOperation:(id)arg1;
- (id)allPendingIdentifiers;
- (id)fetchOperationForIdentifier:(id)arg1;
- (void)incrementRetryCountForIdentifier:(id)arg1;
- (id)init;
- (void)removeFetchOperation:(id)arg1;
- (void)resetRetryCountForIdentifier:(id)arg1;
- (long long)retryCountForIdentifier:(id)arg1;

@end
