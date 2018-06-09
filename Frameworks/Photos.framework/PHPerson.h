/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHPerson : PHObject <PGPersonResult, PVPersonProtocol, PXPerson> {
    NSDictionary * _contactMatchingDictionary;
    NSString * _displayName;
    long long  _faceCount;
    bool  _inPersonNamingModel;
    unsigned long long  _manualOrder;
    NSString * _name;
    NSString * _personUri;
    long long  _type;
    long long  _verifiedType;
}

@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) NSDictionary *contactMatchingDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) unsigned long long faceCount;
@property (nonatomic, readonly) long long faceCount;
@property (nonatomic, readonly) bool favorite;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hidden;
@property (getter=isInPersonNamingModel, nonatomic, readonly) bool inPersonNamingModel;
@property (readonly) bool isPersonModel;
@property (nonatomic) bool isVerified;
@property (readonly) bool isVerified;
@property (nonatomic, retain) <PVFaceProtocol> *keyFace;
@property (nonatomic, readonly) NSString *keywordDescription;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic) long long manualOrder;
@property (nonatomic, readonly) unsigned long long manualOrder;
@property (nonatomic, readonly) NSString *name;
@property (readonly) NSString *name;
@property (readonly) unsigned long long numberOfAssets;
@property (nonatomic, readonly) NSString *personUri;
@property (readonly) NSString *px_displayName;
@property (readonly) NSDate *px_keyPhotoDate;
@property (readonly) NSString *px_localIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (getter=isVerified, nonatomic, readonly) bool verified;
@property (nonatomic, readonly) long long verifiedType;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)_convertToPersonSuggestion:(id)arg1;
+ (id)_momentLocalIdentifiersForAssetCollection:(id)arg1;
+ (id)_packageSuggestionList:(id)arg1;
+ (id)_personSuggestionMarkedAsConfirmed:(bool)arg1 fromPersonSuggestion:(id)arg2;
+ (long long)_personSuggestionsForPerson:(id)arg1 confirmedPersonSuggestions:(id)arg2 rejectedPersonSuggestions:(id)arg3 fromClient:(id)arg4 completion:(id /* block */)arg5;
+ (id)_verifiedPersonWithLocalIdentifier:(id)arg1 fromPhotoLibrary:(id)arg2;
+ (id)displayNameFromContact:(id)arg1;
+ (id)entityKeyMap;
+ (id)fetchAssociatedPersonsGroupedByFaceGroupLocalIdentifierForFaceGroups:(id)arg1 options:(id)arg2;
+ (id)fetchFinalMergeTargetPersonsForPersonWithUUID:(id)arg1 options:(id)arg2;
+ (id)fetchHomePersonUUIDsGroupedByAssetUUIDForAssetUUIDs:(id)arg1 options:(id)arg2;
+ (id)fetchInvalidMergeCandidatePersonsForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchMergeCandidatePersonsForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchPersonAssociatedWithFaceGroup:(id)arg1 options:(id)arg2;
+ (id)fetchPersonCountGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2;
+ (id)fetchPersonWithFace:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsForAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsForContacts:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsInAsset:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsWithOptions:(id)arg1;
+ (id)fetchPersonsWithType:(long long)arg1 options:(id)arg2;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchRejectedPersonsForFace:(id)arg1 options:(id)arg2;
+ (id)fetchSuggestedRecipientsForAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchType;
+ (id)fullNameFromContact:(id)arg1;
+ (id)identifierCode;
+ (id)inferredContactByPersonLocalIdentifierForPersons:(id)arg1;
+ (id)localIdentifierExpressionForFetchRequests;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsKeyFaces;
+ (bool)managedObjectSupportsPersonFilters;
+ (id)personSuggestionsForPerson:(id)arg1 confirmedPersonSuggestions:(id)arg2 rejectedPersonSuggestions:(id)arg3;
+ (long long)personSuggestionsForPerson:(id)arg1 confirmedPersonSuggestions:(id)arg2 rejectedPersonSuggestions:(id)arg3 completion:(id /* block */)arg4;
+ (id)personToKeepForCloudConistencyFromPersons:(id)arg1;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (long long)suggestVerifiedPersonForFace:(id)arg1 completion:(id /* block */)arg2;
+ (long long)suggestVerifiedPersonForPerson:(id)arg1 completion:(id /* block */)arg2;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (long long)updateKeyFacesOfPersons:(id)arg1 forceUpdate:(bool)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (Class)changeRequestClass;
- (id)contactMatchingDictionary;
- (id)description;
- (id)displayName;
- (long long)faceCount;
- (id)inferredContact;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)isInPersonNamingModel;
- (bool)isVerified;
- (id)linkedContactWithKeysToFetch:(id)arg1;
- (unsigned long long)manualOrder;
- (void)markAsNeedingKeyFace;
- (id)name;
- (id)personUri;
- (id)suggestedContacts;
- (long long)type;
- (long long)verifiedType;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph

- (long long)compareToPerson:(id)arg1;
- (id)contactIdentifier;
- (id)keywordDescription;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis

- (bool)favorite;
- (bool)hidden;
- (id)keyFace;
- (void)pv_addMergeCandidatePersons:(id)arg1;
- (void)setIsVerified:(bool)arg1;
- (void)setKeyFace:(id)arg1;
- (void)setManualOrder:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)_px_titleStringForPeople:(id)arg1 singlePersonFallback:(id)arg2 groupFallback:(id)arg3;
+ (id)px_fetchPersonsForSuggestion:(id)arg1 options:(id)arg2;
+ (void)px_loadRepresentativeFacesForPersons:(id)arg1;
+ (id)px_memoryTitleStringFromPeople:(id)arg1;
+ (id)px_slideshowTitleStringForPeople:(id)arg1;
+ (id)px_titleStringForPeople:(id)arg1;

- (bool)isPersonModel;
- (unsigned long long)numberOfAssets;
- (id)px_displayName;
- (id)px_keyPhotoDate;
- (id)px_localIdentifier;
- (void)requestFaceTileImageWithTargetSize:(struct CGSize { double x1; double x2; })arg1 cropFactor:(unsigned long long)arg2 style:(unsigned long long)arg3 cacheResult:(bool)arg4 boundFaceRect:(bool)arg5 completionBlock:(id /* block */)arg6;

@end
