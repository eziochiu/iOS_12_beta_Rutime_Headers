/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDataSourceConfiguration : NSObject {
    NSSet * _allowedUUIDs;
    PHFetchResult * _collectionListFetchResult;
    long long  _curationType;
    NSDictionary * _existingAssetCollectionFetchResults;
    NSDictionary * _existingKeyAssetsFetchResults;
    NSArray * _fetchPropertySets;
    NSArray * _filterPersons;
    NSPredicate * _filterPredicate;
    bool  _hideHiddenAssets;
    unsigned long long  _options;
    PHPhotoLibrary * _photoLibrary;
    PHAsset * _referenceAsset;
}

@property (nonatomic, retain) NSSet *allowedUUIDs;
@property (nonatomic, readonly) PHFetchResult *collectionListFetchResult;
@property (nonatomic) long long curationType;
@property (nonatomic, retain) NSDictionary *existingAssetCollectionFetchResults;
@property (nonatomic, retain) NSDictionary *existingKeyAssetsFetchResults;
@property (nonatomic, retain) NSArray *fetchPropertySets;
@property (nonatomic, retain) NSArray *filterPersons;
@property (nonatomic, retain) NSPredicate *filterPredicate;
@property (nonatomic) bool hideHiddenAssets;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (nonatomic, retain) PHAsset *referenceAsset;

- (void).cxx_destruct;
- (id)allowedUUIDs;
- (id)collectionListFetchResult;
- (long long)curationType;
- (id)existingAssetCollectionFetchResults;
- (id)existingKeyAssetsFetchResults;
- (id)fetchPropertySets;
- (id)filterPersons;
- (id)filterPredicate;
- (bool)hideHiddenAssets;
- (id)init;
- (id)initWithCollectionListFetchResult:(id)arg1 options:(unsigned long long)arg2;
- (unsigned long long)options;
- (id)photoLibrary;
- (id)referenceAsset;
- (void)setAllowedUUIDs:(id)arg1;
- (void)setCurationType:(long long)arg1;
- (void)setExistingAssetCollectionFetchResults:(id)arg1;
- (void)setExistingKeyAssetsFetchResults:(id)arg1;
- (void)setFetchPropertySets:(id)arg1;
- (void)setFilterPersons:(id)arg1;
- (void)setFilterPredicate:(id)arg1;
- (void)setHideHiddenAssets:(bool)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setReferenceAsset:(id)arg1;

@end
