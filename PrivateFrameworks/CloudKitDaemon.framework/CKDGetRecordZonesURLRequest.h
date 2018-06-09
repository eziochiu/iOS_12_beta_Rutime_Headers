/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGetRecordZonesURLRequest : CKDURLRequest {
    bool  _onlyFetchPCSInfo;
    id /* block */  _recordZoneFetchedBlock;
    NSArray * _recordZones;
    NSMutableDictionary * _zoneIDByRequestID;
    NSArray * _zoneIDs;
}

@property (nonatomic) bool onlyFetchPCSInfo;
@property (nonatomic, copy) id /* block */ recordZoneFetchedBlock;
@property (nonatomic, readonly) NSArray *recordZones;
@property (nonatomic, retain) NSMutableDictionary *zoneIDByRequestID;
@property (nonatomic, retain) NSArray *zoneIDs;

- (void).cxx_destruct;
- (bool)allowsAnonymousAccount;
- (id)generateRequestOperations;
- (id)initWithRecordZoneIDs:(id)arg1;
- (bool)onlyFetchPCSInfo;
- (int)operationType;
- (id /* block */)recordZoneFetchedBlock;
- (id)recordZones;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setOnlyFetchPCSInfo:(bool)arg1;
- (void)setRecordZoneFetchedBlock:(id /* block */)arg1;
- (void)setZoneIDByRequestID:(id)arg1;
- (void)setZoneIDs:(id)arg1;
- (id)zoneIDByRequestID;
- (id)zoneIDs;
- (id)zoneIDsToLock;

@end
