/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordAncestorsRequest : CKDURLRequest {
    id /* block */  _ancestorFetchedBlock;
    NSMutableDictionary * _recordIDByRequestID;
    NSArray * _recordIDs;
    id /* block */  _shareRecordFetchedBlock;
}

@property (nonatomic, copy) id /* block */ ancestorFetchedBlock;
@property (nonatomic, retain) NSMutableDictionary *recordIDByRequestID;
@property (nonatomic, retain) NSArray *recordIDs;
@property (nonatomic, copy) id /* block */ shareRecordFetchedBlock;

- (void).cxx_destruct;
- (id /* block */)ancestorFetchedBlock;
- (id)generateRequestOperations;
- (id)initWithRecordIDs:(id)arg1;
- (int)operationType;
- (id)recordIDByRequestID;
- (id)recordIDs;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setAncestorFetchedBlock:(id /* block */)arg1;
- (void)setRecordIDByRequestID:(id)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setShareRecordFetchedBlock:(id /* block */)arg1;
- (id /* block */)shareRecordFetchedBlock;
- (id)zoneIDsToLock;

@end
