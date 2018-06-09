/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSNowPlayingArtworkAvailableMessage : PBCodable <NSCopying> {
    NSString * _artworkIdentifier;
    struct { 
        unsigned int sessionIdentifier : 1; 
    }  _has;
    int  _sessionIdentifier;
}

@property (nonatomic, retain) NSString *artworkIdentifier;
@property (nonatomic, readonly) bool hasArtworkIdentifier;
@property (nonatomic) bool hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;

- (void).cxx_destruct;
- (id)artworkIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArtworkIdentifier;
- (bool)hasSessionIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)sessionIdentifier;
- (void)setArtworkIdentifier:(id)arg1;
- (void)setHasSessionIdentifier:(bool)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end
