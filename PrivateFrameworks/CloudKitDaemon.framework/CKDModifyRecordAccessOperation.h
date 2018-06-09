/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyRecordAccessOperation : CKDDatabaseOperation {
    id /* block */  _accessWasGrantedBlock;
    id /* block */  _accessWasRevokedBlock;
    NSMutableSet * _fetchedRecordIDs;
    int  _numSaveAttempts;
    NSArray * _recordIDsToGrant;
    NSArray * _recordIDsToRevoke;
    NSMutableDictionary * _recordsToSaveByID;
}

@property (nonatomic, copy) id /* block */ accessWasGrantedBlock;
@property (nonatomic, copy) id /* block */ accessWasRevokedBlock;
@property (nonatomic, retain) NSMutableSet *fetchedRecordIDs;
@property (nonatomic) int numSaveAttempts;
@property (nonatomic, retain) NSArray *recordIDsToGrant;
@property (nonatomic, retain) NSArray *recordIDsToRevoke;
@property (nonatomic, retain) NSMutableDictionary *recordsToSaveByID;

+ (long long)isPredominatelyDownload;

- (void).cxx_destruct;
- (struct _PCSIdentityData { }*)_copyShareProtectionFromRecord:(id)arg1 error:(id*)arg2;
- (void)_fetchRecords;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleRecordFetched:(id)arg1 recordID:(id)arg2 error:(id)arg3;
- (void)_handleRecordSaved:(id)arg1 error:(id)arg2;
- (void)_saveRecords;
- (id /* block */)accessWasGrantedBlock;
- (id /* block */)accessWasRevokedBlock;
- (id)activityCreate;
- (id)fetchedRecordIDs;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (int)numSaveAttempts;
- (id)recordIDsToGrant;
- (id)recordIDsToRevoke;
- (id)recordsToSaveByID;
- (void)setAccessWasGrantedBlock:(id /* block */)arg1;
- (void)setAccessWasRevokedBlock:(id /* block */)arg1;
- (void)setFetchedRecordIDs:(id)arg1;
- (void)setNumSaveAttempts:(int)arg1;
- (void)setRecordIDsToGrant:(id)arg1;
- (void)setRecordIDsToRevoke:(id)arg1;
- (void)setRecordsToSaveByID:(id)arg1;

@end