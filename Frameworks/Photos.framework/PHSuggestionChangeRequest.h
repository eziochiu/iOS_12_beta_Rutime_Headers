/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHSuggestionChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest> {
    bool  _clientEntitled;
    NSString * _clientName;
    int  _clientProcessID;
    PHChangeRequestHelper * _helper;
    PHRelationshipChangeRequestHelper * _keyAssetsHelper;
    PHRelationshipChangeRequestHelper * _representativeAssetsHelper;
}

@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) int clientProcessID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHChangeRequestHelper *helper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *keyAssetsHelper;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (getter=isMutated, readonly) bool mutated;
@property (getter=isNew, readonly) bool new;
@property (nonatomic) unsigned short notificationState;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedSuggestion;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *representativeAssetsHelper;
@property (nonatomic, retain) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) NSString *uuid;

+ (bool)canGenerateUUIDWithoutEntitlements;
+ (id)changeRequestForSuggestion:(id)arg1;
+ (id)creationRequestForSuggestion;
+ (id)creationRequestForSuggestionWithType:(unsigned short)arg1 subtype:(unsigned short)arg2 keyAssets:(id)arg3 representativeAssets:(id)arg4 creationDate:(id)arg5 relevantUntilDate:(id)arg6 version:(long long)arg7;
+ (void)deleteSuggestions:(id)arg1;

- (void).cxx_destruct;
- (void)_calculateAndSetExpungeDate;
- (id)actionData;
- (id)activationDate;
- (bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (bool)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (id)clientName;
- (int)clientProcessID;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)creationDate;
- (void)didMutate;
- (void)encodeToXPCDict:(id)arg1;
- (id)endDate;
- (id)expungeDate;
- (id)featuresData;
- (id)helper;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (bool)isClientEntitled;
- (bool)isMutated;
- (bool)isNew;
- (id)keyAssetsHelper;
- (id)managedEntityName;
- (void)markAccepted;
- (void)markActive;
- (void)markDeclined;
- (void)markRetired;
- (unsigned short)notificationState;
- (id)objectID;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)placeholderForCreatedSuggestion;
- (bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2;
- (bool)prepareForServicePreflightCheck:(id*)arg1;
- (id)relevantUntilDate;
- (id)representativeAssetsHelper;
- (void)setActionData:(id)arg1;
- (void)setActionProperties:(id)arg1;
- (void)setActivationDate:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setExpungeDate:(id)arg1;
- (void)setFeaturesData:(id)arg1;
- (void)setFeaturesProperties:(id)arg1;
- (void)setKeyAssets:(id)arg1;
- (void)setNotificationState:(unsigned short)arg1;
- (void)setRelevantUntilDate:(id)arg1;
- (void)setRepresentativeAssets:(id)arg1;
- (void)setStartAndEndDatesWithKeyAssets:(id)arg1 representativeAssets:(id)arg2;
- (void)setStartDate:(id)arg1;
- (void)setState:(unsigned short)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtype:(unsigned short)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(unsigned short)arg1;
- (void)setVersion:(long long)arg1;
- (id)startDate;
- (unsigned short)state;
- (id)subtitle;
- (unsigned short)subtype;
- (id)title;
- (unsigned short)type;
- (id)uuid;
- (bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (bool)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (long long)version;

@end
