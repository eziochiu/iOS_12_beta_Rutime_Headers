/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDFaceTimeCallConnected : PBCodable <NSCopying> {
    unsigned int  _connectDuration;
    unsigned int  _connectionType;
    unsigned int  _currentNatType;
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectDuration : 1; 
        unsigned int connectionType : 1; 
        unsigned int currentNatType : 1; 
        unsigned int isVideo : 1; 
        unsigned int localNetworkConnection : 1; 
        unsigned int onLockScreen : 1; 
        unsigned int relayConnectDuration : 1; 
        unsigned int remoteNatType : 1; 
        unsigned int remoteNetworkConnection : 1; 
        unsigned int usesRelay : 1; 
    }  _has;
    unsigned int  _isVideo;
    unsigned int  _localNetworkConnection;
    unsigned int  _onLockScreen;
    unsigned int  _relayConnectDuration;
    unsigned int  _remoteNatType;
    unsigned int  _remoteNetworkConnection;
    unsigned long long  _timestamp;
    unsigned int  _usesRelay;
}

@property (nonatomic) unsigned int connectDuration;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) unsigned int currentNatType;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool hasConnectDuration;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasCurrentNatType;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasIsVideo;
@property (nonatomic) bool hasLocalNetworkConnection;
@property (nonatomic) bool hasOnLockScreen;
@property (nonatomic) bool hasRelayConnectDuration;
@property (nonatomic) bool hasRemoteNatType;
@property (nonatomic) bool hasRemoteNetworkConnection;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUsesRelay;
@property (nonatomic) unsigned int isVideo;
@property (nonatomic) unsigned int localNetworkConnection;
@property (nonatomic) unsigned int onLockScreen;
@property (nonatomic) unsigned int relayConnectDuration;
@property (nonatomic) unsigned int remoteNatType;
@property (nonatomic) unsigned int remoteNetworkConnection;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int usesRelay;

- (unsigned int)connectDuration;
- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currentNatType;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (bool)hasConnectDuration;
- (bool)hasConnectionType;
- (bool)hasCurrentNatType;
- (bool)hasGuid;
- (bool)hasIsVideo;
- (bool)hasLocalNetworkConnection;
- (bool)hasOnLockScreen;
- (bool)hasRelayConnectDuration;
- (bool)hasRemoteNatType;
- (bool)hasRemoteNetworkConnection;
- (bool)hasTimestamp;
- (bool)hasUsesRelay;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)isVideo;
- (unsigned int)localNetworkConnection;
- (void)mergeFrom:(id)arg1;
- (unsigned int)onLockScreen;
- (bool)readFrom:(id)arg1;
- (unsigned int)relayConnectDuration;
- (unsigned int)remoteNatType;
- (unsigned int)remoteNetworkConnection;
- (void)setConnectDuration:(unsigned int)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setCurrentNatType:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasConnectDuration:(bool)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasCurrentNatType:(bool)arg1;
- (void)setHasIsVideo:(bool)arg1;
- (void)setHasLocalNetworkConnection:(bool)arg1;
- (void)setHasOnLockScreen:(bool)arg1;
- (void)setHasRelayConnectDuration:(bool)arg1;
- (void)setHasRemoteNatType:(bool)arg1;
- (void)setHasRemoteNetworkConnection:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUsesRelay:(bool)arg1;
- (void)setIsVideo:(unsigned int)arg1;
- (void)setLocalNetworkConnection:(unsigned int)arg1;
- (void)setOnLockScreen:(unsigned int)arg1;
- (void)setRelayConnectDuration:(unsigned int)arg1;
- (void)setRemoteNatType:(unsigned int)arg1;
- (void)setRemoteNetworkConnection:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUsesRelay:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)usesRelay;
- (void)writeTo:(id)arg1;

@end
