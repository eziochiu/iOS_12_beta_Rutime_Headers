/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRTransactionMessageProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int name : 1; 
    }  _has;
    unsigned long long  _name;
    _MRTransactionPacketsProtobuf * _packets;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
}

@property (nonatomic) bool hasName;
@property (nonatomic, readonly) bool hasPackets;
@property (nonatomic, readonly) bool hasPlayerPath;
@property (nonatomic) unsigned long long name;
@property (nonatomic, retain) _MRTransactionPacketsProtobuf *packets;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasPackets;
- (bool)hasPlayerPath;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)name;
- (id)packets;
- (id)playerPath;
- (bool)readFrom:(id)arg1;
- (void)setHasName:(bool)arg1;
- (void)setName:(unsigned long long)arg1;
- (void)setPackets:(id)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)writeTo:(id)arg1;

@end
