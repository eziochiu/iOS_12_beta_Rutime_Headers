/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRNowPlayingPlayerProtobuf : PBCodable <NSCopying> {
    int  _audioSessionType;
    NSString * _displayName;
    struct { 
        unsigned int audioSessionType : 1; 
    }  _has;
    NSString * _identifier;
}

@property (nonatomic) int audioSessionType;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic) bool hasAudioSessionType;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (int)StringAsAudioSessionType:(id)arg1;
- (int)audioSessionType;
- (id)audioSessionTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)hasAudioSessionType;
- (bool)hasDisplayName;
- (bool)hasIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAudioSessionType:(int)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHasAudioSessionType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
