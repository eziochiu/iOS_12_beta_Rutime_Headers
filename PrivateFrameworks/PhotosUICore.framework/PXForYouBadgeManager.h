/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXForYouBadgeManager : PXObservable <PHPhotoLibraryChangeObserver, PXFeedSectionInfosManagerDelegate, PXMutableForYouBadgeManager> {
    unsigned long long  _cmmActivityUnreadCount;
    PHFetchResult * _cmmInvitesFetchResult;
    PXFeedSectionInfosManager * _feedSectionInfosManager;
    NSDate * _latestCMMActivityDate;
    NSDate * _latestSharedAlbumActivityDate;
    unsigned long long  _sharedAlbumActivityUnreadCount;
    unsigned long long  _unreadBadgeCount;
}

@property (nonatomic) unsigned long long cmmActivityUnreadCount;
@property (nonatomic, retain) PHFetchResult *cmmInvitesFetchResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXFeedSectionInfosManager *feedSectionInfosManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *latestCMMActivityDate;
@property (nonatomic, readonly) NSDate *latestSharedAlbumActivityDate;
@property (nonatomic) unsigned long long sharedAlbumActivityUnreadCount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long unreadBadgeCount;

- (void).cxx_destruct;
- (void)_inboxLastSeenDateDidChange:(id)arg1;
- (void)_invalidateFetches;
- (void)_startListeningForChanges;
- (void)_stopListeningForChanges;
- (void)_updateCMMActivityInformation;
- (void)_updateSharedAlbumActivityInformation;
- (void)_updateUnreadCounts;
- (unsigned long long)cmmActivityUnreadCount;
- (id)cmmInvitesFetchResult;
- (void)dealloc;
- (id)feedSectionInfosManager;
- (void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2;
- (id)init;
- (id)latestCMMActivityDate;
- (id)latestSharedAlbumActivityDate;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)setCmmActivityUnreadCount:(unsigned long long)arg1;
- (void)setCmmInvitesFetchResult:(id)arg1;
- (void)setFeedSectionInfosManager:(id)arg1;
- (void)setLatestCMMActivityDate:(id)arg1;
- (void)setLatestSharedAlbumActivityDate:(id)arg1;
- (void)setSharedAlbumActivityUnreadCount:(unsigned long long)arg1;
- (void)setUnreadBadgeCount:(unsigned long long)arg1;
- (unsigned long long)sharedAlbumActivityUnreadCount;
- (unsigned long long)unreadBadgeCount;

@end
