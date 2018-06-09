/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPrivateFetchRecordsOperation : FCCKPrivateDatabaseOperation {
    NSArray * _desiredKeys;
    id /* block */  _fetchRecordsCompletionBlock;
    NSArray * _recordIDs;
    NSDictionary * _resultRecordsByRecordID;
}

@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic, copy) id /* block */ fetchRecordsCompletionBlock;
@property (nonatomic, copy) NSArray *recordIDs;
@property (nonatomic, retain) NSDictionary *resultRecordsByRecordID;

- (void).cxx_destruct;
- (id)desiredKeys;
- (id /* block */)fetchRecordsCompletionBlock;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)recordIDs;
- (id)resultRecordsByRecordID;
- (void)setDesiredKeys:(id)arg1;
- (void)setFetchRecordsCompletionBlock:(id /* block */)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setResultRecordsByRecordID:(id)arg1;
- (bool)validateOperation;

@end
