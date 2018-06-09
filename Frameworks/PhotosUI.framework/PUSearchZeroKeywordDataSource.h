/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchZeroKeywordDataSource : NSObject <PHPhotoLibraryChangeObserver> {
    <PUSearchZeroKeywordChangeDelegate> * _delegate;
    bool  _fetchInProgress;
    NSObject<OS_dispatch_queue> * _fetchQueue;
    PHFetchResult * _peopleFetchResult;
    NSArray * _sections;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUSearchZeroKeywordChangeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fetchInProgress;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *fetchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHFetchResult *peopleFetchResult;
@property (nonatomic, copy) NSArray *sections;
@property (readonly) Class superclass;

+ (id)zeroKeywordLog;

- (void).cxx_destruct;
- (void)_fetchAssetsForAssetViewModels:(id)arg1;
- (void)_fetchKeyAssetsForViewModels:(id)arg1;
- (id)_personsForLocalIdentifiers:(id)arg1;
- (void)_registerChangeObservers;
- (id)_viewModelForKeywordDictionary:(id)arg1 ofType:(long long)arg2 peopleByKeyword:(id)arg3;
- (void)dealloc;
- (id)debugDictionary;
- (id)delegate;
- (id)description;
- (bool)fetchInProgress;
- (void)fetchItems;
- (id)fetchQueue;
- (id)init;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)peopleFetchResult;
- (void)photoLibraryDidChange:(id)arg1;
- (void)ppt_prepareZeroKeywordRequest:(id /* block */)arg1;
- (id)predicateForPersonFetching;
- (long long)sectionForSectionType:(long long)arg1;
- (long long)sectionTypeForSection:(unsigned long long)arg1;
- (id)sections;
- (void)setDelegate:(id)arg1;
- (void)setFetchInProgress:(bool)arg1;
- (void)setFetchQueue:(id)arg1;
- (void)setPeopleFetchResult:(id)arg1;
- (void)setSections:(id)arg1;
- (id)tapToRadarAttachments;
- (id)titleForSection:(unsigned long long)arg1;
- (id)viewModelForIndexPath:(id)arg1;

@end
