/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLeaderboardInternal : GKInternalRepresentation {
    unsigned short  _friendRank;
    unsigned short  _friendRankCount;
    NSString * _groupIdentifier;
    NSDictionary * _icons;
    NSString * _identifier;
    NSDate * _lastSubmittedDate;
    NSString * _leaderboardSetIdentifier;
    unsigned int  _maxRank;
    unsigned int  _overallRank;
    unsigned int  _overallRankCount;
    GKScoreInternal * _playerScore;
    NSArray * _scores;
    NSString * _title;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic) unsigned short friendRank;
@property (nonatomic) unsigned short friendRankCount;
@property (nonatomic, retain) NSString *groupIdentifier;
@property (nonatomic, retain) NSDictionary *icons;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSDate *lastSubmittedDate;
@property (nonatomic, retain) NSString *leaderboardSetIdentifier;
@property (nonatomic, retain) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned long long maxRange;
@property (nonatomic) unsigned int maxRank;
@property (nonatomic) unsigned int overallRank;
@property (nonatomic) unsigned int overallRankCount;
@property (nonatomic, retain) GKScoreInternal *playerScore;
@property (nonatomic, retain) NSArray *scores;
@property (nonatomic, retain) NSString *title;

+ (id)secureCodedPropertyKeys;

- (id)category;
- (void)dealloc;
- (unsigned short)friendRank;
- (unsigned short)friendRankCount;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)icons;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)lastSubmittedDate;
- (id)leaderboardSetIdentifier;
- (id)localizedTitle;
- (unsigned long long)maxRange;
- (unsigned int)maxRank;
- (unsigned int)overallRank;
- (unsigned int)overallRankCount;
- (id)playerScore;
- (id)scores;
- (void)setCategory:(id)arg1;
- (void)setFriendRank:(unsigned short)arg1;
- (void)setFriendRankCount:(unsigned short)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastSubmittedDate:(id)arg1;
- (void)setLeaderboardSetIdentifier:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setMaxRank:(unsigned int)arg1;
- (void)setOverallRank:(unsigned int)arg1;
- (void)setOverallRankCount:(unsigned int)arg1;
- (void)setPlayerScore:(id)arg1;
- (void)setScores:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
