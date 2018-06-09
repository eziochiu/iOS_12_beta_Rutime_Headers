/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRecordFetchAggregator : CKDDatabaseOperation {
    NSDictionary * _assetTransferOptionsByRecordTypeAndKey;
    unsigned long long  _curFetchOrder;
    CKDFetchRecordsOperation * _currentFetchOp;
    NSSet * _desiredKeys;
    id /* block */  _fetchAggregatorCompletionBlock;
    bool  _fetchAssetContents;
    NSObject<OS_dispatch_group> * _fetchGroup;
    NSMutableDictionary * _fetchInfosByOrder;
    NSObject<OS_dispatch_queue> * _fetchQueue;
    NSObject<OS_dispatch_source> * _fetchSource;
    bool  _forceDecryptionAttempt;
    unsigned long long  _highestReturnedOrder;
    bool  _markedToFinishByParent;
    bool  _preserveOrdering;
    CKDRecordCache * _recordCache;
    NSObject<OS_dispatch_source> * _recordReadySource;
    bool  _started;
    bool  _useRecordCache;
}

@property (nonatomic, retain) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property unsigned long long curFetchOrder;
@property (nonatomic) CKDFetchRecordsOperation *currentFetchOp;
@property (nonatomic, retain) NSSet *desiredKeys;
@property (nonatomic, copy) id /* block */ fetchAggregatorCompletionBlock;
@property (nonatomic) bool fetchAssetContents;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *fetchGroup;
@property (nonatomic, retain) NSMutableDictionary *fetchInfosByOrder;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *fetchQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *fetchSource;
@property (nonatomic) bool forceDecryptionAttempt;
@property unsigned long long highestReturnedOrder;
@property (getter=isMarkedToFinishByParent) bool markedToFinishByParent;
@property (nonatomic) bool preserveOrdering;
@property (nonatomic, readonly) CKDRecordCache *recordCache;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *recordReadySource;
@property bool started;
@property (nonatomic) bool useRecordCache;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)_addRecordFetchInfos:(id)arg1;
- (id)_fetchRecord:(id)arg1 recordReadyHandle:(bool*)arg2 withRecordCompletion:(id /* block */)arg3;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_finishRecordFetchAggregator;
- (void)_flushFetchedRecordsToConsumerLocked;
- (void)_flushFetchedRecordsToConsumerNoOrderingLocked;
- (void)_flushFetchedRecordsToConsumerOrderedLocked;
- (void)_lockedSendFetchRequest;
- (void)_performCallbackForFetchInfoLocked:(id)arg1;
- (void)_recordFetchesAvailable;
- (id)activityCreate;
- (id)assetTransferOptionsByRecordTypeAndKey;
- (unsigned long long)curFetchOrder;
- (id)currentFetchOp;
- (void)dealloc;
- (id)description;
- (id)desiredKeys;
- (id /* block */)fetchAggregatorCompletionBlock;
- (bool)fetchAssetContents;
- (id)fetchGroup;
- (id)fetchInfosByOrder;
- (id)fetchQueue;
- (void)fetchRecords:(id)arg1 withPerRecordCompletion:(id /* block */)arg2;
- (id)fetchSource;
- (void)finishIfAppropriate;
- (bool)forceDecryptionAttempt;
- (unsigned long long)highestReturnedOrder;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (bool)isMarkedToFinishByParent;
- (void)main;
- (bool)preserveOrdering;
- (id)recordCache;
- (id)recordReadySource;
- (void)setAssetTransferOptionsByRecordTypeAndKey:(id)arg1;
- (void)setCurFetchOrder:(unsigned long long)arg1;
- (void)setCurrentFetchOp:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setFetchAggregatorCompletionBlock:(id /* block */)arg1;
- (void)setFetchAssetContents:(bool)arg1;
- (void)setFetchGroup:(id)arg1;
- (void)setFetchInfosByOrder:(id)arg1;
- (void)setFetchQueue:(id)arg1;
- (void)setFetchSource:(id)arg1;
- (void)setForceDecryptionAttempt:(bool)arg1;
- (void)setHighestReturnedOrder:(unsigned long long)arg1;
- (void)setMarkedToFinishByParent:(bool)arg1;
- (void)setPreserveOrdering:(bool)arg1;
- (void)setRecordReadySource:(id)arg1;
- (void)setStarted:(bool)arg1;
- (void)setUseRecordCache:(bool)arg1;
- (bool)started;
- (bool)useRecordCache;

@end