/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSharedAlbumActivityHorizontalGadgetProvider : PXGadgetProvider <PXChangeObserver, PXFeedSectionInfosManagerDelegate, PXSectionedDataSourceManagerObserver, PXSettingsKeyObserver> {
    PXFeedSectionInfosManager * _feedSectionInfosManager;
    PXInboxAggregateDataSourceManager * _inboxDataSourceManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXFeedSectionInfosManager *feedSectionInfosManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXInboxAggregateDataSourceManager *inboxDataSourceManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_countOfSectionInfosToDisplay:(unsigned long long)arg1;
- (id)_currentGadgetOfType:(unsigned long long)arg1;
- (id)_gadgetTitle;
- (void)_inboxLastSeenDateDidChange:(id)arg1;
- (void)_navigateToSharedAlbumActivityFeed:(id)arg1;
- (void)_updateGadgetTitle;
- (void)_updateGadgets;
- (void)dealloc;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)feedSectionInfosManager;
- (void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2;
- (void)generateGadgets;
- (id)inboxDataSourceManager;
- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setFeedSectionInfosManager:(id)arg1;
- (void)setInboxDataSourceManager:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
