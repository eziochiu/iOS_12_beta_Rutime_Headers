/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesSnapshotFactory : NSObject <PHPhotoLibraryChangeObserver> {
    NSTimer * _assetCountChangedTimer;
    PHFetchResult * _assetCountFetchResult;
    long long  _cachedCount;
    NSString * _cachedFilePath;
    UIImage * _cachedSnapshotImage;
    NSString * _cachedSnapshotImageIdentifier;
    NSObject<OS_dispatch_queue> * _concurentQueue;
    bool  _countCacheInvalidated;
    <PXPlacesSnapshotFactoryDelegate> * _delegate;
    bool  _isRegisteredForPhotoLibraryChanges;
    NSMutableArray * _localSearches;
    UIImage * _placeholderImage;
    PHFetchResult * _placesAssetsFetchResult;
    PHAssetCollection * _placesCollection;
    NSMutableArray * _requestedCompletionBlocks;
    NSObject<OS_dispatch_queue> * _serialQueue;
    PHAsset * _snapshottedAsset;
}

@property (nonatomic, retain) NSTimer *assetCountChangedTimer;
@property (nonatomic, retain) PHFetchResult *assetCountFetchResult;
@property (nonatomic) bool countCacheInvalidated;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXPlacesSnapshotFactoryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isRegisteredForPhotoLibraryChanges;
@property (nonatomic, retain) NSMutableArray *localSearches;
@property (nonatomic, retain) PHFetchResult *placesAssetsFetchResult;
@property (nonatomic, retain) PHAssetCollection *placesCollection;
@property (nonatomic, retain) PHAsset *snapshottedAsset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchImageOfAsset:(id)arg1 withSnapshotOptions:(id)arg2 andCompletion:(id /* block */)arg3;
- (void)_handleAsyncPlacesLibraryAlbumSnapshotWithSnapshotOptions:(id)arg1 andCompletion:(id /* block */)arg2;
- (bool)_imageExistsWithLocalIdentifier:(id)arg1;
- (id)_latestAssetWithLocation;
- (id)_placeHolderImageForExtendedTraitCollection:(id)arg1;
- (void)_requestPlacesSnapshotWithSnapshotOptions:(id)arg1 visibleRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2 andCompletion:(id /* block */)arg3;
- (void)_saveImage:(id)arg1 ofAsset:(id)arg2 atPath:(id)arg3;
- (id)assetCountChangedTimer;
- (id)assetCountFetchResult;
- (long long)assetCountWithForcedRefresh:(bool)arg1;
- (bool)countCacheInvalidated;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isRegisteredForPhotoLibraryChanges;
- (id)localSearches;
- (void)photoLibraryDidChange:(id)arg1;
- (id)placesAssetsFetchResult;
- (id)placesCollection;
- (void)removePreviousCachedImage;
- (void)requestAssetCountWithForcedRefresh:(bool)arg1 completion:(id /* block */)arg2;
- (void)requestMapSnapshotForQuery:(id)arg1 snapshotOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)requestPlacesImageOfAsset:(id)arg1 withSnapshotOptions:(id)arg2 andCompletion:(id /* block */)arg3;
- (void)requestPlacesLibraryAlbumSnapshotWithSnapshotOptions:(id)arg1 andCompletion:(id /* block */)arg2;
- (void)requestPlacesSnapshotWithSnapshotOptions:(id)arg1 assets:(id)arg2 andCompletion:(id /* block */)arg3;
- (void)setAssetCountChangedTimer:(id)arg1;
- (void)setAssetCountFetchResult:(id)arg1;
- (void)setCountCacheInvalidated:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsRegisteredForPhotoLibraryChanges:(bool)arg1;
- (void)setLocalSearches:(id)arg1;
- (void)setPlacesAssetsFetchResult:(id)arg1;
- (void)setPlacesCollection:(id)arg1;
- (void)setSnapshottedAsset:(id)arg1;
- (id)snapshottedAsset;
- (void)tickAssetCountChangedTimer:(id)arg1;

@end
