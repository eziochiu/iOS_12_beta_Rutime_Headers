/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKScore : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    GKGame * _game;
    GKScoreInternal * _internal;
    bool  _shouldSetDefaultLeaderboard;
}

@property (nonatomic, copy) NSString *category;
@property (nonatomic) unsigned long long context;
@property (nonatomic, readonly, retain) NSDate *date;
@property (nonatomic, copy) NSString *formattedValue;
@property (nonatomic, retain) GKGame *game;
@property (nonatomic, retain) NSString *groupLeaderboardIdentifier;
@property (retain) GKScoreInternal *internal;
@property (nonatomic, copy) NSString *leaderboardIdentifier;
@property (nonatomic, readonly, retain) GKPlayer *player;
@property (readonly, retain) NSString *playerID;
@property (nonatomic) long long rank;
@property (nonatomic) bool shouldSetDefaultLeaderboard;
@property (nonatomic) long long value;
@property bool valueSet;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (void)reportScores:(id)arg1 whileScreeningChallenges:(bool)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(id /* block */)arg4;
+ (void)reportScores:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)game;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCategory:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1 playerID:(id)arg2;
- (id)initWithInternalRepresentation:(id)arg1 playerInternal:(id)arg2;
- (id)initWithLeaderboardIdentifier:(id)arg1;
- (id)initWithLeaderboardIdentifier:(id)arg1 forPlayer:(id)arg2;
- (id)initWithLeaderboardIdentifier:(id)arg1 player:(id)arg2;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)player;
- (id)playerID;
- (void)reportScoreWithCompletionHandler:(id /* block */)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setGame:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setShouldSetDefaultLeaderboard:(bool)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (bool)shouldSetDefaultLeaderboard;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (void)reportScores:(id)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(id /* block */)arg3;

- (void)_gkSetSharingInfo:(id)arg1;
- (id)_gkSharingInfo;
- (long long)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)activityViewControllerSubject:(id)arg1;
- (bool)canBeShared;
- (id)challengeComposeControllerWithMessage:(id)arg1 players:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)challengeComposeControllerWithPlayers:(id)arg1 message:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)fetchSharingInfo;
- (void)issueChallengeToPlayers:(id)arg1 message:(id)arg2;

@end
