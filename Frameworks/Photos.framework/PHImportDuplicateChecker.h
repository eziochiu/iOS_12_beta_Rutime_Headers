/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImportDuplicateChecker : NSObject <PHPhotoLibraryChangeObserver> {
    NSMutableDictionary * _assetIdentifierCache;
    NSMutableDictionary * _avchdAssetIdentifierCache;
    NSMutableDictionary * _dupInfoByObjectID;
    NSMutableDictionary * _foundPPTData;
    NSMutableDictionary * _generatedPPTData;
    NSDate * _lastChange;
    PHPhotoLibrary * _library;
    NSMutableDictionary * _notFoundPPTData;
    PFDispatchQueue * _queue;
    NSMutableDictionary * _sizeNameCache;
    NSMutableSet * _updatedDupInfos;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *foundPPTData;
@property (nonatomic, retain) NSMutableDictionary *generatedPPTData;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHPhotoLibrary *library;
@property (nonatomic, retain) NSMutableDictionary *notFoundPPTData;
@property (retain) PFDispatchQueue *queue;
@property (readonly) Class superclass;

+ (void)addLibrary:(id)arg1;
+ (id)dateWithDate:(id)arg1;
+ (id)doneWithDuplicateCheckerForLibrary:(id)arg1 forClient:(id)arg2;
+ (id)duplicateCheckerForClient:(id)arg1 andLibrary:(id)arg2;
+ (id)fetchAssetsFromLibrary:(id)arg1 withPredicates:(id)arg2 ofType:(unsigned long long)arg3;
+ (void)initialize;
+ (void)removeLibrary:(id)arg1;

- (void).cxx_destruct;
- (id)checkForDuplicate:(id)arg1 considerItemsInTheTrash:(bool)arg2;
- (void)checkForDuplicates:(id)arg1 considerItemsInTrash:(bool)arg2 forEach:(id /* block */)arg3 atEnd:(id /* block */)arg4;
- (void)dePopulateCachesWithObjectID:(id)arg1;
- (id)filterDuplicatesForItem:(id)arg1 duplicateSet:(id)arg2 considerItemsInTrash:(bool)arg3;
- (bool)findFingerprint:(id)arg1 forItem:(id)arg2 inCache:(id)arg3 considerTrash:(bool)arg4;
- (id)findMatchingAssetsForItem:(id)arg1 inSet:(id)arg2 matchingDate:(id*)arg3 confidence:(unsigned char*)arg4;
- (id)foundPPTData;
- (id)generatePPTData;
- (id)generatedPPTData;
- (id)getAssetObjectIdsFromObjectIds:(id)arg1;
- (id)initWithLibrary:(id)arg1;
- (id)library;
- (id)notFoundPPTData;
- (void)photoLibraryDidChange:(id)arg1;
- (void)populateCachesWithAssetInfo:(id)arg1;
- (unsigned long long)populateCachesWithAssetsInfos:(id)arg1;
- (id)queue;
- (void)recordTimeSinceStart:(double)arg1 inData:(id)arg2 forKey:(id)arg3;
- (void)removeDuplicateInfo:(id)arg1 forFingerprint:(id)arg2 inCache:(id)arg3;
- (void)setDupInfo:(id)arg1 forFingerprint:(id)arg2 inCache:(id)arg3;
- (void)setFoundPPTData:(id)arg1;
- (void)setGeneratedPPTData:(id)arg1;
- (void)setLibrary:(id)arg1;
- (void)setNotFoundPPTData:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)updateAssetsFromDupInfos;

@end
