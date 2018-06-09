/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMomentShareChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest> {
    bool  _clientEntitled;
    NSString * _clientName;
    int  _clientProcessID;
    PHChangeRequestHelper * _helper;
    PHMomentShare * _originalMomentShare;
    PHRelationshipChangeRequestHelper * _participantsHelper;
}

@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) int clientProcessID;
@property (nonatomic, retain) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHChangeRequestHelper *helper;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (getter=isMutated, readonly) bool mutated;
@property (getter=isNew, readonly) bool new;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *participantsHelper;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedMomentShare;
@property (nonatomic, retain) NSData *previewData;
@property (nonatomic) bool shouldIgnoreBudgets;
@property (nonatomic) bool shouldNotifyOnUploadCompletion;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) NSString *uuid;

+ (bool)canGenerateUUIDWithoutEntitlements;
+ (id)changeRequestForMomentShare:(id)arg1;
+ (id)creationRequestForMomentShareWithTitle:(id)arg1 mode:(short)arg2 creationDate:(id)arg3 createMomentShareAssetsFromAssets:(id)arg4 assetCreationOptions:(id)arg5 preview:(id)arg6;
+ (void)expungeMomentShares:(id)arg1;
+ (void)trashMomentShares:(id)arg1;
+ (id)validateMomentShareCreationDate:(id)arg1 error:(id*)arg2;
+ (id)validateMomentShareTitle:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_mutableParticipantsObjectIDsAndUUIDs;
- (void)_prepareParticipantsHelperIfNeeded;
- (void)_prepareParticipantsWithFetchResult:(id)arg1;
- (void)_setOriginalMomentShare:(id)arg1;
- (void)addParticipants:(id)arg1;
- (bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (bool)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (id)clientName;
- (int)clientProcessID;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (void)createMomentShareAssetsFromAssets:(id)arg1 withAssetCreationOptions:(id)arg2 withPreview:(id)arg3;
- (id)creationDate;
- (void)didMutate;
- (void)encodeToXPCDict:(id)arg1;
- (id)helper;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (bool)isClientEntitled;
- (bool)isMutated;
- (bool)isNew;
- (id)managedEntityName;
- (short)mode;
- (id)objectID;
- (id)participantsHelper;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)placeholderForCreatedMomentShare;
- (bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2;
- (bool)prepareForServicePreflightCheck:(id*)arg1;
- (id)previewData;
- (void)setCreationDate:(id)arg1;
- (void)setMode:(short)arg1;
- (void)setPreviewData:(id)arg1;
- (void)setShouldIgnoreBudgets:(bool)arg1;
- (void)setShouldNotifyOnUploadCompletion:(bool)arg1;
- (void)setThumbnailImageData:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldIgnoreBudgets;
- (bool)shouldNotifyOnUploadCompletion;
- (id)thumbnailImageData;
- (id)title;
- (id)uuid;
- (bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (bool)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;

@end
