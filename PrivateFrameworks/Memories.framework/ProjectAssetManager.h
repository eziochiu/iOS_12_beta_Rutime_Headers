/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface ProjectAssetManager : NSObject <PHAssetRepresentationDownloadObserver> {
    bool  _automaticallyStartDownloads;
    bool  _cacheRepairableEditItems;
    NSArray * _cachedRepairableEditItems;
    <ProjectAssetManagerDelegate> * _delegate;
    double  _downloadProgress;
    bool  _downloading;
    NSDictionary * _movieMatches;
    unsigned long long  _numberOfCompletedWorkItems;
    unsigned long long  _numberOfWorkItems;
    NSSet * _offlineAssetRepresentations;
    Project * _project;
    MBProjectClipsLoader * _sharedClipsLoader;
}

@property (nonatomic) bool automaticallyStartDownloads;
@property (nonatomic) bool cacheRepairableEditItems;
@property (nonatomic, retain) NSArray *cachedRepairableEditItems;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ProjectAssetManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double downloadProgress;
@property (getter=isDownloading, nonatomic) bool downloading;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *movieMatches;
@property unsigned long long numberOfCompletedWorkItems;
@property unsigned long long numberOfWorkItems;
@property (nonatomic, retain) NSSet *offlineAssetRepresentations;
@property (nonatomic) Project *project;
@property (nonatomic, retain) MBProjectClipsLoader *sharedClipsLoader;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateDownloadProgress;
- (id)assetURLsMatchingCriteria:(long long)arg1 breakOnFirst:(bool)arg2;
- (bool)automaticallyStartDownloads;
- (bool)cacheRepairableEditItems;
- (id)cachedRepairableEditItems;
- (void)cancelDownloads;
- (void)connectivityDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)downloadOfAssetRepresentation:(id)arg1 didProgress:(double)arg2;
- (void)downloadOfflineAssetsIfNecessary;
- (double)downloadProgress;
- (void)downloadStateOfAssetRepresentationDidChange:(id)arg1 previousState:(unsigned long long)arg2 currentState:(unsigned long long)arg3;
- (id)editItemsMatchingCriteria:(long long)arg1 breakOnFirst:(bool)arg2;
- (id)fetchOptionsForEditItem:(id)arg1 creationDateTolerance:(double)arg2;
- (id)filePathForAdjustedVideoIdentifierURL:(id)arg1;
- (void)hasAssetsInPhotosTrash:(id /* block */)arg1;
- (bool)hasMismatchedAssets;
- (bool)hasMismatchedDurationAssets;
- (bool)hasMissingAssets;
- (bool)hasModifiedAssets;
- (bool)hasOfflineAssets;
- (bool)hasProjectAssetForIdentifierURL:(id)arg1;
- (id)initWithProject:(id)arg1;
- (bool)isDownloading;
- (id)localOriginalImageForIdentifierURL:(id)arg1;
- (id)matchLibraryAssets;
- (id)matchLocalMovies;
- (id)matchingAssetsForEditItem:(id)arg1 creationDateTolerance:(double)arg2;
- (id)mismatchedDurationEditItems;
- (id)mismatchedEditItems;
- (id)missingEditItems;
- (id)movieMatches;
- (unsigned long long)numberOfAssetsMatchingCriteria:(long long)arg1;
- (unsigned long long)numberOfCompletedWorkItems;
- (unsigned long long)numberOfMismatchedAssets;
- (unsigned long long)numberOfMissingAssets;
- (unsigned long long)numberOfOfflineAssets;
- (unsigned long long)numberOfWorkItems;
- (id)offlineAssetRepresentations;
- (id)offlineEditItems;
- (id)originalImageForIdentifierURL:(id)arg1;
- (void)postProgressNotification;
- (id)predicateForCreationDate:(id)arg1 tolerance:(double)arg2;
- (id)predicateForDuration:(double)arg1;
- (id)project;
- (void)projectDidFinishAllEditing:(id)arg1;
- (id)projectOriginalImageForIdentifierURL:(id)arg1;
- (void)repairEditItems:(id)arg1;
- (void)repairMismatchedAssets;
- (void)repairMissingAssets;
- (id)repairableEditItems;
- (void)setAutomaticallyStartDownloads:(bool)arg1;
- (void)setCacheRepairableEditItems:(bool)arg1;
- (void)setCachedRepairableEditItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDownloadProgress:(double)arg1;
- (void)setDownloading:(bool)arg1;
- (void)setMovieMatches:(id)arg1;
- (void)setNumberOfCompletedWorkItems:(unsigned long long)arg1;
- (void)setNumberOfWorkItems:(unsigned long long)arg1;
- (void)setOfflineAssetRepresentations:(id)arg1;
- (void)setProject:(id)arg1;
- (void)setSharedClipsLoader:(id)arg1;
- (id)sharedClipsLoader;
- (void)updateDownloadProgress;

@end
