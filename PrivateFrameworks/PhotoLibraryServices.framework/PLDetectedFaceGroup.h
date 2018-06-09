/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDetectedFaceGroup : PLManagedObject

@property (nonatomic, retain) PLPerson *associatedPerson;
@property (nonatomic, retain) NSSet *detectedFaces;
@property (nonatomic) PLDetectedFace *keyFace;
@property (nonatomic) int personBuilderState;
@property (nonatomic) int unnamedFaceCount;
@property (nonatomic, retain) NSString *uuid;

+ (void)batchFetchFaceGroupByFaceUUIDWithFaceUUIDs:(id)arg1 predicate:(id)arg2 completion:(id /* block */)arg3;
+ (id)detectedFaceGroupWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;

- (void)awakeFromInsert;
- (id)mutableDetectedFaces;
- (void)refreshFaces;
- (void)willSave;

@end
