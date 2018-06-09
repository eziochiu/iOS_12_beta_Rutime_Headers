/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitCollectionsDataSourceManagerConfiguration : NSObject {
    unsigned long long  _assetTypesToInclude;
    PHCollectionList * _collectionList;
    unsigned long long  _collectionTypesToInclude;
    PHFetchResult * _collectionsFetchResult;
    bool  _includePeopleAlbum;
    bool  _separateSectionsForSmartAndUserCollections;
    bool  _shouldIgnoreLibraryChanges;
}

@property (nonatomic) unsigned long long assetTypesToInclude;
@property (readonly) PHCollectionList *collectionList;
@property (nonatomic) unsigned long long collectionTypesToInclude;
@property (readonly) PHFetchResult *collectionsFetchResult;
@property (readonly) PHFetchOptions *customFetchOptions;
@property (nonatomic) bool includePeopleAlbum;
@property (nonatomic) bool separateSectionsForSmartAndUserCollections;
@property bool shouldIgnoreLibraryChanges;

- (void).cxx_destruct;
- (id)_generatePredicateForAssetTypesToInclude;
- (id)_newConfigurationWithCollectionList:(id)arg1 collectionsFetchResult:(id)arg2;
- (unsigned long long)assetTypesToInclude;
- (id)collectionList;
- (unsigned long long)collectionTypesToInclude;
- (id)collectionsFetchResult;
- (id)customFetchOptions;
- (bool)includePeopleAlbum;
- (id)init;
- (id)initWithCollectionList:(id)arg1;
- (id)initWithCollectionList:(id)arg1 collectionsFetchResult:(id)arg2;
- (id)initWithCollectionsFetchResult:(id)arg1;
- (bool)isRootFolder;
- (id)newConfigurationWithCollectionList:(id)arg1;
- (id)newConfigurationWithCollectionsFetchResult:(id)arg1;
- (bool)separateSectionsForSmartAndUserCollections;
- (void)setAssetTypesToInclude:(unsigned long long)arg1;
- (void)setCollectionTypesToInclude:(unsigned long long)arg1;
- (void)setIncludePeopleAlbum:(bool)arg1;
- (void)setIsRootFolder:(bool)arg1;
- (void)setSeparateSectionsForSmartAndUserCollections:(bool)arg1;
- (void)setShouldIgnoreLibraryChanges:(bool)arg1;
- (bool)shouldIgnoreLibraryChanges;

@end
