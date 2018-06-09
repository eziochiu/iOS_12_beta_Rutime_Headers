/* made by EzioChiu.
 */

@protocol GKGameCenterDashboardHostProtocol <GKExtensionHostProtocol>

@optional

- (void)finishWithMatch:(GKTurnBasedMatchInternal *)arg1;
- (void)getMethodsImplementedByChallengeEventHandlerDelegate:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)playPressedForChallenge:(GKChallengeInternal *)arg1;
- (void)playerQuitMatch:(GKTurnBasedMatchInternal *)arg1;
- (void)remoteControllerDidChangeViewState:(NSNumber *)arg1;
- (void)remoteControllerDidSelectLeaderboardIdentifier:(NSString *)arg1;
- (void)remoteControllerDidSelectLeaderboardTimeScope:(NSNumber *)arg1;
- (void)requestDashboardLogoImageWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)requestImagesForLeaderboardSetsWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)requestImagesForLeaderboardsInSet:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
