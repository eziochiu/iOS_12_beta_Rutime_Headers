/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSSetVolumeMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int sessionIdentifier : 1; 
        unsigned int volume : 1; 
    }  _has;
    int  _sessionIdentifier;
    float  _volume;
}

@property (nonatomic) bool hasSessionIdentifier;
@property (nonatomic) bool hasVolume;
@property (nonatomic) int sessionIdentifier;
@property (nonatomic) float volume;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSessionIdentifier;
- (bool)hasVolume;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)sessionIdentifier;
- (void)setHasSessionIdentifier:(bool)arg1;
- (void)setHasVolume:(bool)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)writeTo:(id)arg1;

@end
