/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKMatchmakerViewController : UINavigationController <GKExtensionParentViewControllerProtocol, GKMatchDelegate> {
    GKInvite * _acceptedInvite;
    UIAlertController * _alertController;
    bool  _hosted;
    NSMutableArray * _hostedPlayers;
    GKMatch * _match;
    GKMatchRequest * _matchRequest;
    <GKMatchmakerViewControllerDelegate> * _matchmakerDelegateWeak;
    GKMatchmakerHostViewController * _remoteViewController;
}

@property (nonatomic, retain) GKInvite *acceptedInvite;
@property (nonatomic, retain) UIAlertController *alertController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *defaultInvitationMessage;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHosted, nonatomic) bool hosted;
@property (nonatomic, retain) NSMutableArray *hostedPlayers;
@property (nonatomic, retain) GKMatch *match;
@property (nonatomic, readonly, retain) GKMatchRequest *matchRequest;
@property (nonatomic) <GKMatchmakerViewControllerDelegate> *matchmakerDelegate;
@property (nonatomic, retain) GKMatchmakerHostViewController *remoteViewController;
@property (readonly) Class superclass;

+ (bool)_preventsAppearanceProxyCustomization;

- (void)_setupChildViewController;
- (void)_setupRemoteViewController;
- (id)acceptedInvite;
- (void)addPlayersToMatch:(id)arg1;
- (id)alertController;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)authenticationChanged:(id)arg1;
- (void)cancel;
- (void)cancelMatching;
- (void)cancelPendingInviteToPlayer:(id)arg1;
- (void)createMatchForAcceptedInvite;
- (void)dealloc;
- (id)defaultInvitationMessage;
- (void)extensionDidFinishWithError:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)finishWithMatch;
- (void)finishWithPlayers;
- (id)hostedPlayers;
- (id)init;
- (id)initWithInvite:(id)arg1;
- (id)initWithMatchRequest:(id)arg1;
- (void)invitedPlayer:(id)arg1 responded:(long long)arg2;
- (void)inviterCancelledNotification:(id)arg1;
- (bool)isHosted;
- (void)localPlayerAcceptedGameInvite:(id)arg1;
- (id)match;
- (void)match:(id)arg1 didFailWithError:(id)arg2;
- (void)match:(id)arg1 didReceiveData:(id)arg2 fromRemotePlayer:(id)arg3;
- (void)match:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3;
- (id)matchRequest;
- (id)matchmakerDelegate;
- (void)playersToInvite:(id)arg1;
- (id)remoteViewController;
- (void)sendData:(id)arg1;
- (void)setAcceptedInvite:(id)arg1;
- (void)setAlertController:(id)arg1;
- (void)setBrowsingForNearbyPlayers:(bool)arg1;
- (void)setDefaultInvitationMessage:(id)arg1;
- (void)setHosted:(bool)arg1;
- (void)setHostedPlayer:(id)arg1 connected:(bool)arg2;
- (void)setHostedPlayer:(id)arg1 didConnect:(bool)arg2;
- (void)setHostedPlayerReady:(id)arg1;
- (void)setHostedPlayers:(id)arg1;
- (void)setMatch:(id)arg1;
- (void)setMatchmakerDelegate:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setShareInvitees:(id)arg1;
- (void)setupNotifications;
- (void)shareMatchWithRequest:(id)arg1 handler:(id /* block */)arg2;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)startMatchingWithRequest:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
