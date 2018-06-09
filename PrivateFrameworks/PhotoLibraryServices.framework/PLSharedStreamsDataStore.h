/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSharedStreamsDataStore : PLResourceDataStore <PLResourceDataStore>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned int)_masterThumbRecipeID;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (unsigned int)storeID;
+ (id)supportedRecipes;

- (short)_cloudSharedAssetPlaceholderKindFromSharedStreamsResourceType:(unsigned int)arg1;
- (bool)_isDerivativeForSharedStreamsType:(unsigned int)arg1;
- (short)_localAvailabilityForAsset:(id)arg1 album:(id)arg2 type:(unsigned int)arg3;
- (unsigned int)_mainResourceTypeForAsset:(id)arg1;
- (void)_prepareForDownloadNotification:(id)arg1 atFileURL:(id)arg2 completion:(id /* block */)arg3;
- (short)_remoteAvailabilityForType:(unsigned int)arg1;
- (short)_resourceTypeForSharedStreamsType:(unsigned int)arg1;
- (id)_sharedStreamsExternalResourceForAsset:(id)arg1 album:(id)arg2 type:(unsigned int)arg3;
- (id)_utiStringForAsset:(id)arg1 type:(unsigned int)arg2;
- (bool)canStoreExternalResource:(id)arg1;
- (bool)canStreamResource:(id)arg1;
- (id)descriptionForSubtype:(long long)arg1;
- (id)keyFromKeyStruct:(const void*)arg1;
- (id)name;
- (unsigned long long)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(id /* block */)arg6;
- (void)requestRemoteAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(id /* block */)arg6;
- (void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 inContext:(id)arg3 completion:(id /* block */)arg4;
- (id)requiredExternalResourcesForMigratingOrImportingAsset:(id)arg1;
- (id)resourceDataForKey:(id)arg1 assetID:(id)arg2;
- (id)resourceURLForKey:(id)arg1 assetID:(id)arg2;
- (bool)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id*)arg5 resultingResource:(id*)arg6;
- (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;
- (bool)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;
- (id)virtualResourcesForAsset:(id)arg1;

@end
