/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSPlaybackCommandMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int playbackCommand : 1; 
        unsigned int sessionIdentifier : 1; 
    }  _has;
    int  _playbackCommand;
    int  _sessionIdentifier;
}

@property (nonatomic) bool hasPlaybackCommand;
@property (nonatomic) bool hasSessionIdentifier;
@property (nonatomic) int playbackCommand;
@property (nonatomic) int sessionIdentifier;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlaybackCommand;
- (bool)hasSessionIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)playbackCommand;
- (bool)readFrom:(id)arg1;
- (int)sessionIdentifier;
- (void)setHasPlaybackCommand:(bool)arg1;
- (void)setHasSessionIdentifier:(bool)arg1;
- (void)setPlaybackCommand:(int)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end
