/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMRMediaRemoteSetStateMessageProfobuf : PBCodable <NSCopying> {
    NSData * _applicationInfo;
    NSData * _digest;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int originIdentifier : 1; 
        unsigned int state : 1; 
    }  _has;
    NSData * _nowPlayingInfo;
    int  _originIdentifier;
    NSData * _payload;
    NSData * _playbackQueue;
    int  _state;
    NSData * _supportedCommands;
    double  _timestamp;
}

@property (nonatomic, retain) NSData *applicationInfo;
@property (nonatomic, retain) NSData *digest;
@property (nonatomic, readonly) bool hasApplicationInfo;
@property (nonatomic, readonly) bool hasDigest;
@property (nonatomic, readonly) bool hasNowPlayingInfo;
@property (nonatomic) bool hasOriginIdentifier;
@property (nonatomic, readonly) bool hasPayload;
@property (nonatomic, readonly) bool hasPlaybackQueue;
@property (nonatomic) bool hasState;
@property (nonatomic, readonly) bool hasSupportedCommands;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSData *nowPlayingInfo;
@property (nonatomic) int originIdentifier;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic, retain) NSData *playbackQueue;
@property (nonatomic) int state;
@property (nonatomic, retain) NSData *supportedCommands;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)applicationInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)digest;
- (bool)hasApplicationInfo;
- (bool)hasDigest;
- (bool)hasNowPlayingInfo;
- (bool)hasOriginIdentifier;
- (bool)hasPayload;
- (bool)hasPlaybackQueue;
- (bool)hasState;
- (bool)hasSupportedCommands;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nowPlayingInfo;
- (int)originIdentifier;
- (id)payload;
- (id)playbackQueue;
- (bool)readFrom:(id)arg1;
- (void)setApplicationInfo:(id)arg1;
- (void)setDigest:(id)arg1;
- (void)setHasOriginIdentifier:(bool)arg1;
- (void)setHasState:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setOriginIdentifier:(int)arg1;
- (void)setPayload:(id)arg1;
- (void)setPlaybackQueue:(id)arg1;
- (void)setState:(int)arg1;
- (void)setSupportedCommands:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (int)state;
- (id)supportedCommands;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
