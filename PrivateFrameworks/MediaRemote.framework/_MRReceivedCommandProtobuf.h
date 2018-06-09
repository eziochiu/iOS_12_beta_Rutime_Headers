/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRReceivedCommandProtobuf : PBCodable <NSCopying> {
    _MRReceivedCommandAppOptionsProtobuf * _appOptions;
    int  _command;
    NSString * _destinationAppDisplayID;
    long long  _destinationAppProcessID;
    struct { 
        unsigned int destinationAppProcessID : 1; 
        unsigned int command : 1; 
        unsigned int originUID : 1; 
    }  _has;
    _MRCommandOptionsProtobuf * _options;
    int  _originUID;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
    NSString * _remoteControlInterfaceID;
    NSString * _senderAppDisplayID;
}

@property (nonatomic, retain) _MRReceivedCommandAppOptionsProtobuf *appOptions;
@property (nonatomic) int command;
@property (nonatomic, retain) NSString *destinationAppDisplayID;
@property (nonatomic) long long destinationAppProcessID;
@property (nonatomic, readonly) bool hasAppOptions;
@property (nonatomic) bool hasCommand;
@property (nonatomic, readonly) bool hasDestinationAppDisplayID;
@property (nonatomic) bool hasDestinationAppProcessID;
@property (nonatomic, readonly) bool hasOptions;
@property (nonatomic) bool hasOriginUID;
@property (nonatomic, readonly) bool hasPlayerPath;
@property (nonatomic, readonly) bool hasRemoteControlInterfaceID;
@property (nonatomic, readonly) bool hasSenderAppDisplayID;
@property (nonatomic, retain) _MRCommandOptionsProtobuf *options;
@property (nonatomic) int originUID;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic, retain) NSString *remoteControlInterfaceID;
@property (nonatomic, retain) NSString *senderAppDisplayID;

- (void).cxx_destruct;
- (int)StringAsCommand:(id)arg1;
- (id)appOptions;
- (int)command;
- (id)commandAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationAppDisplayID;
- (long long)destinationAppProcessID;
- (id)dictionaryRepresentation;
- (bool)hasAppOptions;
- (bool)hasCommand;
- (bool)hasDestinationAppDisplayID;
- (bool)hasDestinationAppProcessID;
- (bool)hasOptions;
- (bool)hasOriginUID;
- (bool)hasPlayerPath;
- (bool)hasRemoteControlInterfaceID;
- (bool)hasSenderAppDisplayID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)options;
- (int)originUID;
- (id)playerPath;
- (bool)readFrom:(id)arg1;
- (id)remoteControlInterfaceID;
- (id)senderAppDisplayID;
- (void)setAppOptions:(id)arg1;
- (void)setCommand:(int)arg1;
- (void)setDestinationAppDisplayID:(id)arg1;
- (void)setDestinationAppProcessID:(long long)arg1;
- (void)setHasCommand:(bool)arg1;
- (void)setHasDestinationAppProcessID:(bool)arg1;
- (void)setHasOriginUID:(bool)arg1;
- (void)setOptions:(id)arg1;
- (void)setOriginUID:(int)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)setRemoteControlInterfaceID:(id)arg1;
- (void)setSenderAppDisplayID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
