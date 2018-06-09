/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKArchiveRecordsOperation : CKDatabaseOperation {
    id /* block */  _archiveRecordsCompletionBlock;
    NSMutableDictionary * _perItemErrors;
    id /* block */  _recordArchivedBlock;
    NSArray * _recordIDs;
}

@property (nonatomic, copy) id /* block */ archiveRecordsCompletionBlock;
@property (nonatomic, retain) NSMutableDictionary *perItemErrors;
@property (nonatomic, copy) id /* block */ recordArchivedBlock;
@property (nonatomic, copy) NSArray *recordIDs;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (id /* block */)archiveRecordsCompletionBlock;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithRecordIDs:(id)arg1;
- (id)perItemErrors;
- (void)performCKOperation;
- (id /* block */)recordArchivedBlock;
- (id)recordIDs;
- (void)setArchiveRecordsCompletionBlock:(id /* block */)arg1;
- (void)setPerItemErrors:(id)arg1;
- (void)setRecordArchivedBlock:(id /* block */)arg1;
- (void)setRecordIDs:(id)arg1;

@end
