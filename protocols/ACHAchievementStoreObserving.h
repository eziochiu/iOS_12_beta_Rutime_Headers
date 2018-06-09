/* made by EzioChiu.
 */

@protocol ACHAchievementStoreObserving <NSObject>

@required

- (void)achievementStore:(ACHAchievementStore *)arg1 didAddAchievements:(NSSet *)arg2;
- (void)achievementStore:(ACHAchievementStore *)arg1 didRemoveAchievements:(NSSet *)arg2;
- (void)achievementStore:(ACHAchievementStore *)arg1 didUpdateAchievements:(NSSet *)arg2;
- (void)achievementStoreDidFinishInitialFetch:(ACHAchievementStore *)arg1;

@end
