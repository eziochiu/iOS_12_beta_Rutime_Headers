/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPProtoAudioFilePlayerAssetUpdateMetaData : PBCodable <NSCopying> {
    NSString * _albumTitle;
    NSString * _artist;
    double  _duration;
    struct { 
        unsigned int duration : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _sandboxExtensionToken;
    NSString * _title;
    NSString * _uRL;
}

@property (nonatomic, retain) NSString *albumTitle;
@property (nonatomic, retain) NSString *artist;
@property (nonatomic) double duration;
@property (nonatomic, readonly) bool hasAlbumTitle;
@property (nonatomic, readonly) bool hasArtist;
@property (nonatomic) bool hasDuration;
@property (nonatomic, readonly) bool hasSandboxExtensionToken;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, readonly) bool hasURL;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *sandboxExtensionToken;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *uRL;

- (void).cxx_destruct;
- (id)albumTitle;
- (id)artist;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (bool)hasAlbumTitle;
- (bool)hasArtist;
- (bool)hasDuration;
- (bool)hasSandboxExtensionToken;
- (bool)hasTitle;
- (bool)hasURL;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sandboxExtensionToken;
- (void)setAlbumTitle:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSandboxExtensionToken:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (id)sockPuppetMessage;
- (id)title;
- (id)uRL;
- (void)writeTo:(id)arg1;

@end
