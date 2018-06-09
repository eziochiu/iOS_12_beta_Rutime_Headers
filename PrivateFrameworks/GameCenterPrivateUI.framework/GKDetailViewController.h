/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKDetailViewController : GKDashboardCollectionViewController {
    GKHorizontalBubbleControlsView * _bubbleView;
}

@property (nonatomic) GKHorizontalBubbleControlsView *bubbleView;
@property (nonatomic, readonly) bool wantsBubbles;

- (id)addBubbleWithType:(long long)arg1 useLargeSize:(bool)arg2 title:(id)arg3 target:(id)arg4 action:(SEL)arg5;
- (id)bubbleView;
- (bool)canShare;
- (void)floatInBubbles;
- (void)hideBubbles;
- (void)pushBubble:(id)arg1;
- (void)setBubbleView:(id)arg1;
- (void)shareAchievement:(id)arg1 sendingView:(id)arg2;
- (void)shareScore:(id)arg1 fromLeaderboard:(id)arg2 sendingView:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsBubbles;

@end
