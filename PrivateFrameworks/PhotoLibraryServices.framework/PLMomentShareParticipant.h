/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentShareParticipant : PLManagedObject

@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, retain) PLMomentShare *momentShare;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic) short status;
@property (nonatomic) short type;
@property (nonatomic, copy) NSString *userIdentifier;
@property (nonatomic, copy) NSString *uuid;

+ (id)_momentShareParticipantsWithPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInPhotoLibrary:(id)arg1;
+ (id)participantsWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)updateOrInsertWithCPLMomentShareParticipant:(id)arg1 inMomentShare:(id)arg2;

- (id)_statusDescription;
- (id)_typeDescription;
- (id)description;

@end
