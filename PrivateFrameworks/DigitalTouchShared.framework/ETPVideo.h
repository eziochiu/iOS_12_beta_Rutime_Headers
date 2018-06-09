/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETPVideo : PBCodable <NSCopying> {
    struct { 
        unsigned int mediaType : 1; 
    }  _has;
    NSData * _introMessageData;
    int  _mediaType;
    NSData * _playingMessagesData;
}

@property (nonatomic, readonly) bool hasIntroMessageData;
@property (nonatomic) bool hasMediaType;
@property (nonatomic, readonly) bool hasPlayingMessagesData;
@property (nonatomic, retain) NSData *introMessageData;
@property (nonatomic) int mediaType;
@property (nonatomic, retain) NSData *playingMessagesData;

- (void).cxx_destruct;
- (int)StringAsMediaType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIntroMessageData;
- (bool)hasMediaType;
- (bool)hasPlayingMessagesData;
- (unsigned long long)hash;
- (id)introMessageData;
- (bool)isEqual:(id)arg1;
- (int)mediaType;
- (id)mediaTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)playingMessagesData;
- (bool)readFrom:(id)arg1;
- (void)setHasMediaType:(bool)arg1;
- (void)setIntroMessageData:(id)arg1;
- (void)setMediaType:(int)arg1;
- (void)setPlayingMessagesData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
