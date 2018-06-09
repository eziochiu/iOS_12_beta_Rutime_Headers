/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCCloudKitClient : NSObject {
    CKContainer * _container;
    CKDatabase * _database;
    <VCCloudKitClientDelegate> * _delegate;
    VCRecordZoneInfo * _recordZoneInfo;
}

@property (nonatomic, readonly) CKRecordZoneID *activeZoneID;
@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic) <VCCloudKitClientDelegate> *delegate;
@property (nonatomic, retain) CKServerChangeToken *latestServerChangeToken;
@property (nonatomic, retain) VCRecordZoneInfo *recordZoneInfo;

+ (struct NSOrderedSet { Class x1; }*)changesFromReconcilingChanges:(struct NSOrderedSet { Class x1; }*)arg1 withSavedRecords:(id)arg2 deletedRecordIDs:(id)arg3 partialFailures:(id)arg4;
+ (id)recordsFromResolvingSyncConflicts:(id)arg1;

- (void).cxx_destruct;
- (id)activeZoneID;
- (struct NSOrderedSet { Class x1; }*)allChanges:(id*)arg1;
- (bool)authenticateClient:(id*)arg1;
- (struct NSOrderedSet { Class x1; }*)changesSinceLastFetch:(id*)arg1;
- (struct NSOrderedSet { Class x1; }*)changesSinceServerChangeToken:(id)arg1 error:(id*)arg2;
- (id)container;
- (id)currentRecordZoneInfo;
- (id)database;
- (id)delegate;
- (bool)hasExistingRecordZoneChangeSubscription:(id*)arg1;
- (id)init;
- (bool)isCloudKitContainerAccessible:(id*)arg1;
- (id)latestServerChangeToken;
- (struct NSOrderedSet { Class x1; }*)pushChangesToCloudKit:(struct NSOrderedSet { Class x1; }*)arg1 operationError:(id*)arg2;
- (id)recordZoneInfo;
- (id)recordZoneInfoFromCreatingRecordZoneWithName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLatestServerChangeToken:(id)arg1;
- (void)setRecordZoneInfo:(id)arg1;
- (bool)setupRecordZone:(id*)arg1;
- (bool)shouldRetryInResponseToError:(id)arg1;
- (bool)subscribeToRecordZoneChangeNotifications:(id*)arg1;
- (void)waitToRecoverFromError:(id)arg1;

@end
