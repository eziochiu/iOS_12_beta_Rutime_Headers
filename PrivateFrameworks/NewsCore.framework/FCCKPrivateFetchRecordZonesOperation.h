/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPrivateFetchRecordZonesOperation : FCCKPrivateDatabaseOperation {
    id /* block */  _fetchRecordZonesCompletionBlock;
    NSArray * _recordZoneIDs;
    NSDictionary * _resultRecordZonesByZoneID;
}

@property (nonatomic, copy) id /* block */ fetchRecordZonesCompletionBlock;
@property (nonatomic, copy) NSArray *recordZoneIDs;
@property (nonatomic, retain) NSDictionary *resultRecordZonesByZoneID;

- (void).cxx_destruct;
- (id /* block */)fetchRecordZonesCompletionBlock;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)recordZoneIDs;
- (id)resultRecordZonesByZoneID;
- (void)setFetchRecordZonesCompletionBlock:(id /* block */)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setResultRecordZonesByZoneID:(id)arg1;
- (bool)validateOperation;

@end
