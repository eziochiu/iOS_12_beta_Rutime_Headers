/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MSPMediaSyncOperation : PBCodable <NSCopying> {
    MIPAlbum * _album;
    MIPArtist * _artist;
    MIPGenre * _genre;
    struct { 
        unsigned int operationType : 1; 
    }  _has;
    MIPMediaItem * _mediaItem;
    MIPMultiverseIdentifier * _multiverseId;
    int  _operationType;
    MIPPlaylist * _playlist;
    MIPSeries * _series;
}

@property (nonatomic, retain) MIPAlbum *album;
@property (nonatomic, retain) MIPArtist *artist;
@property (nonatomic, retain) MIPGenre *genre;
@property (nonatomic, readonly) bool hasAlbum;
@property (nonatomic, readonly) bool hasArtist;
@property (nonatomic, readonly) bool hasGenre;
@property (nonatomic, readonly) bool hasMediaItem;
@property (nonatomic, readonly) bool hasMultiverseId;
@property (nonatomic) bool hasOperationType;
@property (nonatomic, readonly) bool hasPlaylist;
@property (nonatomic, readonly) bool hasSeries;
@property (nonatomic, retain) MIPMediaItem *mediaItem;
@property (nonatomic, retain) MIPMultiverseIdentifier *multiverseId;
@property (nonatomic) int operationType;
@property (nonatomic, retain) MIPPlaylist *playlist;
@property (nonatomic, retain) MIPSeries *series;

- (void).cxx_destruct;
- (int)StringAsOperationType:(id)arg1;
- (id)album;
- (id)artist;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)genre;
- (bool)hasAlbum;
- (bool)hasArtist;
- (bool)hasGenre;
- (bool)hasMediaItem;
- (bool)hasMultiverseId;
- (bool)hasOperationType;
- (bool)hasPlaylist;
- (bool)hasSeries;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mediaItem;
- (void)mergeFrom:(id)arg1;
- (id)multiverseId;
- (int)operationType;
- (id)operationTypeAsString:(int)arg1;
- (id)playlist;
- (bool)readFrom:(id)arg1;
- (id)series;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setGenre:(id)arg1;
- (void)setHasOperationType:(bool)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setMultiverseId:(id)arg1;
- (void)setOperationType:(int)arg1;
- (void)setPlaylist:(id)arg1;
- (void)setSeries:(id)arg1;
- (void)writeTo:(id)arg1;

@end
