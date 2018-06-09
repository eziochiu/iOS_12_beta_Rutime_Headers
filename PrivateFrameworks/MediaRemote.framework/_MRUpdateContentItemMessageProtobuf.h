/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRUpdateContentItemMessageProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _contentItems;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
}

@property (nonatomic, retain) NSMutableArray *contentItems;
@property (nonatomic, readonly) bool hasPlayerPath;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;

+ (Class)contentItemsType;

- (void).cxx_destruct;
- (void)addContentItems:(id)arg1;
- (void)clearContentItems;
- (id)contentItems;
- (id)contentItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentItemsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlayerPath;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)playerPath;
- (bool)readFrom:(id)arg1;
- (void)setContentItems:(id)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)writeTo:(id)arg1;

@end
