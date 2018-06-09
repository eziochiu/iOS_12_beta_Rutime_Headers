/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeoplePersonDataSource : PXPeopleDataSource <PHPhotoLibraryChangeObserver> {
    NSDictionary * _assetsByFaces;
    PXPeopleFaceTileImageManager * _imageManager;
    NSMutableDictionary * _keyFacesByPersons;
    unsigned long long  _personFetchType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXPeopleFaceTileImageManager *imageManager;
@property (nonatomic) unsigned long long personFetchType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_applyChanges:(id)arg1;
- (id)_assetForFace:(id)arg1;
- (void)_asyncLoadImageForItem:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 withCompletionBlock:(id /* block */)arg3 fastDisplayBlock:(id /* block */)arg4;
- (void)_cacheFacesAndAssets;
- (id)_faceForPerson:(id)arg1;
- (id)_fetchResultForFetchType:(unsigned long long)arg1 fetchOptions:(id)arg2;
- (id)_itemsArrayFromObjects:(id)arg1;
- (id)_membersForModelObjects:(id)arg1;
- (long long)_personTypeForFetchType:(unsigned long long)arg1;
- (void)addVisiblePerson:(id)arg1;
- (void)cancelImageLoadingForItem:(id)arg1;
- (id)generateFetchResult;
- (id)imageManager;
- (id)initWithName:(id)arg1 personFetchType:(unsigned long long)arg2;
- (id)initWithName:(id)arg1 personFetchType:(unsigned long long)arg2 fetchLimit:(unsigned long long)arg3;
- (void)loadObjectsAndUpdateMembersWithCompletion:(id /* block */)arg1;
- (unsigned long long)personFetchType;
- (void)photoLibraryDidChange:(id)arg1;
- (void)removeVisiblePerson:(id)arg1;
- (void)setPersonFetchType:(unsigned long long)arg1;
- (void)startListeningForChanges;
- (void)stopListeningForChanges;
- (id)titleAtIndex:(unsigned long long)arg1;
- (void)updateKeyFace:(id)arg1 forPerson:(id)arg2;

@end
