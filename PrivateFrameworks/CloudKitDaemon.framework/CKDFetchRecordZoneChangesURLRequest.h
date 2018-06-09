/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordZoneChangesURLRequest : CKDURLRequest <CKDURLRequestPipelining> {
    long long  _changeTypes;
    NSDictionary * _configurationsByRecordZoneID;
    NSSet * _desiredAssetKeys;
    NSMutableDictionary * _nodeErrorsByZoneID;
    id /* block */  _recordDeletedBlock;
    NSMutableArray * _recordResponses;
    NSArray * _recordZoneIDs;
    id /* block */  _recordsChangedBlock;
    NSMutableDictionary * _requestResultsByRecordZoneID;
    bool  _shouldFetchAssetContent;
    NSMutableDictionary * _zoneIDsByRequestOperationUUID;
}

@property (nonatomic) long long changeTypes;
@property (nonatomic, retain) NSDictionary *configurationsByRecordZoneID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *desiredAssetKeys;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *nodeErrorsByZoneID;
@property (nonatomic, copy) id /* block */ recordDeletedBlock;
@property (nonatomic, retain) NSMutableArray *recordResponses;
@property (nonatomic, copy) NSArray *recordZoneIDs;
@property (nonatomic, copy) id /* block */ recordsChangedBlock;
@property (nonatomic, retain) NSMutableDictionary *requestResultsByRecordZoneID;
@property (nonatomic, readonly) NSDictionary *resultsByRecordZoneID;
@property (nonatomic) bool shouldFetchAssetContent;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *zoneErrorsByZoneID;
@property (nonatomic, retain) NSMutableDictionary *zoneIDsByRequestOperationUUID;

- (void).cxx_destruct;
- (id)_handleRecordChanges:(id)arg1;
- (long long)changeTypes;
- (id)configurationsByRecordZoneID;
- (id)desiredAssetKeys;
- (id)generateRequestOperations;
- (id)initWithRecordZoneIDs:(id)arg1 configurationsByRecordZoneID:(id)arg2;
- (id)nodeErrorsByZoneID;
- (int)operationType;
- (id /* block */)recordDeletedBlock;
- (id)recordResponses;
- (id)recordZoneIDs;
- (id /* block */)recordsChangedBlock;
- (void)requestDidComplete;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (bool)requestGETPreAuth;
- (id)requestOperationClasses;
- (id)requestResultsByRecordZoneID;
- (id)resultsByRecordZoneID;
- (void)setChangeTypes:(long long)arg1;
- (void)setConfigurationsByRecordZoneID:(id)arg1;
- (void)setDesiredAssetKeys:(id)arg1;
- (void)setNodeErrorsByZoneID:(id)arg1;
- (void)setRecordDeletedBlock:(id /* block */)arg1;
- (void)setRecordResponses:(id)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setRecordsChangedBlock:(id /* block */)arg1;
- (void)setRequestResultsByRecordZoneID:(id)arg1;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (void)setZoneIDsByRequestOperationUUID:(id)arg1;
- (bool)shouldFetchAssetContent;
- (id)zoneErrorsByZoneID;
- (id)zoneIDsByRequestOperationUUID;
- (id)zoneIDsToLock;

@end
