/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPrivateDeleteRecordZonesOperation : FCCKPrivateDatabaseOperation {
    id /* block */  _deleteRecordZonesCompletionBlock;
    NSArray * _recordZoneIDsToDelete;
    NSArray * _resultDeletedRecordZoneIDs;
    bool  _secureDatabaseOnly;
}

@property (nonatomic, copy) id /* block */ deleteRecordZonesCompletionBlock;
@property (nonatomic, copy) NSArray *recordZoneIDsToDelete;
@property (nonatomic, retain) NSArray *resultDeletedRecordZoneIDs;
@property (nonatomic) bool secureDatabaseOnly;

- (void).cxx_destruct;
- (id /* block */)deleteRecordZonesCompletionBlock;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)recordZoneIDsToDelete;
- (id)resultDeletedRecordZoneIDs;
- (bool)secureDatabaseOnly;
- (void)setDeleteRecordZonesCompletionBlock:(id /* block */)arg1;
- (void)setRecordZoneIDsToDelete:(id)arg1;
- (void)setResultDeletedRecordZoneIDs:(id)arg1;
- (void)setSecureDatabaseOnly:(bool)arg1;
- (bool)validateOperation;

@end
