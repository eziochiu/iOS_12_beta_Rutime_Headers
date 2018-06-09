/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentShare : PLManagedObject <PLCloudDeletable>

@property (nonatomic) int assetCount;
@property (nonatomic, retain) NSSet *assets;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (nonatomic, copy) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSDate *expiryDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) short localPublishState;
@property (nonatomic, retain) NSSet *masters;
@property (nonatomic) short mode;
@property (nonatomic, retain) NSSet *participants;
@property (nonatomic) int photosCount;
@property (nonatomic, copy) NSData *previewData;
@property (nonatomic, copy) NSString *scopeIdentifier;
@property (nonatomic, copy) NSURL *shareURL;
@property (nonatomic) bool shouldIgnoreBudgets;
@property (nonatomic) bool shouldNotifyOnUploadCompletion;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic) short status;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSData *thumbnailImageData;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) short trashedState;
@property (nonatomic) int uploadedPhotosCount;
@property (nonatomic) int uploadedVideosCount;
@property (nonatomic, copy) NSString *uuid;
@property (nonatomic) int videosCount;

+ (id)_andPredicateWithTrashedState:(id)arg1;
+ (long long)_cloudDeletionTypeForStatus:(short)arg1;
+ (id)_momentSharesWithPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)cloudUUIDKeyForDeletion;
+ (void)deleteAllMomentSharesInManagedObjectContext:(id)arg1;
+ (void)deleteExpiredMomentSharesInManagedObjectContext:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (void)fetchMomentShareFromShareURL:(id)arg1 inPhotoLibrary:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)insertInPhotoLibrary:(id)arg1;
+ (id)listOfSyncedProperties;
+ (id)momentShareWithScopeIdentifier:(id)arg1 includeTrashed:(bool)arg2 inManagedObjectContext:(id)arg3;
+ (id)momentShareWithScopedIdentifier:(id)arg1 includeTrashed:(bool)arg2 inManagedObjectContext:(id)arg3;
+ (id)momentShareWithShareURL:(id)arg1 includeTrashed:(bool)arg2 inManagedObjectContext:(id)arg3;
+ (id)momentShareWithUUID:(id)arg1 includeTrashed:(bool)arg2 inManagedObjectContext:(id)arg3;
+ (id)updateOrInsertWithCPLMomentShare:(id)arg1 inPhotoLibrary:(id)arg2;

- (id)_contactStore;
- (bool)_isOwnerInContacts;
- (id)_modeDescription;
- (id)_owner;
- (id)_statusDescription;
- (void)_updateSharingStatusFromParticipant:(id)arg1;
- (void)acceptWithCompletionHandler:(id /* block */)arg1;
- (void)calculatePropertyValues;
- (long long)cloudDeletionType;
- (id)cloudUUIDForDeletion;
- (id)cplMomentShare;
- (unsigned long long)estimateUploadSize;
- (bool)isSyncableChange;
- (id)ownerIdentifier;
- (void)prepareForDeletion;
- (void)publishWithCompletionHandler:(id /* block */)arg1;
- (bool)shouldAutoAccept;
- (bool)supportsCloudUpload;
- (void)trash;
- (void)updateWithScopeChange:(id)arg1;
- (void)willSave;

@end
