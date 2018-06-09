/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKRecordZone : NSObject {
    FCCKPrivateDatabase * _database;
    <FCCKRecordZoneDelegate> * _delegate;
    CKRecordZoneID * _recordZoneID;
    bool  _zoneReady;
}

@property (nonatomic, retain) FCCKPrivateDatabase *database;
@property (nonatomic) <FCCKRecordZoneDelegate> *delegate;
@property (nonatomic, retain) CKRecordZoneID *recordZoneID;
@property (getter=isZoneReady) bool zoneReady;

- (void).cxx_destruct;
- (id)database;
- (id)delegate;
- (id)description;
- (void)fetchChangesWithChangeToken:(id)arg1 desiredKeys:(id)arg2 fetchAllChanges:(bool)arg3 qualityOfService:(long long)arg4 completion:(id /* block */)arg5;
- (id)initWithDatabase:(id)arg1 delegate:(id)arg2 recordZoneID:(id)arg3;
- (bool)isZoneReady;
- (void)performActionWithRecordZone:(id /* block */)arg1;
- (id)recordZoneID;
- (void)setDatabase:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRecordZoneID:(id)arg1;
- (void)setZoneReady:(bool)arg1;

@end
