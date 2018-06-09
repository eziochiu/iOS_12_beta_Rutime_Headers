/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKTurnBasedMatchmakerHostViewController : GKUIRemoteViewController <GKTurnBasedMatchmakerHostProtocol, GKTurnBasedMatchmakerServiceProtocol> {
    GKTurnBasedMatchmakerViewController * _delegateWeak;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) GKTurnBasedMatchmakerViewController *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GKGame *game;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)dismissAutomaticallyAfterExtensionCompletion;
+ (id)turnBasedMatchmakerExtension;

- (void)dealloc;
- (id)delegate;
- (void)extensionIsCanceling;
- (id)extensionObjectProxy;
- (void)messageFromExtension:(id)arg1;
- (void)refreshMatches;
- (void)setDelegate:(id)arg1;
- (void)setMatchRequestInternal:(id)arg1;
- (void)setShowExistingMatches:(bool)arg1;
- (void)setShowPlay:(bool)arg1;
- (void)setShowQuit:(bool)arg1;

@end
