/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchTopAssetsResult : NSObject <PHPhotoLibraryChangeObserver, PUSearchResultItem> {
    NSArray * _assetUUIDs;
    <PUSearchTopAssetsResultChangeDelegate> * _delegate;
    NSArray * _thumbnailAssets;
    PHFetchResult * _thumbnailAssetsFetchResult;
}

@property (nonatomic, readonly) NSArray *assetUUIDs;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUSearchTopAssetsResultChangeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long itemType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *thumbnailAssets;
@property (nonatomic, retain) PHFetchResult *thumbnailAssetsFetchResult;

- (void).cxx_destruct;
- (void)_curateThumbnailAssets;
- (id)_rangeSampledUUIDs:(id)arg1;
- (id)assetUUIDs;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithAssetUUIDs:(id)arg1;
- (unsigned long long)itemType;
- (void)photoLibraryDidChange:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setThumbnailAssetsFetchResult:(id)arg1;
- (id)thumbnailAssets;
- (id)thumbnailAssetsFetchResult;

@end
