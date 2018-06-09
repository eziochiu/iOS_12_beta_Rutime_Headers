/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLocalizedAchievementDescription : GKAchievementDescription {
    GKGame * _game;
    NSString * _iconImageName;
}

@property (retain) GKGame *game;
@property (copy) NSString *iconImageName;

- (id)_localizedStringFromKey:(id)arg1;
- (id)achievedDescription;
- (void)dealloc;
- (id)game;
- (id)iconImageName;
- (id)imageNameForIcon;
- (void)setGame:(id)arg1;
- (void)setIconImageName:(id)arg1;
- (id)title;
- (id)unachievedDescription;

@end
