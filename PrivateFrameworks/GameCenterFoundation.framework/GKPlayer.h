/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKPlayer : GKBasePlayer <NSCoding, NSSecureCoding> {
    NSArray * _friends;
    GKPlayerInternal * _internal;
    NSAttributedString * _whenString;
}

@property (nonatomic, copy) NSString *alias;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *friendLevel;
@property (nonatomic, retain) NSArray *friends;
@property (nonatomic, readonly) NSString *guestIdentifier;
@property (nonatomic, readonly) bool hasPhoto;
@property (retain) GKPlayerInternal *internal;
@property (nonatomic, readonly) bool isAnonymousPlayer;
@property (nonatomic, readonly) bool isAutomatchPlayer;
@property (nonatomic, readonly) bool isFamiliarFriend;
@property (nonatomic) bool isFriend;
@property (nonatomic, readonly) bool isLocalPlayer;
@property (nonatomic, readonly) bool isUnknownPlayer;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSDate *lastPlayedDate;
@property (nonatomic, readonly) GKGame *lastPlayedGame;
@property (getter=isLoaded, nonatomic, readonly) bool loaded;
@property (nonatomic) unsigned long long numberOfFriends;
@property (nonatomic, retain) NSString *playerID;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic, retain) NSString *reason2;
@property (readonly) NSString *referenceKey;
@property (nonatomic) unsigned int rid;
@property (nonatomic) int source;
@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; } stats;
@property (nonatomic, copy) NSString *status;
@property (nonatomic, retain) NSAttributedString *whenString;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (void)_loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (id)anonymousGuestPlayerWithIdentifier:(id)arg1;
+ (id)anonymousPlayer;
+ (id)automatchPlayer;
+ (id)cacheKeyForPlayerID:(id)arg1;
+ (id)canonicalizedPlayerForInternal:(id)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (void)loadCompletePlayersForPlayers:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)loadPlayersForLegacyIdentifiers:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (id)playerFromPlayerID:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)unknownPlayer;

- (void)_postChangeNotification;
- (id)cacheKey;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)displayNameWithOptions:(unsigned char)arg1;
- (id)email;
- (id)emails;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)friendLevel;
- (id)friends;
- (bool)hasPhoto;
- (unsigned long long)hash;
- (id)identifierForIDS;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (bool)isFamiliarFriend;
- (bool)isFriendablePlayer;
- (id)lastPlayedGame;
- (void)loadCommonFriends:(bool)arg1 asPlayersWithCompletionHandler:(id /* block */)arg2;
- (void)loadFriendsAsPlayersWithCompletionHandler:(id /* block */)arg1;
- (void)loadGamesPlayed:(id /* block */)arg1;
- (void)loadGamesPlayedDetailsWithCompletionHandler:(id /* block */)arg1;
- (void)loadGamesPlayedIncludingInstalledGames:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)loadProfileWithCompletionHandler:(id /* block */)arg1;
- (void)loadRecentMatchesForGame:(id)arg1 block:(id /* block */)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)minimalPlayer;
- (id)playerID;
- (void)postChangeNotification;
- (id)referenceKey;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setFriendLevel:(id)arg1;
- (void)setFriends:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setWhenString:(id)arg1;
- (id)sortName;
- (struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; })stats;
- (id)valueForUndefinedKey:(id)arg1;
- (id)whenString;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (void)preloadImagesForPlayers:(id)arg1 size:(long long)arg2;
+ (long long)sizeForPhotoSize:(long long)arg1;

- (void)_loadPhotoForSize:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)cacheKeyForType:(unsigned char)arg1;
- (id)imageSourceForPlaceholders;
- (id)imageURLForPhotoSizeList;
- (void)loadPhotoForSize:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)photoURLForSize:(long long)arg1;
- (id)placeholderImage;
- (id)placeholderImageForType:(unsigned char)arg1;
- (id)placeholderImageSelected;

@end
