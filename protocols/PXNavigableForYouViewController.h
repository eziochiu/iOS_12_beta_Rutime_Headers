/* made by EzioChiu.
 */

@protocol PXNavigableForYouViewController <PXNavigableGadgetViewController>

@required

- (void)navigateToInvitationCMMWithUUID:(NSString *)arg1 animated:(bool)arg2;
- (void)navigateToRevealTheMostRecentMemoryAnimated:(bool)arg1;
- (void)navigateToSharedAlbumInviteWithUUID:(NSString *)arg1 animated:(bool)arg2;
- (void)navigateToSharedAlbumInvitesAnimated:(bool)arg1;
- (PXMemoriesFeedUIViewController *)navigateToShowAllMemoriesFeedAnimated:(bool)arg1;
- (void)navigateToSuggestedCMMWithUUID:(NSString *)arg1 animated:(bool)arg2;

@end
