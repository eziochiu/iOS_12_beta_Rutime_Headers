/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentGeneration : NSObject {
    PLMomentAnalyzer * _analyzer;
    NSSet * _clusteringDeletedClusters;
    unsigned long long  _inProgressCount;
    NSObject<OS_dispatch_queue> * _incrementalGenerationStateQueue;
    bool  _isGenerationPassInProgress;
    bool  _isInStressTestMode;
    <PLMomentGenerationDataManagement> * _momentGenerationDataManager;
    PLMomentAnalyzer * _pairedAnalyzer;
    NSMutableArray * _pendingCompletionBlocks;
    NSMutableDictionary * _pendingDeletes;
    NSMutableOrderedSet * _pendingInsertsAndUpdates;
}

@property (nonatomic) PLMomentAnalyzer *analyzer;
@property (nonatomic, retain) NSSet *clusteringDeletedClusters;
@property (nonatomic, readonly) <PLMomentGenerationDataManagement> *momentGenerationDataManager;

+ (id)_insertMegaMomentListsForMoments:(id)arg1 inMomentDataManager:(id)arg2;
+ (id)_insertYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inMomentDataManager:(id)arg4;
+ (bool)_rebuildAllMomentListsWithDataManager:(id)arg1 error:(id*)arg2;
+ (void)_updateMoment:(id)arg1 fromCluster:(id)arg2 inManager:(id)arg3;
+ (id)generateMergeCustomMomentUUID;
+ (id)generateSplitCustomMomentUUID;

- (void)_appendAssetsToReplayLog:(id)arg1 forBatchUpdate:(bool)arg2;
- (void)_cleanUpMoment:(id)arg1;
- (void)_clearReplayLog;
- (bool)_deleteAllMomentDataInManager:(id)arg1 incremental:(bool)arg2 error:(id*)arg3;
- (id)_detailsForAsset:(id)arg1 simpleOnly:(bool)arg2;
- (id)_detailsForMoment:(id)arg1;
- (id)_insertAndUpdateRemainingMomentsInManager:(id)arg1 withAffectedMoments:(id)arg2;
- (id)_insertMegaMomentListsForMoments:(id)arg1 inMomentDataManager:(id)arg2;
- (id)_insertMomentsForMomentClusters:(id)arg1 inManager:(id)arg2;
- (id)_insertYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inMomentDataManager:(id)arg4;
- (bool)_isAsset:(id)arg1 identicalToAssetForMoments:(id)arg2;
- (id)_logEntryForAssets:(id)arg1 isBatchUpdate:(bool)arg2;
- (id)_momentClustersForAssets:(id)arg1 inManager:(id)arg2 updateDeletedClusters:(bool)arg3;
- (id)_nameForMomentGenerationType:(short)arg1;
- (id)_newPublicGlobalUUIDsToAssetsMappingWithAssets:(id)arg1;
- (void)_processMomentsWithAssets:(id)arg1 hiddenAssets:(id)arg2 inManager:(id)arg3 affectedMoments:(id)arg4 updatedMoments:(id*)arg5;
- (bool)_rebuildAllMomentsInManager:(id)arg1 shouldAnalyze:(bool)arg2 error:(id*)arg3;
- (void)_refreshObjects:(id)arg1 withDataManager:(id)arg2;
- (void)_runIncrementalGenerationPassWithCompletionHandler:(id /* block */)arg1;
- (void)_updateIncrementalMomentGeneration;
- (bool)_writeDetails:(id)arg1 toFilepath:(id)arg2 withDefaultFilename:(id)arg3;
- (id)allAssetMetadataWriteToFile:(id)arg1;
- (id)allMomentsMetadataWriteToFile:(id)arg1;
- (id)analyzer;
- (void)clearUserInfluencedMoments;
- (id)clusteringDeletedClusters;
- (void)dealloc;
- (void)generateWithAssetInsertsAndUpdates:(id)arg1 assetDeletes:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)generateWithIncrementalDataCompletionHandler:(id /* block */)arg1;
- (id)initWithMomentGenerationDataManager:(id)arg1;
- (id)momentGenerationDataManager;
- (id)momentGenerationStatus;
- (void)rebuildAllMomentLists:(id /* block */)arg1;
- (bool)rebuildAllMomentsWithManager:(id)arg1 error:(id*)arg2;
- (void)rebuildAllMomentsWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveChangesForAssetInsertsAndUpdates:(id)arg1 assetDeletes:(id)arg2;
- (void)setAnalyzer:(id)arg1;
- (void)setClusteringDeletedClusters:(id)arg1;

@end
