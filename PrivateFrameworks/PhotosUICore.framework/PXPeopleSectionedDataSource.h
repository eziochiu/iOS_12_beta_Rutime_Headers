/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleSectionedDataSource : NSObject <PXPhotoLibraryUIChangeObserver> {
    NSHashTable * _changeObservers;
    NSArray * _dataSources;
    NSString * _localizedTitle;
    id  _pauseToken;
    NSObject<OS_dispatch_queue> * _reloadQueue;
}

@property (nonatomic, retain) NSHashTable *changeObservers;
@property (nonatomic, readonly, copy) NSArray *dataSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, retain) id pauseToken;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *reloadQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dataSourceForFetchType:(unsigned long long)arg1;
- (id)_dataSourceForIndexPath:(id)arg1;
- (id)_dataSourceForSection:(long long)arg1;
- (unsigned long long)_fetchTypeForPersonType:(long long)arg1;
- (id)_generateChangeDetailsForChangeInstance:(id)arg1;
- (long long)_sectionForFetchType:(unsigned long long)arg1;
- (void)addChangeObserver:(id)arg1;
- (void)addVisiblePerson:(id)arg1;
- (id)allMembers;
- (bool)canReorderMembersInSection:(long long)arg1;
- (void)cancelImageLoadingForItem:(id)arg1;
- (void)changeMembersAtIndexPaths:(id)arg1 toPersonType:(long long)arg2 changeDetailsBlock:(id /* block */)arg3;
- (id)changeObservers;
- (id)dataSources;
- (void)dealloc;
- (unsigned long long)fetchTypeForSection:(long long)arg1;
- (void)imageAtIndexPath:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 withCompletionBlock:(id /* block */)arg3 fastDisplayBlock:(id /* block */)arg4;
- (id)indexPathForInsertingMember:(id)arg1 intoSection:(long long)arg2;
- (id)indexPathOfMember:(id)arg1;
- (id)initWithSections:(id)arg1;
- (bool)isSectionDisclosed:(long long)arg1;
- (void)loadAndStartListeningToLibraryNotifications;
- (id)localizedDisclosedTitleForSection:(long long)arg1;
- (id)localizedTitle;
- (id)localizedTitleForSection:(long long)arg1;
- (id)memberAtIndexPath:(id)arg1;
- (id)membersAtIndexPaths:(id)arg1;
- (void)moveMemberAtIndexPath:(id)arg1 toIndexPath:(id)arg2 shouldUpdateImmediately:(bool)arg3;
- (unsigned long long)numberOfDisclosedSections;
- (unsigned long long)numberOfMembersInSection:(long long)arg1;
- (unsigned long long)numberOfMembersWithContactName;
- (unsigned long long)numberOfMembersWithStringName;
- (unsigned long long)numberOfSections;
- (void)pauseListeningForChangesWithTimeout:(double)arg1;
- (id)pauseToken;
- (id)peopleAtIndexPaths:(id)arg1;
- (id)personAtIndexPath:(id)arg1;
- (long long)personTypeForMemberAtIndexPath:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (unsigned long long)photoQuantityAtIndexPath:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)reloadFromDatabase;
- (id)reloadQueue;
- (void)removeChangeObserver:(id)arg1;
- (void)removeVisiblePerson:(id)arg1;
- (void)resumeListeningForChanges;
- (void)setChangeObservers:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setPauseToken:(id)arg1;
- (void)setSection:(long long)arg1 disclosed:(bool)arg2;
- (void)startListeningToLibraryNotifications;
- (void)stopListeningToLibraryNotifications;
- (id)titleAtIndexPath:(id)arg1;
- (unsigned long long)totalMemberCount;

@end
