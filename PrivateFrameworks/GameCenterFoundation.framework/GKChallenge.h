/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKChallenge : NSObject <NSCoding, NSSecureCoding> {
    GKChallengeInternal * _internal;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSString *challengeID;
@property (nonatomic, readonly, copy) NSOrderedSet *compatibleBundleIDs;
@property (nonatomic, readonly, retain) NSDate *completionDate;
@property (nonatomic, readonly) bool detailsLoaded;
@property (nonatomic, readonly) GKGame *game;
@property (retain) GKChallengeInternal *internal;
@property (nonatomic, readonly, retain) NSDate *issueDate;
@property (nonatomic, readonly, copy) GKPlayer *issuingPlayer;
@property (nonatomic, readonly, copy) NSString *issuingPlayerID;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly, copy) GKPlayer *receivingPlayer;
@property (nonatomic, readonly, copy) NSString *receivingPlayerID;
@property (nonatomic, readonly) long long state;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withAchievement:(id)arg3;
+ (id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withScore:(id)arg3;
+ (id)challengeForInternalRepresentation:(id)arg1;
+ (void)getCountOfChallenges:(id /* block */)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (void)loadChallengesForGame:(id)arg1 receivingPlayer:(id)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)loadChallengesForReceivingPlayer:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)loadReceivedChallengesWithCompletionHandler:(id /* block */)arg1;
+ (id)stringForState:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)decline;
- (void)declineWithCompletionHandler:(id /* block */)arg1;
- (bool)detailsLoaded;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)game;
- (bool)hasLoadedUIDetails;
- (unsigned long long)hash;
- (id)infoTextForIssuingPlayer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (void)issueToPlayers:(id)arg1 message:(id)arg2;
- (id)issuingPlayer;
- (id)issuingPlayerID;
- (void)loadDetailsWithCompletionHandler:(id /* block */)arg1;
- (void)loadUIDetailsWithHandler:(id /* block */)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)receivingPlayer;
- (id)receivingPlayerID;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setInternal:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (id)alertGoalText;
- (id)composeGoalText;
- (id)detailFromText;
- (id)detailGoalText;
- (id)iconSource;
- (id)iconURLString;
- (id)listGoalText;
- (id)listTitleText;
- (void)loadBannerImageWithHandler:(id /* block */)arg1;
- (void)loadImageWithCompletionHandler:(id /* block */)arg1;
- (void)loadImageWithSource:(id)arg1 URLString:(id)arg2 withHandler:(id /* block */)arg3;
- (id)smallIconURLString;

@end
