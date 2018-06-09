/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreLocal : HMFObject <HMFLogging> {
    NSString * _datastoreFile;
    NSMutableDictionary * _storeCache;
    NSMutableArray * _zoneCache;
    struct sqlite3_stmt { } * begin;
    struct sqlite3_stmt { } * commit;
    struct sqlite3 { } * context;
    struct sqlite3_stmt { } * deleteGroup;
    struct sqlite3_stmt { } * deleteLog;
    struct sqlite3_stmt { } * deleteRecord;
    struct sqlite3_stmt { } * deleteShare;
    struct sqlite3_stmt { } * deleteZone;
    struct sqlite3_stmt { } * flushPushedXact;
    struct sqlite3_stmt { } * insertGroup;
    struct sqlite3_stmt { } * insertLog;
    struct sqlite3_stmt { } * insertLogOptions;
    struct sqlite3_stmt { } * insertRecord;
    struct sqlite3_stmt { } * insertShare;
    struct sqlite3_stmt { } * insertStore;
    struct sqlite3_stmt { } * insertZone;
    struct sqlite3_stmt { } * rollback;
    struct sqlite3_stmt { } * selectAllLog;
    struct sqlite3_stmt { } * selectGroups;
    struct sqlite3_stmt { } * selectLog;
    struct sqlite3_stmt { } * selectLogOptions;
    struct sqlite3_stmt { } * selectRecordGroup;
    struct sqlite3_stmt { } * selectRecordName;
    struct sqlite3_stmt { } * selectRecordNameNoShare;
    struct sqlite3_stmt { } * selectRecordParent;
    struct sqlite3_stmt { } * selectRecordParentNoShare;
    struct sqlite3_stmt { } * selectRecordParentUUID;
    struct sqlite3_stmt { } * selectRecordUUID;
    struct sqlite3_stmt { } * selectRecordUUIDNoShare;
    struct sqlite3_stmt { } * selectRecords;
    struct sqlite3_stmt { } * selectShares;
    struct sqlite3_stmt { } * selectStoreRecords;
    struct sqlite3_stmt { } * selectStores;
    struct sqlite3_stmt { } * selectZones;
    void * sqlite3_cache;
    struct sqlite3_stmt { } * updateGroupSubscription;
    struct sqlite3_stmt { } * updateGroupToken;
    struct sqlite3_stmt { } * updateLog;
    struct sqlite3_stmt { } * updateLogXactID;
    struct sqlite3_stmt { } * updateRecordSchema;
    struct sqlite3_stmt { } * updateShareShare;
    struct sqlite3_stmt { } * updateShareUsers;
}

@property (nonatomic, readonly) NSString *datastoreFile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *storeCache;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *zoneCache;

+ (void)cleanDatastoreFilesAt:(id)arg1 everything:(bool)arg2;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)_begin;
- (id)_commit;
- (id)_createNewDatastore:(id)arg1;
- (id)_deleteGroupWithID:(long long)arg1;
- (id)_deleteLog:(long long)arg1;
- (id)_deleteRecordWithGroupID:(long long)arg1 share:(long long)arg2 recordName:(id)arg3;
- (id)_deleteShareWithID:(long long)arg1;
- (id)_deleteZoneWithID:(long long)arg1;
- (id)_fetchGroupsForZone:(id)arg1 withError:(id*)arg2;
- (unsigned long long)_fetchIDForStore:(id)arg1 error:(id*)arg2;
- (id)_fetchRecordWithUUID:(id)arg1 root:(id)arg2 error:(id*)arg3;
- (void)_fetchRecordsWithGroupID:(long long)arg1 share:(long long)arg2 callback:(id /* block */)arg3;
- (void)_fetchRecordsWithGroupID:(long long)arg1 share:(long long)arg2 names:(id)arg3 callback:(id /* block */)arg4;
- (void)_fetchRecordsWithGroupID:(long long)arg1 share:(long long)arg2 parent:(id)arg3 type:(id)arg4 callback:(id /* block */)arg5;
- (void)_fetchRecordsWithGroupID:(long long)arg1 share:(long long)arg2 parentUuids:(id)arg3 callback:(id /* block */)arg4;
- (void)_fetchRecordsWithGroupID:(long long)arg1 share:(long long)arg2 uuids:(id)arg3 callback:(id /* block */)arg4;
- (id)_fetchSharesForGroup:(id)arg1 withError:(id*)arg2;
- (id)_fetchZonesWithError:(id*)arg1;
- (id)_fillStoreCache;
- (id)_fillZoneCache;
- (void)_freeResources;
- (long long)_insertGroupWithZoneID:(long long)arg1 root:(id)arg2 owner:(id)arg3 subscription:(id)arg4 error:(id*)arg5;
- (id)_insertLogOptionsWithID:(long long)arg1 options:(id)arg2;
- (unsigned long long)_insertLogWithRoot:(id)arg1 transaction:(id)arg2 set:(long long)arg3 error:(id*)arg4;
- (long long)_insertShareWithGroupID:(long long)arg1 root:(id)arg2 target:(id)arg3 error:(id*)arg4;
- (long long)_insertZoneWithName:(id)arg1 error:(id*)arg2;
- (id)_instanceResources:(bool)arg1 migrate:(bool)arg2;
- (void)_rollback;
- (id)_runSQLite3:(const char *)arg1 bind:(id)arg2 error:(id*)arg3;
- (void)_selectAllLog:(id /* block */)arg1;
- (void)_selectAllRecords:(id /* block */)arg1;
- (id)_selectLogOptionsWithID:(long long)arg1;
- (void)_selectLogWithRoot:(id)arg1 after:(long long)arg2 mask:(long long)arg3 compare:(long long)arg4 callback:(id /* block */)arg5;
- (id)_updateGroupWithID:(long long)arg1 serverChangeToken:(id)arg2;
- (id)_updateGroupWithID:(long long)arg1 subscription:(id)arg2;
- (id)_updateLog:(long long)arg1 mask:(long long)arg2 set:(long long)arg3;
- (id)_updateRecordWithGroupID:(long long)arg1 share:(long long)arg2 name:(id)arg3 schema:(id)arg4;
- (id)_updateRecordWithGroupID:(long long)arg1 share:(long long)arg2 store:(long long)arg3 name:(id)arg4 model:(id)arg5;
- (id)_updateRecordWithGroupID:(long long)arg1 share:(long long)arg2 store:(long long)arg3 name:(id)arg4 record:(id)arg5 uuid:(id)arg6 parentUUID:(id)arg7 type:(id)arg8 data:(id)arg9 encoding:(long long)arg10 schema:(id)arg11;
- (id)_updateRecordWithGroupID:(long long)arg1 share:(long long)arg2 store:(long long)arg3 record:(id)arg4;
- (id)_updateRecordWithGroupID:(long long)arg1 share:(long long)arg2 store:(long long)arg3 record:(id)arg4 data:(id)arg5 encoding:(long long)arg6;
- (id)_updateShareGroupWithID:(long long)arg1 share:(id)arg2 users:(id)arg3;
- (id)datastoreFile;
- (void)dealloc;
- (id)flush:(bool)arg1;
- (id)initWithDB:(id)arg1 migrate:(bool)arg2 error:(id*)arg3;
- (id)initWithDatastore:(id)arg1;
- (id)logIdentifier;
- (void)setStoreCache:(id)arg1;
- (void)setZoneCache:(id)arg1;
- (id)storeCache;
- (id)zoneCache;

@end
