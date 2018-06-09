/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPrimaryResourceDataStore : PLResourceDataStore <PLResourceDataStore> {
    PLCloudPhotoLibraryManager * _cplManager;
    NSMutableDictionary * _inflightCPLDownloadTaskIdentifiersByRequestID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _pendingCPLDownloadShouldRunByRequestID;
    NSURL * _resourceDirectoryURL;
}

@property (nonatomic, retain) PLCloudPhotoLibraryManager *cplManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *resourceDirectoryURL;
@property (readonly) Class superclass;

+ (bool)isMasterThumbRecipeID:(unsigned int)arg1;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (unsigned int)masterThumbRecipeID;
+ (unsigned int)storeID;
+ (id)supportedRecipes;

- (void).cxx_destruct;
- (void)_downloadCPLResourceForAsset:(id)arg1 resourceType:(unsigned long long)arg2 options:(id)arg3 taskDidBeginHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)_expectedFilePathForMasterThumbnailForAsset:(id)arg1;
- (void)_handleCPLDownloadCompleteWithAssetObjectID:(id)arg1 resourceObjectID:(id)arg2 managedObjectContext:(id)arg3;
- (bool)canStoreExternalResource:(id)arg1;
- (bool)canStreamResource:(id)arg1;
- (void)cancelLocalAvailabilityChangeRequest:(unsigned long long)arg1;
- (id)cplManager;
- (id)descriptionForSubtype:(long long)arg1;
- (id)init;
- (id)keyFromKeyStruct:(const void*)arg1;
- (id)name;
- (unsigned long long)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(id /* block */)arg6;
- (void)requestRemoteAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(id /* block */)arg6;
- (void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 inContext:(id)arg3 completion:(id /* block */)arg4;
- (id)resourceDataForKey:(id)arg1 assetID:(id)arg2;
- (id)resourceDirectoryURL;
- (id)resourceURLForKey:(id)arg1 assetID:(id)arg2;
- (void)setCplManager:(id)arg1;
- (void)setResourceDirectoryURL:(id)arg1;
- (bool)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id*)arg5 resultingResource:(id*)arg6;
- (void)transitional_reconsiderLocalAvailabilityBasedOnExistingLocationOfCPLResource:(id)arg1 givenFilePath:(id)arg2;
- (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;
- (bool)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;
- (id)virtualResourcesForAsset:(id)arg1;

@end
