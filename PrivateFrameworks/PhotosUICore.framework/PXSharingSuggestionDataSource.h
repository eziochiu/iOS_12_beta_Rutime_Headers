/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSharingSuggestionDataSource : PXPeopleDataSource <PHPhotoLibraryChangeObserver> {
    NSObject<OS_dispatch_queue> * _fetchQueue;
    bool  _prefetchingStarted;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool prefetchingStarted;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)imageCacheDidChanged:(id)arg1;
- (id)initWithName:(id)arg1 objectsReloadBlock:(id /* block */)arg2;
- (void)photoLibraryDidChange:(id)arg1;
- (void)prefetchThumbnailsForTargetSize:(struct CGSize { double x1; double x2; })arg1 maxFetchCount:(unsigned long long)arg2;
- (bool)prefetchingStarted;
- (void)setMembers:(id)arg1;
- (void)setPrefetchingStarted:(bool)arg1;
- (void)startListeningForChanges;
- (void)stopListeningForChanges;
- (id)titleAtIndex:(unsigned long long)arg1;

@end
