/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKGameSession : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSDate * _lastModifiedDate;
    GKCloudPlayer * _lastModifiedPlayer;
    long long  _maxNumberOfConnectedPlayers;
    GKCloudPlayer * _owner;
    NSMutableDictionary * _playerStates;
    NSArray * _players;
    NSString * _serverChangeTag;
    NSString * _title;
}

@property (nonatomic, readonly) NSArray *badgedPlayers;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSDate *lastModifiedDate;
@property (nonatomic, retain) GKCloudPlayer *lastModifiedPlayer;
@property (nonatomic) long long maxNumberOfConnectedPlayers;
@property (nonatomic, retain) GKCloudPlayer *owner;
@property (nonatomic, retain) NSMutableDictionary *playerStates;
@property (nonatomic, retain) NSArray *players;
@property (nonatomic, retain) NSString *serverChangeTag;
@property (nonatomic, retain) NSString *title;

+ (void)addEventListener:(id)arg1;
+ (void)createSessionInContainer:(id)arg1 withTitle:(id)arg2 maxConnectedPlayers:(long long)arg3 completionHandler:(id /* block */)arg4;
+ (void)getSessionsForZone:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getZonesWithCompletionHandler:(id /* block */)arg1;
+ (id)gk_sessionEventListeners;
+ (void)loadSessionWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)loadSessionsInContainer:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)postSession:(id)arg1 didAddPlayer:(id)arg2;
+ (void)postSession:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3;
+ (void)postSession:(id)arg1 didReceiveMessage:(id)arg2 withData:(id)arg3 fromPlayer:(id)arg4;
+ (void)postSession:(id)arg1 didRemovePlayer:(id)arg2;
+ (void)postSession:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3;
+ (void)postSession:(id)arg1 player:(id)arg2 didSaveData:(id)arg3;
+ (void)removeEventListener:(id)arg1;
+ (void)removeSessionWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)badgedPlayers;
- (void)clearBadgeForPlayers:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)description;
- (id)descriptionSubstitutionMap;
- (void)encodeWithCoder:(id)arg1;
- (void)getShareURLWithCompletionHandler:(id /* block */)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)lastModifiedDate;
- (id)lastModifiedPlayer;
- (void)loadDataWithCompletionHandler:(id /* block */)arg1;
- (long long)maxNumberOfConnectedPlayers;
- (id)owner;
- (id)playerStates;
- (id)players;
- (id)playersWithConnectionState:(long long)arg1;
- (void)saveData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendData:(id)arg1 withTransportType:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)sendMessageWithLocalizedFormatKey:(id)arg1 arguments:(id)arg2 data:(id)arg3 toPlayers:(id)arg4 badgePlayers:(bool)arg5 completionHandler:(id /* block */)arg6;
- (id)serverChangeTag;
- (void)setConnectionState:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setIdentifier:(id)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setLastModifiedPlayer:(id)arg1;
- (void)setMaxNumberOfConnectedPlayers:(long long)arg1;
- (void)setOwner:(id)arg1;
- (void)setPlayerStates:(id)arg1;
- (void)setPlayers:(id)arg1;
- (void)setServerChangeTag:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)updateWithSession:(id)arg1;

@end
