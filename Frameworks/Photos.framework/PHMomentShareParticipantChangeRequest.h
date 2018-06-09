/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMomentShareParticipantChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest> {
    bool  _clientEntitled;
    NSString * _clientName;
    int  _clientProcessID;
    PHChangeRequestHelper * _helper;
}

@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) int clientProcessID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *emailAddress;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHChangeRequestHelper *helper;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (getter=isMutated, readonly) bool mutated;
@property (getter=isNew, readonly) bool new;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedMomentShareParticipant;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;

+ (bool)canGenerateUUIDWithoutEntitlements;
+ (id)changeRequestForMomentShareParticipant:(id)arg1;
+ (id)creationRequestForMomentShareParticipantWithEmailAddress:(id)arg1;
+ (id)creationRequestForMomentShareParticipantWithPhoneNumber:(id)arg1;
+ (void)deleteMomentShareParticipants:(id)arg1;

- (void).cxx_destruct;
- (bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (bool)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (id)clientName;
- (int)clientProcessID;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (void)didMutate;
- (id)emailAddress;
- (void)encodeToXPCDict:(id)arg1;
- (id)helper;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (bool)isClientEntitled;
- (bool)isMutated;
- (bool)isNew;
- (id)managedEntityName;
- (id)objectID;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)phoneNumber;
- (id)placeholderForCreatedMomentShareParticipant;
- (bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2;
- (bool)prepareForServicePreflightCheck:(id*)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setType:(unsigned short)arg1;
- (unsigned short)type;
- (id)uuid;
- (bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (bool)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;

@end
