/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudResource : PLManagedObject <PLCloudResource>

@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic, retain) NSString *assetUuid;
@property (nonatomic) short cloudLocalState;
@property (nonatomic, retain) PLCloudMaster *cloudMaster;
@property (nonatomic, readonly) unsigned long long cplType;
@property (nonatomic, retain) NSDate *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *filePath;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic, retain) NSString *fingerprint;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long height;
@property (nonatomic) bool isAvailable;
@property (nonatomic) bool isLocallyAvailable;
@property (nonatomic, retain) NSString *itemIdentifier;
@property (nonatomic, retain) NSDate *lastOnDemandDownloadDate;
@property (nonatomic, retain) NSDate *lastPrefetchDate;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic) short prefetchCount;
@property (nonatomic, retain) NSDate *prunedAt;
@property (nonatomic, readonly, retain) CPLScopedIdentifier *scopedIdentifier;
@property (nonatomic, readonly) unsigned long long sourceCplType;
@property (nonatomic) int sourceType;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic, retain) NSString *uniformTypeIdentifier;
@property (nonatomic, readonly, retain) NSString *utiString;
@property (nonatomic) long long width;

+ (bool)_countOfLocalCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 forMediumSized:(bool)arg3 localCount:(unsigned long long*)arg4 unavailableCount:(unsigned long long*)arg5 error:(id*)arg6;
+ (unsigned long long)bytesNeededToDownloadOriginalResourcesInLibrary:(id)arg1;
+ (bool)countOfLocalCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 localCount:(unsigned long long*)arg3 unavailableCount:(unsigned long long*)arg4 error:(id*)arg5;
+ (bool)countOfMediumOriginalLocalCloudResourcesInManagedObjectContext:(id)arg1 localCount:(unsigned long long*)arg2 unavailableCount:(unsigned long long*)arg3 error:(id*)arg4;
+ (id)duplicateCloudResource:(id)arg1 forAsset:(id)arg2 withFilePath:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 forAsset:(id)arg2 withCPLResource:(id)arg3 adjusted:(bool)arg4 withCreationDate:(id)arg5;
+ (id)nonLocalResourcesInManagedObjectContext:(id)arg1 forAssetUUIDs:(id)arg2 cplResourceTypes:(id)arg3;
+ (void)resetCloudResourcesStateForCloudInManagedObjectContext:(id)arg1 hardReset:(bool)arg2;
+ (void)resetPrefetchStateForResourcesWithResourceType:(long long)arg1 itemIdentifiers:(id)arg2 inLibrary:(id)arg3;

- (void)_duplicatePropertiesFromCloudResource:(id)arg1 withFilePath:(id)arg2 forAssetUuid:(id)arg3;
- (void)applyPropertiesFromCloudResource:(id)arg1;
- (id)cplResourceIncludeFile:(bool)arg1;
- (unsigned long long)cplType;
- (id)description;
- (void)markAsLocallyAvailableWithFilePath:(id)arg1;
- (void)markAsNotLocallyAvailable;
- (void)prepareForDeletion;
- (id)scopedIdentifier;
- (void)setIsLocallyAvailable:(bool)arg1;
- (void)setLastPrefetchDate:(id)arg1;
- (void)setPrefetchCount:(short)arg1;
- (void)setPrunedAt:(id)arg1;
- (unsigned long long)sourceCplType;
- (id)utiString;

@end
