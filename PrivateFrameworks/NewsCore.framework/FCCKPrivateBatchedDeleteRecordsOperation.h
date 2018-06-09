/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPrivateBatchedDeleteRecordsOperation : FCOperation {
    FCCKPrivateDatabase * _database;
    id /* block */  _deleteRecordsCompletionBlock;
    bool  _handleIdentityLoss;
    NSArray * _recordIDsToDelete;
    NSMutableArray * _remainingBatchesOfRecordIDsToDelete;
    NSMutableArray * _resultDeletedRecordIDs;
    NSMutableDictionary * _resultErrorsByRecordID;
    bool  _skipPreflight;
}

@property (nonatomic, retain) FCCKPrivateDatabase *database;
@property (nonatomic, copy) id /* block */ deleteRecordsCompletionBlock;
@property (nonatomic) bool handleIdentityLoss;
@property (nonatomic, copy) NSArray *recordIDsToDelete;
@property (nonatomic, retain) NSMutableArray *remainingBatchesOfRecordIDsToDelete;
@property (nonatomic, retain) NSMutableArray *resultDeletedRecordIDs;
@property (nonatomic, retain) NSMutableDictionary *resultErrorsByRecordID;
@property (nonatomic) bool skipPreflight;

- (void).cxx_destruct;
- (void)_continueModifying;
- (id)database;
- (id /* block */)deleteRecordsCompletionBlock;
- (bool)handleIdentityLoss;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)recordIDsToDelete;
- (id)remainingBatchesOfRecordIDsToDelete;
- (void)resetForRetry;
- (id)resultDeletedRecordIDs;
- (id)resultErrorsByRecordID;
- (void)setDatabase:(id)arg1;
- (void)setDeleteRecordsCompletionBlock:(id /* block */)arg1;
- (void)setHandleIdentityLoss:(bool)arg1;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRemainingBatchesOfRecordIDsToDelete:(id)arg1;
- (void)setResultDeletedRecordIDs:(id)arg1;
- (void)setResultErrorsByRecordID:(id)arg1;
- (void)setSkipPreflight:(bool)arg1;
- (bool)skipPreflight;
- (bool)validateOperation;

@end
