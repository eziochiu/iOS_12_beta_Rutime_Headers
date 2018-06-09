/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKScoreInternal : GKInternalRepresentation {
    unsigned long long  _context;
    NSDate * _date;
    NSString * _formattedValue;
    NSString * _groupLeaderboardIdentifier;
    NSString * _leaderboardIdentifier;
    GKPlayerInternal * _player;
    unsigned int  _rank;
    long long  _value;
    bool  _valueSet;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic) unsigned long long context;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSString *formattedValue;
@property (nonatomic, retain) NSString *groupCategory;
@property (nonatomic, retain) NSString *groupLeaderboardIdentifier;
@property (nonatomic, retain) NSString *leaderboardIdentifier;
@property (nonatomic, retain) GKPlayerInternal *player;
@property (nonatomic, readonly) NSString *playerID;
@property (nonatomic) unsigned int rank;
@property (nonatomic) long long value;
@property (nonatomic) bool valueSet;

+ (id)secureCodedPropertyKeys;
+ (bool)supportsSecureCoding;

- (id)category;
- (unsigned long long)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)formattedValue;
- (id)groupCategory;
- (id)groupLeaderboardIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)leaderboardIdentifier;
- (id)player;
- (id)playerID;
- (unsigned int)rank;
- (id)serverRepresentation;
- (void)setCategory:(id)arg1;
- (void)setContext:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setFormattedValue:(id)arg1;
- (void)setGroupCategory:(id)arg1;
- (void)setGroupLeaderboardIdentifier:(id)arg1;
- (void)setLeaderboardIdentifier:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setRank:(unsigned int)arg1;
- (void)setValue:(long long)arg1;
- (void)setValueSet:(bool)arg1;
- (long long)value;
- (bool)valueSet;

@end
