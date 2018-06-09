/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCloudHomeZone : HMDCloudZone {
    NSMutableDictionary * _perUserShareGroups;
    HMDCloudShareGroup * _shareGroup;
    bool  _sharedHome;
}

@property (nonatomic, readonly) NSMutableDictionary *perUserShareGroups;
@property (nonatomic, retain) HMDCloudShareGroup *shareGroup;
@property (getter=isSharedHome, nonatomic, readonly) bool sharedHome;

+ (void)createHomeZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(id /* block */)arg5;
+ (id)zoneRootRecordName;
+ (id)zoneSharedRootRecordName;
+ (id)zoneSubscriptionName:(id)arg1;

- (void).cxx_destruct;
- (void)addCloudRecord:(id)arg1 ownerID:(id)arg2;
- (void)cloudRecordWithObjectID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cloudRecordWithObjectIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cloudRecordsForParentID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)createCloudZoneChangeTemporaryCache:(bool)arg1;
- (id)description;
- (void)fetchMigratedObjects:(id /* block */)arg1;
- (bool)isRootRecord:(id)arg1;
- (bool)isSharedHome;
- (void)markMigratedObjectsAsMigrated;
- (id)perUserShareGroups;
- (void)setServerChangeToken:(id)arg1;
- (void)setShareGroup:(id)arg1;
- (id)shareGroup;

@end
