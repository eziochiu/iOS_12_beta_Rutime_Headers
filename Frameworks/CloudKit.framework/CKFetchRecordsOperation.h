/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordsOperation : CKDatabaseOperation <MSPCloudRequest> {
    NSMutableDictionary * _assetInfoByArrayIndexByRecordKeyByRecordID;
    NSDictionary * _assetTransferOptionsByRecordTypeAndKey;
    NSArray * _desiredKeys;
    NSDictionary * _desiredPackageFileIndices;
    bool  _dropInMemoryAssetContentASAP;
    id /* block */  _fetchRecordsCompletionBlock;
    bool  _isFetchCurrentUserOperation;
    NSMutableSet * _packagesToDestroy;
    id /* block */  _perRecordCompletionBlock;
    id /* block */  _perRecordProgressBlock;
    NSMutableDictionary * _recordErrors;
    NSArray * _recordIDs;
    NSDictionary * _recordIDsToETags;
    NSMutableDictionary * _recordIDsToRecords;
    NSDictionary * _recordIDsToVersionETags;
    bool  _shouldFetchAssetContent;
    bool  _shouldFetchAssetContentInMemory;
    NSDictionary * _webSharingIdentityDataByRecordID;
}

@property (nonatomic, retain) NSMutableDictionary *assetInfoByArrayIndexByRecordKeyByRecordID;
@property (nonatomic, retain) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic, copy) NSDictionary *desiredPackageFileIndices;
@property (nonatomic) bool dropInMemoryAssetContentASAP;
@property (nonatomic, copy) id /* block */ fetchRecordsCompletionBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFetchCurrentUserOperation;
@property (nonatomic, retain) NSMutableSet *packagesToDestroy;
@property (nonatomic, copy) id /* block */ perRecordCompletionBlock;
@property (nonatomic, copy) id /* block */ perRecordProgressBlock;
@property (nonatomic, retain) NSMutableDictionary *recordErrors;
@property (nonatomic, copy) NSArray *recordIDs;
@property (nonatomic, retain) NSDictionary *recordIDsToETags;
@property (nonatomic, retain) NSMutableDictionary *recordIDsToRecords;
@property (nonatomic, retain) NSDictionary *recordIDsToVersionETags;
@property (nonatomic, readonly) bool shouldEnqueueDependenciesWhenPerformingAsCloudRequest;
@property (nonatomic) bool shouldFetchAssetContent;
@property (nonatomic) bool shouldFetchAssetContentInMemory;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *webSharingIdentityDataByRecordID;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)fetchCurrentUserRecordOperation;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (id)assetInfoByArrayIndexByRecordKeyByRecordID;
- (id)assetInfoForRecordID:(id)arg1 recordKey:(id)arg2 arrayIndex:(id)arg3;
- (id)assetTransferOptionsByRecordTypeAndKey;
- (bool)claimPackagesInRecord:(id)arg1 error:(id*)arg2;
- (id)desiredKeys;
- (id)desiredPackageFileIndices;
- (bool)dropInMemoryAssetContentASAP;
- (id /* block */)fetchRecordsCompletionBlock;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithRecordIDs:(id)arg1;
- (bool)isFetchCurrentUserOperation;
- (id)packagesToDestroy;
- (id /* block */)perRecordCompletionBlock;
- (id /* block */)perRecordProgressBlock;
- (void)performCKOperation;
- (id)recordErrors;
- (id)recordIDs;
- (id)recordIDsToETags;
- (id)recordIDsToRecords;
- (id)recordIDsToVersionETags;
- (void)setAssetInfoByArrayIndexByRecordKeyByRecordID:(id)arg1;
- (void)setAssetTransferOptionsByRecordTypeAndKey:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setDesiredPackageFileIndices:(id)arg1;
- (void)setDropInMemoryAssetContentASAP:(bool)arg1;
- (void)setFetchRecordsCompletionBlock:(id /* block */)arg1;
- (void)setIsFetchCurrentUserOperation:(bool)arg1;
- (void)setPackagesToDestroy:(id)arg1;
- (void)setPerRecordCompletionBlock:(id /* block */)arg1;
- (void)setPerRecordProgressBlock:(id /* block */)arg1;
- (void)setRecordErrors:(id)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRecordIDsToETags:(id)arg1;
- (void)setRecordIDsToRecords:(id)arg1;
- (void)setRecordIDsToVersionETags:(id)arg1;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (void)setShouldFetchAssetContentInMemory:(bool)arg1;
- (void)setWebSharingIdentityDataByRecordID:(id)arg1;
- (bool)shouldFetchAssetContent;
- (bool)shouldFetchAssetContentInMemory;
- (id)webSharingIdentityDataByRecordID;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

- (void)addCloudAccessCompletionBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (void)ic_removeAllCompletionBlocks;

@end
