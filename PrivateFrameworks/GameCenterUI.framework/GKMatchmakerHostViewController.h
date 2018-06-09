/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKMatchmakerHostViewController : GKUIRemoteViewController <GKMatchmakerHostProtocol, GKMatchmakerServiceProtocol> {
    GKMatchmakerViewController * _delegateWeak;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) GKMatchmakerViewController *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GKGame *game;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)dismissAutomaticallyAfterExtensionCompletion;
+ (id)matchmakerExtension;

- (void)applicationWillEnterForeground;
- (void)dealloc;
- (id)delegate;
- (void)extensionIsCanceling;
- (id)extensionObjectProxy;
- (void)inviterCancelled;
- (void)messageFromExtension:(id)arg1;
- (void)setAcceptedInviteInternal:(id)arg1;
- (void)setAutomatchFailedWithError:(id)arg1;
- (void)setAutomatchPlayerCount:(long long)arg1;
- (void)setDefaultInvitationMessage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExistingPlayers:(id)arg1;
- (void)setFailedWithError:(id)arg1;
- (void)setHosted:(bool)arg1;
- (void)setInvitesFailedWithError:(id)arg1;
- (void)setMatchRequestInternal:(id)arg1;
- (void)setNearbyPlayer:(id)arg1 reachable:(bool)arg2;
- (void)setPlayer:(id)arg1 connected:(bool)arg2;
- (void)setPlayer:(id)arg1 responded:(long long)arg2;
- (void)setPlayer:(id)arg1 sentData:(id)arg2;
- (void)shareMatchWithRequest:(id)arg1 handler:(id /* block */)arg2;

@end
