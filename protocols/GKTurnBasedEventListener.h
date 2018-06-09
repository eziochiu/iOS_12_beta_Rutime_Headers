/* made by EzioChiu.
 */

@protocol GKTurnBasedEventListener

@optional

- (void)player:(GKPlayer *)arg1 didRequestMatchWithOtherPlayers:(NSArray *)arg2;
- (void)player:(GKPlayer *)arg1 didRequestMatchWithPlayers:(NSArray *)arg2;
- (void)player:(GKPlayer *)arg1 matchEnded:(GKTurnBasedMatch *)arg2;
- (void)player:(GKPlayer *)arg1 receivedExchangeCancellation:(GKTurnBasedExchange *)arg2 forMatch:(GKTurnBasedMatch *)arg3;
- (void)player:(GKPlayer *)arg1 receivedExchangeReplies:(NSArray *)arg2 forCompletedExchange:(GKTurnBasedExchange *)arg3 forMatch:(GKTurnBasedMatch *)arg4;
- (void)player:(GKPlayer *)arg1 receivedExchangeRequest:(GKTurnBasedExchange *)arg2 forMatch:(GKTurnBasedMatch *)arg3;
- (void)player:(GKPlayer *)arg1 receivedTurnEventForMatch:(GKTurnBasedMatch *)arg2 didBecomeActive:(bool)arg3;
- (void)player:(GKPlayer *)arg1 wantsToQuitMatch:(GKTurnBasedMatch *)arg2;

@end
