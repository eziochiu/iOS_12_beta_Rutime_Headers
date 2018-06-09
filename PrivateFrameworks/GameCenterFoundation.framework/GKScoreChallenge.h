/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKScoreChallenge : GKChallenge {
    GKScore * _score;
}

@property (nonatomic, readonly) GKLeaderboard *leaderboard;
@property (nonatomic, retain) GKScore *score;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (bool)instancesRespondToSelector:(SEL)arg1;

- (void)dealloc;
- (id)description;
- (id)detailGoalTextForPlayer:(id)arg1 withLeaderboard:(id)arg2;
- (bool)detailsLoaded;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)leaderboard;
- (void)loadDetailsWithCompletionHandler:(id /* block */)arg1;
- (id)score;
- (void)setInternal:(id)arg1;
- (void)setScore:(id)arg1;
- (id)titleText;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (id)alertGoalText;
- (id)composeGoalText;
- (id)detailGoalText;
- (id)iconSource;
- (id)iconURLString;
- (id)listGoalText;
- (id)listTitleText;
- (id)smallIconURLString;

@end
