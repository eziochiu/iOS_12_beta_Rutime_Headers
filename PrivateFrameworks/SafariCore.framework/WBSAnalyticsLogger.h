/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSAnalyticsLogger : NSObject {
    NSObject<OS_dispatch_queue> * _analyticsSynchronizationQueue;
    AWDServerConnection * _awdServer;
    NSMutableDictionary * _pageLoadStartTimes;
}

@property (nonatomic, readonly) AWDServerConnection *awdServer;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (id)sharedLogger;

- (void).cxx_destruct;
- (void)_didSelectFavoritesGridItemOfSection:(int)arg1 type:(int)arg2 atIndex:(unsigned long long)arg3 itemsPerRow:(unsigned long long)arg4 isNewTabPage:(bool)arg5;
- (id)awdServer;
- (void)ckBookmarkSyncFinishedWithResult:(long long)arg1 error:(id)arg2;
- (void)didAutoFillCustomContactSetShowingMeCard:(bool)arg1;
- (void)didFailToMigrateToCKBookmarksAsPrimaryMigrator:(bool)arg1 error:(id)arg2;
- (void)didReceiveInvalidMessageFromWebProcess:(id)arg1;
- (void)didSelectContactAutoFillSet:(int)arg1 hasPreviouslyCustomizedSet:(bool)arg2;
- (void)didSelectFavoritesGridFrequentlyVisitedItemAtIndex:(unsigned long long)arg1 itemsPerRow:(unsigned long long)arg2 isNewTabPage:(bool)arg3;
- (void)didSelectFavoritesGridItemOfType:(int)arg1 atIndex:(unsigned long long)arg2 itemsPerRow:(unsigned long long)arg3 isNewTabPage:(bool)arg4;
- (void)didShowContactAutoFillSetsWithMeCardSets:(bool)arg1 showingPreviouslyCustomizedSet:(bool)arg2;
- (void)didStartMigratingToCKBookmarksAsPrimaryMigrator:(bool)arg1 localState:(long long)arg2 remoteState:(long long)arg3;
- (void)didSuccessfullyMigrateToCKBookmarksAsPrimaryMigrator:(bool)arg1;
- (void)didToggleDomainSpecificAutomaticReader:(bool)arg1;
- (void)didToggleGloballyUseAutomaticReader:(bool)arg1;
- (id)initWithQueue:(id)arg1;
- (void)pageLoadCompleted:(unsigned long long)arg1;
- (void)pageLoadCompleted:(unsigned long long)arg1 withErrorCode:(long long)arg2;
- (void)pageLoadStarted:(unsigned long long)arg1;
- (void)registerQueriableMetric:(unsigned int)arg1 callback:(id /* block */)arg2;
- (void)safeBrowsingUserActionAfterSeeingWarning:(int)arg1;
- (void)safeBrowsingWarningPageShown:(int)arg1;
- (void)showedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2;
- (void)submitAutomaticReaderActivation:(int)arg1;
- (void)submitVersioningMetricWithVersion:(id)arg1 variant:(int)arg2;
- (void)unableToSilentlyMigrateToCKBookmarksWithReason:(int)arg1;
- (void)userDidParticipateInPasswordAutoFillWithInteraction:(int)arg1;
- (void)userInteractedWithGeneratedPasswordWithInteractionType:(int)arg1;
- (void)userTappedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (void)_sf_activatedHomeScreenQuickAction:(int)arg1;
- (void)_sf_authenticatedForAutoFillWithCategory:(int)arg1 onPageLoad:(bool)arg2 status:(int)arg3 client:(int)arg4;
- (void)_sf_authenticatedForAutoFillWithCategory:(int)arg1 onPageLoad:(bool)arg2 status:(int)arg3 error:(id)arg4 client:(int)arg5;
- (void)_sf_didTerminateWebProcessBeforeNavigationForReason:(int)arg1;
- (void)_sf_enteredTwoUpUsingMethod:(int)arg1;
- (void)_sf_launchedOrResumedSafariWhileInPrivateBrowsing:(bool)arg1;
- (void)_sf_longTappedOnSafariToolbarButton:(int)arg1;
- (void)_sf_longTappedOnSafariViewControllerToolbarButton:(int)arg1;
- (void)_sf_reportAutoFillRequiresAuthenticationPreference:(bool)arg1;
- (void)_sf_safariViewControllerDidDismissWithMethod:(int)arg1;
- (void)_sf_safariViewControllerDidPresentFromHostApp:(id)arg1;
- (void)_sf_tappedOnSafariToolbarButton:(int)arg1;
- (void)_sf_tappedOnSafariViewControllerToolbarButton:(int)arg1;
- (void)_sf_twoFingerTappedLinkWithOutcome:(int)arg1;

@end
