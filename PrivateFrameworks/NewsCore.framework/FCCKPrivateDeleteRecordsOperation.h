/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPrivateDeleteRecordsOperation : FCCKPrivateDatabaseOperation {
    id /* block */  _deleteRecordsCompletionBlock;
    NSArray * _recordIDsToDelete;
    NSArray * _resultDeletedRecordIDs;
    NSArray * _resultSavedRecords;
}

@property (nonatomic, copy) id /* block */ deleteRecordsCompletionBlock;
@property (nonatomic, copy) NSArray *recordIDsToDelete;
@property (nonatomic, retain) NSArray *resultDeletedRecordIDs;
@property (nonatomic, retain) NSArray *resultSavedRecords;

- (void).cxx_destruct;
- (id /* block */)deleteRecordsCompletionBlock;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)recordIDsToDelete;
- (id)resultDeletedRecordIDs;
- (id)resultSavedRecords;
- (void)setDeleteRecordsCompletionBlock:(id /* block */)arg1;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setResultDeletedRecordIDs:(id)arg1;
- (void)setResultSavedRecords:(id)arg1;
- (bool)validateOperation;

@end