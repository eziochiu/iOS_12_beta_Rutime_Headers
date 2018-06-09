/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFaceGroup : PHObject <PVFaceGroupProtocol> {
    long long  _personBuilderState;
    long long  _personModelId;
    long long  _unnamedFaceCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long faceCountInFaceGroup;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDirty;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) long long personBuilderState;
@property (nonatomic, readonly) long long personModelId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long unnamedFaceCount;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)entityKeyMap;
+ (id)fetchEmptyFaceGroupsWithOptions:(id)arg1;
+ (id)fetchFaceGroupsForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchFaceGroupsGroupedByFaceLocalIdentifierForFaces:(id)arg1 options:(id)arg2;
+ (id)fetchFaceGroupsWithFace:(id)arg1 options:(id)arg2;
+ (id)fetchFaceGroupsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchFaceGroupsWithOptions:(id)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;

- (Class)changeRequestClass;
- (long long)getPersonModelId;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (long long)personBuilderState;
- (long long)personModelId;
- (long long)unnamedFaceCount;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis

- (unsigned long long)faceCountInFaceGroup;
- (bool)isDirty;

@end
