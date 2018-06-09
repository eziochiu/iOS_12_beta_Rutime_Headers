/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyRecordZonesOperation : CKDDatabaseOperation {
    bool  _allowDefaultZoneSave;
    id /* block */  _deleteCompletionBlock;
    bool  _didSynchronizeUserKeyRegistry;
    bool  _dontFetchFromServer;
    bool  _markZonesAsUserPurged;
    long long  _maxZoneSaveAttempts;
    int  _numZoneSaveAttempts;
    NSArray * _recordZoneIDsToDelete;
    NSMutableDictionary * _recordZonesByZoneID;
    NSMutableArray * _recordZonesToSave;
    NSMutableDictionary * _retryableErrorsByZoneID;
    id /* block */  _saveCompletionBlock;
    NSMutableArray * _zonesWaitingOnKeyRegistrySync;
}

@property (nonatomic) bool allowDefaultZoneSave;
@property (nonatomic, copy) id /* block */ deleteCompletionBlock;
@property (nonatomic) bool didSynchronizeUserKeyRegistry;
@property (nonatomic) bool dontFetchFromServer;
@property (nonatomic) bool markZonesAsUserPurged;
@property (nonatomic) long long maxZoneSaveAttempts;
@property (nonatomic) int numZoneSaveAttempts;
@property (nonatomic, retain) NSArray *recordZoneIDsToDelete;
@property (nonatomic, retain) NSMutableDictionary *recordZonesByZoneID;
@property (nonatomic, retain) NSMutableArray *recordZonesToSave;
@property (nonatomic, retain) NSMutableDictionary *retryableErrorsByZoneID;
@property (nonatomic, copy) id /* block */ saveCompletionBlock;
@property (nonatomic, retain) NSMutableArray *zonesWaitingOnKeyRegistrySync;

+ (long long)isPredominatelyDownload;

- (void).cxx_destruct;
- (void)_checkAndPrepareZones;
- (void)_createNewPCSForZone:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchPCSDataForZone:(id)arg1 fromServer:(bool)arg2;
- (void)_fetchPCSDataForZonesFromServer:(bool)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleRecordZoneDeleted:(id)arg1 responseCode:(id)arg2;
- (void)_handleRecordZoneSaved:(id)arg1 responseCode:(id)arg2 serverCapabilities:(unsigned long long)arg3;
- (bool)_saveZonesToServer;
- (void)_sendErrorForFailedZones;
- (void)_sychronizeUserKeyRegistryIfNeeded;
- (id)activityCreate;
- (bool)allowDefaultZoneSave;
- (id /* block */)deleteCompletionBlock;
- (bool)didSynchronizeUserKeyRegistry;
- (bool)dontFetchFromServer;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (bool)markZonesAsUserPurged;
- (long long)maxZoneSaveAttempts;
- (id)nameForState:(unsigned long long)arg1;
- (int)numZoneSaveAttempts;
- (id)recordZoneIDsToDelete;
- (id)recordZonesByZoneID;
- (id)recordZonesToSave;
- (id)retryableErrorsByZoneID;
- (id /* block */)saveCompletionBlock;
- (void)setAllowDefaultZoneSave:(bool)arg1;
- (void)setDeleteCompletionBlock:(id /* block */)arg1;
- (void)setDidSynchronizeUserKeyRegistry:(bool)arg1;
- (void)setDontFetchFromServer:(bool)arg1;
- (void)setMarkZonesAsUserPurged:(bool)arg1;
- (void)setMaxZoneSaveAttempts:(long long)arg1;
- (void)setNumZoneSaveAttempts:(int)arg1;
- (void)setRecordZoneIDsToDelete:(id)arg1;
- (void)setRecordZonesByZoneID:(id)arg1;
- (void)setRecordZonesToSave:(id)arg1;
- (void)setRetryableErrorsByZoneID:(id)arg1;
- (void)setSaveCompletionBlock:(id /* block */)arg1;
- (void)setZonesWaitingOnKeyRegistrySync:(id)arg1;
- (id)zonesWaitingOnKeyRegistrySync;

@end
