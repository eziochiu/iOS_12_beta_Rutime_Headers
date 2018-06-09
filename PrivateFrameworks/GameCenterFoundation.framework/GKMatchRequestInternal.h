/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKMatchRequestInternal : GKInternalRepresentation {
    unsigned char  _defaultNumberOfPlayers;
    NSString * _inviteMessage;
    NSDictionary * _localizableInviteMessage;
    unsigned long long  _matchType;
    unsigned char  _maxPlayers;
    unsigned char  _minPlayers;
    unsigned int  _playerAttributes;
    int  _playerGroup;
    bool  _preloadedMatch;
    NSArray * _recipientPlayerIDs;
    NSArray * _recipients;
    NSString * _rid;
    NSData * _sessionToken;
    unsigned int  _version;
}

@property (nonatomic) unsigned char defaultNumberOfPlayers;
@property (nonatomic, copy) NSString *inviteMessage;
@property (nonatomic, retain) NSDictionary *localizableInviteMessage;
@property (nonatomic) unsigned long long matchType;
@property (nonatomic) unsigned char maxPlayers;
@property (nonatomic) unsigned char minPlayers;
@property (nonatomic) unsigned int playerAttributes;
@property (nonatomic) int playerGroup;
@property (getter=isPreloadedMatch, nonatomic) bool preloadedMatch;
@property (nonatomic, retain) NSArray *recipientPlayerIDs;
@property (nonatomic, retain) NSArray *recipients;
@property (nonatomic, retain) NSString *rid;
@property (nonatomic, retain) NSData *sessionToken;
@property (nonatomic) unsigned int version;

+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (unsigned char)defaultNumberOfPlayers;
- (bool)hasGuestPlayers;
- (unsigned long long)hash;
- (id)init;
- (id)inviteMessage;
- (bool)isEqual:(id)arg1;
- (bool)isPreloadedMatch;
- (id)localizableInviteMessage;
- (unsigned long long)matchType;
- (unsigned char)maxPlayers;
- (unsigned char)minPlayers;
- (unsigned int)playerAttributes;
- (int)playerGroup;
- (id)recipientPlayerIDs;
- (id)recipients;
- (id)rid;
- (id)sessionToken;
- (void)setDefaultNumberOfPlayers:(unsigned char)arg1;
- (void)setInviteMessage:(id)arg1;
- (void)setLocalizableInviteMessage:(id)arg1;
- (void)setMatchType:(unsigned long long)arg1;
- (void)setMaxPlayers:(unsigned char)arg1;
- (void)setMinPlayers:(unsigned char)arg1;
- (void)setPlayerAttributes:(unsigned int)arg1;
- (void)setPlayerGroup:(int)arg1;
- (void)setPreloadedMatch:(bool)arg1;
- (void)setRecipientPlayerIDs:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setRid:(id)arg1;
- (void)setSessionToken:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;

@end
