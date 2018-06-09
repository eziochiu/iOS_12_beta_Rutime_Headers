/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDupeManager : NSObject {
    NSMutableArray * _assetsWithUpdatedVisibility;
    NSMutableDictionary * _cloudAssetsToAnalyze;
    NSMutableSet * _cloudInserts;
    bool  _doneWithCloudAssets;
    bool  _isRebuilding;
    NSMutableArray * _normalAssetsObjectIDsToAnalyze;
    NSMutableSet * _normalInserts;
    NSCountedSet * _pauseReasons;
    PLPhotoLibrary * _photoLibrary;
    double  _rebuildStartTime;
    NSSet * _softPauseReasons;
}

@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;

+ (bool)_computeHashForAsset:(id)arg1;
+ (id)_hashForFileAtPath:(id)arg1 utiType:(id)arg2;
+ (bool)_resetDupesAnalysisInManagedObjectContext:(id)arg1;
+ (void)_setPlaceHolderHashOnAsset:(id)arg1;
+ (id)hashForAsset:(id)arg1;
+ (id)placeholderHash;
+ (bool)resetDupesAnalysisForOfflineStore:(id)arg1;
+ (id)sharedInstance;

- (short)_adjustCloudAssetVisibilityStateForManagedObjectContext:(id)arg1;
- (bool)_analyzeDupeForCloudAssetsAndHashes:(id)arg1 andPublicGlobalUUIDs:(id)arg2 forManagedObjectContext:(id)arg3;
- (void)_analyzeDupeForNormalAsset:(id)arg1;
- (void)_analyzeDupes;
- (short)_analyzeDupesForCloudInsertsForManagedObjectContext:(id)arg1;
- (short)_analyzeDupesForNormalInsertsForManagedObjectContext:(id)arg1;
- (void)_analyzeDupesForRebuild;
- (short)_analyzeNormalAssetsForManagedObjectContext:(id)arg1;
- (short)_computeAssetHashesForManagedObjectContext:(id)arg1;
- (short)_computeCloudAssetHashesForManagedObjectContext:(id)arg1;
- (void)_continueAnalysis;
- (void)_continueAnalysisForRebuild;
- (void)_continueAnalysisForRebuildOrPause;
- (id)_duplicateCloudAssetForHash:(id)arg1 orPublicGlobalUUID:(id)arg2;
- (void)_noteAssetVisibilityDidChange:(id)arg1;
- (void)_performAnalysisTransaction:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (bool)_prepareCloudAssetsToAnalyzeForManagedObjectContext:(id)arg1;
- (void)_removeCloudAssetFromAnalysis:(id)arg1;
- (void)_resetSoftPauseReasons;
- (void)_updateVisibilityState:(short)arg1 forAsset:(id)arg2;
- (void)analyzeDupesWithNormalInserts:(id)arg1 cloudInserts:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)init;
- (void)launchDupeAnalysisIfNeeded;
- (void)pauseAnalysisWithReason:(id)arg1;
- (void)persistPublicGlobalUUIDsForAssets:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)photoLibrary;
- (void)resetDupesAnalysis;
- (void)resumeAnalysisWithReason:(id)arg1;

@end
