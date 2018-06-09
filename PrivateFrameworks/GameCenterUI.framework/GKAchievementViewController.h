/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKAchievementViewController : GKGameCenterViewController {
    <GKAchievementViewControllerDelegate> * _achievementDelegate;
}

@property (nonatomic) <GKAchievementViewControllerDelegate> *achievementDelegate;

- (id)achievementDelegate;
- (void)dealloc;
- (id)init;
- (void)notifyDelegateOnWillFinish;
- (void)setAchievementDelegate:(id)arg1;

@end
