/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKAchievementChallenge : GKChallenge {
    GKAchievement * _achievement;
}

@property (nonatomic, retain) GKAchievement *achievement;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (bool)instancesRespondToSelector:(SEL)arg1;

- (id)achievement;
- (void)dealloc;
- (id)description;
- (id)detailGoalTextForPlayer:(id)arg1 withAchievement:(id)arg2;
- (bool)detailsLoaded;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)loadDetailsWithCompletionHandler:(id /* block */)arg1;
- (void)setAchievement:(id)arg1;
- (void)setInternal:(id)arg1;
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
