/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLeaderboardScoreRequest : NSObject <NSSecureCoding> {
    bool  _friendsOnly;
    NSString * _gameBundleID;
    NSString * _groupIdentifier;
    NSString * _identifier;
    GKPlayerInternal * _playerInternal;
    bool  _prefetch;
    long long  _timeScope;
}

@property (nonatomic) bool friendsOnly;
@property (nonatomic, copy) NSString *gameBundleID;
@property (nonatomic, copy) NSString *groupIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) GKPlayerInternal *playerInternal;
@property (getter=isPrefetch, nonatomic) bool prefetch;
@property (nonatomic) long long timeScope;

+ (id)requestForPlayerInternals:(id)arg1;
+ (id)requestForRankRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)friendsOnly;
- (id)gameBundleID;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPrefetch;
- (id)playerInternal;
- (void)setFriendsOnly:(bool)arg1;
- (void)setGameBundleID:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPlayerInternal:(id)arg1;
- (void)setPrefetch:(bool)arg1;
- (void)setTimeScope:(long long)arg1;
- (long long)timeScope;

@end
