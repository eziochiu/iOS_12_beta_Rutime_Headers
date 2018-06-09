/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetAnalysisState : PLManagedObject

@property (nonatomic) int analysisState;
@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic, retain) NSString *assetUUID;
@property (nonatomic, retain) NSDate *ignoreUntilDate;
@property (nonatomic, retain) NSDate *lastIgnoredDate;
@property (nonatomic) double sortToken;
@property (nonatomic) int workerFlags;
@property (nonatomic) short workerType;

+ (bool)_bulkUpdateAnalysisStatesTo:(int)arg1 predicate:(id)arg2 error:(id*)arg3;
+ (id)_countOfAnalysisStatesByWorkerTypeWithPredicate:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (unsigned long long)_countOfAssetsAllowedForProcessingInLibrary:(id)arg1 error:(id*)arg2;
+ (bool)_inqApplyChanges:(id)arg1 assetUUID:(id)arg2 inManagedObjectContext:(id)arg3 allowUnsafeSetProcessed:(bool)arg4 error:(id*)arg5;
+ (id)_managedObjectContextForStateChanges;
+ (id)_managedObjectContextForStateChangesWithPersistentStoreCoordinator:(id)arg1;
+ (bool)_performTransactionApplyChanges:(id)arg1 assetUUID:(id)arg2 inManagedObjectContext:(id)arg3 allowUnsafeSetProcessed:(bool)arg4 error:(id*)arg5;
+ (bool)_performTransactionResolveConflicts:(id)arg1 originalChanges:(id)arg2 assetUUID:(id)arg3 inManagedObjectContext:(id)arg4 allowUnsafeSetProcessed:(bool)arg5 newChanges:(id*)arg6 error:(id*)arg7;
+ (void)_removeAnalysisRecordsWithPredicate:(id)arg1;
+ (id)_sanitizeChanges:(id)arg1;
+ (id)_subArrayOfChanges:(id)arg1 toRetryWithConflicts:(id)arg2;
+ (id)analysisCountsForWorkerType:(short)arg1;
+ (bool)applyAnalysisStateChanges:(id)arg1 assetUUID:(id)arg2 allowUnsafeSetProcessed:(bool)arg3 error:(id*)arg4;
+ (id)assetUUIDsFromAssetObjectIDs:(id)arg1 whereAllWorkerTypes:(id)arg2 matchState:(id)arg3;
+ (bool)cleanupInvalidIgnoreUntilDatesWithError:(id*)arg1;
+ (bool)clearIgnoreUntilDatesWithError:(id*)arg1;
+ (int)defaultWorkerFlagsForWorkerType:(short)arg1;
+ (id)deletedAssetUUIDsForAnalysisByWorkerType:(short)arg1 fetchLimit:(unsigned long long)arg2 inLibrary:(id)arg3 error:(id*)arg4;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertIntoManagedObjectContext:(id)arg1 forAsset:(id)arg2 workerType:(short)arg3 initialState:(int)arg4 lastIgnoreDate:(id)arg5 ignoreUntilDate:(id)arg6 workerFlags:(int)arg7;
+ (id)insertIntoPhotoLibrary:(id)arg1 forAsset:(id)arg2 workerType:(short)arg3 initialState:(int)arg4 lastIgnoreDate:(id)arg5 ignoreUntilDate:(id)arg6 workerFlags:(int)arg7;
+ (bool)isUnitTestWorker:(short)arg1;
+ (id)keyPathDictionaryWithWorkerType:(short)arg1 workerFlags:(int)arg2 analysisState:(int)arg3 lastIgnoredDate:(id)arg4 ignoreUntilDate:(id)arg5;
+ (bool)markStatesProcessedForWorkerType:(short)arg1 error:(id*)arg2;
+ (void)removeAnalysisRecordsForDeletedAssetUUIDs:(id)arg1 forWorkerType:(short)arg2;
+ (void)removeAnalysisRecordsWithNoAssetUUID;
+ (void)requestAnalysisCountsWithCompletion:(id /* block */)arg1;
+ (void)requestCountOfAnalysisRecordsForDeletedAssetsWithCompletion:(id /* block */)arg1;
+ (void)requestTotalProgressCountsForWorkerType:(short)arg1 states:(id)arg2 completion:(id /* block */)arg3;
+ (bool)resetPendingStatesWithError:(id*)arg1;
+ (id)workInfoForAnalysisWithWorkerType:(short)arg1 additionalStatesToExclude:(id)arg2 fetchLimit:(unsigned long long)arg3 inLibrary:(id)arg4 error:(id*)arg5;
+ (id)workerTypesPersistingAnalysisState;

- (id)debugLogDescription;
- (id)mutableKeyPathDictionary;
- (void)setAsset:(id)arg1;
- (void)setSortToken:(double)arg1;
- (void)unionWorkerFlags:(int)arg1;

@end
