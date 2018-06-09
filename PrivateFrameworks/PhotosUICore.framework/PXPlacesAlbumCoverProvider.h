/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPlacesAlbumCoverProvider : NSObject {
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    long long  _cachedCount;
    NSMutableDictionary * _cachedPlaceholders;
    UIImage * _cachedSnapshotImage;
    NSString * _cachedSnapshotImageIdentifier;
    PXPlacesSnapshotFactory * _factory;
    <PXPlacesSnapshotFactoryDelegate> * _factoryDelegate;
    PHAssetCollection * _placesCollection;
    NSObject<OS_dispatch_queue> * _requestsQueue;
}

@property (nonatomic, retain) NSMutableDictionary *cachedPlaceholders;
@property (nonatomic, retain) PXPlacesSnapshotFactory *factory;
@property (nonatomic, retain) <PXPlacesSnapshotFactoryDelegate> *factoryDelegate;
@property (nonatomic, retain) PHAssetCollection *placesCollection;

+ (id)cachedSnapshotPath;

- (void).cxx_destruct;
- (bool)_fetchCachedSnapshotImage:(out id*)arg1 andIdentifier:(out id*)arg2;
- (bool)_imageExistsWithLocalIdentifier:(id)arg1;
- (id)_placeHolderImageForExtendedTraitCollection:(id)arg1;
- (id)backgroundImageNameForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2;
- (id)cachedPlaceholders;
- (id)createAlbumPlaceHolderImageUsingTraitCollection:(id)arg1;
- (id)factory;
- (id)factoryDelegate;
- (id)initWithDelegate:(id)arg1 andPlacesCollection:(id)arg2;
- (id)placesAlbumCoverProviderLog;
- (id)placesCollection;
- (void)preloadCachedSnapshot;
- (void)preloadPlaceholderForTraitCollection:(id)arg1;
- (void)requestAssetCountWithForcedRefresh:(bool)arg1 completion:(id /* block */)arg2;
- (void)requestPlacesAlbumCover:(id)arg1 completion:(id /* block */)arg2;
- (void)setCachedPlaceholders:(id)arg1;
- (void)setFactory:(id)arg1;
- (void)setFactoryDelegate:(id)arg1;
- (void)setPlacesCollection:(id)arg1;

@end
