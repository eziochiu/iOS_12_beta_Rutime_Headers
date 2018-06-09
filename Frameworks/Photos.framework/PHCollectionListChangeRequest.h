/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCollectionListChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest> {
    bool  _clientEntitled;
    NSString * _clientName;
    int  _clientProcessID;
    PHRelationshipChangeRequestHelper * _collectionsHelper;
    PHChangeRequestHelper * _helper;
    PHCollectionList * _originalCollectionList;
}

@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) int clientProcessID;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *collectionsHelper;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHChangeRequestHelper *helper;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (getter=isMutated, readonly) bool mutated;
@property (getter=isNew, readonly) bool new;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedCollectionList;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) NSString *uuid;

+ (id)_changeRequestForCollectionList:(id)arg1 optionalChildCollections:(id)arg2;
+ (bool)canGenerateUUIDWithoutEntitlements;
+ (id)changeRequestForCollectionList:(id)arg1;
+ (id)changeRequestForCollectionList:(id)arg1 childCollections:(id)arg2;
+ (id)creationRequestForCollectionListWithTitle:(id)arg1;
+ (void)deleteCollectionLists:(id)arg1;

- (void).cxx_destruct;
- (id)_mutableObjectIDsAndUUIDs;
- (void)_prepareAssetIDsIfNeeded;
- (void)_prepareWithFetchResult:(id)arg1;
- (void)_setOriginalCollectionList:(id)arg1;
- (void)addChildCollection:(id)arg1;
- (void)addChildCollections:(id)arg1;
- (bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (bool)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (id)clientName;
- (int)clientProcessID;
- (id)collectionsHelper;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)description;
- (void)didMutate;
- (void)encodeToXPCDict:(id)arg1;
- (id)helper;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (void)insertChildCollection:(id)arg1 inChildCollectionsAtIndex:(unsigned long long)arg2;
- (void)insertChildCollections:(id)arg1 atIndexes:(id)arg2;
- (bool)isClientEntitled;
- (bool)isMutated;
- (bool)isNew;
- (id)managedEntityName;
- (void)moveChildCollectionsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)objectID;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)placeholderForCreatedCollectionList;
- (bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2;
- (bool)prepareForServicePreflightCheck:(id*)arg1;
- (void)removeChildCollection:(id)arg1;
- (void)removeChildCollectionFromChildCollectionsAtIndex:(unsigned long long)arg1;
- (void)removeChildCollections:(id)arg1;
- (void)removeChildCollectionsAtIndexes:(id)arg1;
- (void)replaceChildCollectionsAtIndex:(unsigned long long)arg1 withChildCollection:(id)arg2;
- (void)replaceChildCollectionsAtIndexes:(id)arg1 withChildCollections:(id)arg2;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)uuid;
- (bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (bool)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;

@end
