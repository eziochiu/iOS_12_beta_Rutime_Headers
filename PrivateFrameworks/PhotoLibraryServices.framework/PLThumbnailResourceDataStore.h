/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLThumbnailResourceDataStore : PLResourceDataStore <PLResourceDataStore>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (bool)resourceIsSquare:(id)arg1;
+ (unsigned int)storeID;
+ (id)supportedRecipes;

- (bool)canStoreExternalResource:(id)arg1;
- (id)descriptionForSubtype:(long long)arg1;
- (id)keyFromKeyStruct:(const void*)arg1;
- (id)name;
- (unsigned long long)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(id /* block */)arg6;
- (void)requestRemoteAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(id /* block */)arg6;
- (void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 inContext:(id)arg3 completion:(id /* block */)arg4;
- (id)resourceDataForKey:(id)arg1 assetID:(id)arg2;
- (id)resourceURLForKey:(id)arg1;
- (bool)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id*)arg5 resultingResource:(id*)arg6;
- (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;
- (bool)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;
- (id)virtualResourcesForAsset:(id)arg1;

@end
