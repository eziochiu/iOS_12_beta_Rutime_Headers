/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentList : PLManagedObject <PLAssetContainerList, PLMomentListData> {
    PLMomentNameInfo * _cachedNameInfo;
    bool  _loadedNameInfo;
}

@property (nonatomic, readonly, retain) NSArray *batchedMoments;
@property (nonatomic, readonly) unsigned long long containersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) short generationType;
@property (nonatomic) short granularityLevel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSArray *localizedLocationNames;
@property (nonatomic, readonly, retain) NSString *localizedTitle;
@property (nonatomic, retain) NSOrderedSet *moments;
@property (nonatomic, retain) NSOrderedSet *momentsForMegaMoment;
@property (nonatomic, retain) NSOrderedSet *momentsForYear;
@property (nonatomic, retain) NSDate *representativeDate;
@property (nonatomic, retain) NSData *reverseLocationData;
@property (nonatomic) bool reverseLocationDataContainsLocation;
@property (nonatomic) bool reverseLocationDataIsValid;
@property (nonatomic) int sortIndex;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *title2;
@property (nonatomic, retain) NSString *title3;
@property (nonatomic, readonly, retain) NSObject<NSCopying> *uniqueObjectID;
@property (nonatomic, retain) NSArray *userTitles;
@property (nonatomic, retain) NSString *uuid;

+ (id)allMomentListsInLibrary:(id)arg1 forLevel:(short)arg2;
+ (id)allMomentListsInLibrary:(id)arg1 forLevel:(short)arg2 returnsObjectsAsFaults:(bool)arg3;
+ (id)allMomentListsInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id*)arg3;
+ (id)allMomentListsInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id*)arg3 returnsObjectsAsFaults:(bool)arg4;
+ (id)allMomentListsRequiringAnalysisInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)allMomentListsRequiringAnalysisInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id*)arg3;
+ (id)descriptionForGranularityLevel:(short)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)findOrCreateMegaMomentListForLeftoverMomentsInMonth:(long long)arg1 inYear:(long long)arg2 withDay:(long long)arg3 inManagedObjectContext:(id)arg4;
+ (id)findOrCreateYearMomentListForYear:(long long)arg1 inManagedObjectContext:(id)arg2;

- (id)_batchedMomentsPredicate;
- (id)_typeDescription;
- (void)_updateCachedNameInfoIfNeeded;
- (bool)_validateForInsertOrUpdate:(id*)arg1;
- (void)addMoment:(id)arg1 forMegaMomentAtIndex:(unsigned long long)arg2;
- (void)addMoment:(id)arg1 forMomentListLevel:(short)arg2;
- (void)addMomentToFront:(id)arg1;
- (void)addMoments:(id)arg1;
- (void)addMoments:(id)arg1 forMomentListLevel:(short)arg2;
- (void)addMomentsForMegaMoment:(id)arg1;
- (void)addMomentsForMegaMomentObject:(id)arg1;
- (void)addMomentsForYear:(id)arg1;
- (void)addMomentsForYearObject:(id)arg1;
- (void)awakeFromInsert;
- (id)batchedMoments;
- (bool)canEditContainers;
- (id)containers;
- (unsigned long long)containersCount;
- (id)containersRelationshipName;
- (void)dealloc;
- (void)delete;
- (id)diagnosticInformation;
- (void)didTurnIntoFault;
- (void)insertMomentsForMegaMoment:(id)arg1 atIndexes:(id)arg2;
- (void)insertMomentsForYear:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inMomentsForMegaMomentAtIndex:(unsigned long long)arg2;
- (void)insertObject:(id)arg1 inMomentsForYearAtIndex:(unsigned long long)arg2;
- (void)invalidateNameInfo;
- (bool)isEmpty;
- (bool)isMeaningful;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)momentListDebugDescription;
- (id)moments;
- (id)pl_debugDescription;
- (void)removeMoment:(id)arg1 forMomentListLevel:(short)arg2;
- (void)removeMoments:(id)arg1;
- (void)removeMoments:(id)arg1 forMomentListLevel:(short)arg2;
- (void)removeMomentsForMegaMoment:(id)arg1;
- (void)removeMomentsForMegaMomentAtIndexes:(id)arg1;
- (void)removeMomentsForMegaMomentObject:(id)arg1;
- (void)removeMomentsForYear:(id)arg1;
- (void)removeMomentsForYearAtIndexes:(id)arg1;
- (void)removeMomentsForYearObject:(id)arg1;
- (void)removeObjectFromMomentsForMegaMomentAtIndex:(unsigned long long)arg1;
- (void)removeObjectFromMomentsForYearAtIndex:(unsigned long long)arg1;
- (void)replaceMomentsForMegaMomentAtIndexes:(id)arg1 withMomentsForMegaMoment:(id)arg2;
- (void)replaceMomentsForYearAtIndexes:(id)arg1 withMomentsForYear:(id)arg2;
- (void)replaceObjectInMomentsForMegaMomentAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)replaceObjectInMomentsForYearAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)setMoments:(id)arg1;
- (void)setUserTitles:(id)arg1;
- (bool)supportsDiagnosticInformation;
- (id)uniqueObjectID;
- (id)userTitles;
- (bool)validateForInsert:(id*)arg1;
- (bool)validateForUpdate:(id*)arg1;
- (void)willSave;

@end