/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCProtoItem : PBCodable <NSCopying> {
    bool  _excludeFromShuffle;
    struct { 
        unsigned int mediaType : 1; 
        unsigned int excludeFromShuffle : 1; 
    }  _has;
    _MPCProtoItemIdentifierSet * _identifierSet;
    int  _mediaType;
}

@property (nonatomic) bool excludeFromShuffle;
@property (nonatomic) bool hasExcludeFromShuffle;
@property (nonatomic, readonly) bool hasIdentifierSet;
@property (nonatomic) bool hasMediaType;
@property (nonatomic, retain) _MPCProtoItemIdentifierSet *identifierSet;
@property (nonatomic) int mediaType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)excludeFromShuffle;
- (bool)hasExcludeFromShuffle;
- (bool)hasIdentifierSet;
- (bool)hasMediaType;
- (unsigned long long)hash;
- (id)identifierSet;
- (bool)isEqual:(id)arg1;
- (int)mediaType;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExcludeFromShuffle:(bool)arg1;
- (void)setHasExcludeFromShuffle:(bool)arg1;
- (void)setHasMediaType:(bool)arg1;
- (void)setIdentifierSet:(id)arg1;
- (void)setMediaType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
