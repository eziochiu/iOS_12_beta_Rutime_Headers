/* made by EzioChiu.
 */

@protocol PLResourceDataStore <NSObject>

@required

+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (unsigned int)storeID;
+ (NSArray *)supportedRecipes;

- (bool)canStoreExternalResource:(PLValidatedExternalResource *)arg1;
- (bool)canStreamResource:(PLInternalResource *)arg1;
- (void)cancelLocalAvailabilityChangeRequest:(unsigned long long)arg1;
- (NSString *)descriptionForSubtype:(long long)arg1;
- (<PLResourceDataStoreKey> *)keyFromKeyStruct:(const void*)arg1;
- (NSString *)name;
- (unsigned long long)requestLocalAvailabilityChange:(void *)arg1 forResource:(void *)arg2 asset:(void *)arg3 inContext:(void *)arg4 options:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 13: short, <PLResource> *, PLManagedAsset *, NSManagedObjectContext *, PLResourceLocalAvailabilityRequestOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, long long, PLInternalResource *, void*
- (void)requestRemoteAvailabilityChange:(void *)arg1 forResource:(void *)arg2 asset:(void *)arg3 inContext:(void *)arg4 options:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 12: short, <PLResource> *, PLManagedAsset *, NSManagedObjectContext *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, PLInternalResource *, void*
- (void)requestStreamingURLForResource:(void *)arg1 asset:(void *)arg2 inContext:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 11: <PLResource> *, PLManagedAsset *, NSManagedObjectContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSURL *, NSDate *, void*
- (NSData *)resourceDataForKey:(id <PLResourceDataStoreKey>)arg1 assetID:(id <PLAssetID>)arg2;
- (NSURL *)resourceURLForKey:(id <PLResourceDataStoreKey>)arg1 assetID:(id <PLAssetID>)arg2;
- (bool)storeExternalResource:(PLValidatedExternalResource *)arg1 forAsset:(PLManagedAsset *)arg2 inContext:(NSManagedObjectContext *)arg3 options:(PLResourceDataStoreOptions *)arg4 error:(id*)arg5 resultingResource:(id*)arg6;
- (NSSet *)updateDerivativeResourcesForAsset:(PLManagedAsset *)arg1 forLifecycleEvent:(unsigned int)arg2;
- (bool)videoResource:(PLInternalResource *)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;
- (NSArray *)virtualResourcesForAsset:(PLManagedAsset *)arg1;

@end
