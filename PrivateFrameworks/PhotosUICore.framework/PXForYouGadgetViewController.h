/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXForYouGadgetViewController : PXGadgetViewController <PXGadgetNavigating, PXNavigableForYouViewController, PXNavigableSharedActivityViewController, PXNavigationRoot, PXSettingsKeyObserver> {
    UIBarButtonItem * _navigationDisplayModeButtonItem;
    bool  _needsRefresh;
}

@property (nonatomic, readonly) NSString *currentDateText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, retain) UIBarButtonItem *navigationDisplayModeButtonItem;
@property (nonatomic, readonly) NSString *navigationIdentifier;
@property (nonatomic, readonly) PXNavigationListDataSourceManager *navigationListDataSourceManager;
@property (nonatomic, readonly) NSString *navigationTitle;
@property (nonatomic) bool needsRefresh;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void).cxx_destruct;
- (void)_calendarDayChanged;
- (id)_suggestionDumpURL;
- (void)_updateLastSeenDate;
- (id)currentDateText;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (id)initWithBadgeManager:(id)arg1;
- (void)navigateToGadgetForCMMInvitations;
- (void)navigateToInvitationCMMWithUUID:(id)arg1 animated:(bool)arg2;
- (void)navigateToRevealTheMostRecentMemoryAnimated:(bool)arg1;
- (void)navigateToSharedActivityMode:(long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)navigateToSharedAlbumInviteWithUUID:(id)arg1 animated:(bool)arg2;
- (void)navigateToSharedAlbumInvitesAnimated:(bool)arg1;
- (id)navigateToShowAllMemoriesFeedAnimated:(bool)arg1;
- (void)navigateToSuggestedCMMWithUUID:(id)arg1 animated:(bool)arg2;
- (id)navigationDisplayModeButtonItem;
- (id)navigationIdentifier;
- (id)navigationTitle;
- (bool)needsRefresh;
- (void)ppt_navigateToFirstInvitationCMM:(bool)arg1 withCompleteHandler:(id /* block */)arg2;
- (void)ppt_navigateToFirstSuggestedCMMComposeRecipientViewAfterOneSecondWithCompleteHandler:(id /* block */)arg1;
- (void)ppt_navigateToFirstSuggestedCMMWithCompleteHandler:(id /* block */)arg1;
- (void)presentWelcomeCloudPhotosViewController;
- (void)setNavigationDisplayModeButtonItem:(id)arg1;
- (void)setNeedsRefresh:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)px_sharedAlbumFeedViewControllerWithTraitCollection:(id)arg1;

@end
