/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRVolumeControlAvailabilityProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int volumeCapabilities : 1; 
        unsigned int volumeControlAvailable : 1; 
    }  _has;
    int  _volumeCapabilities;
    bool  _volumeControlAvailable;
}

@property (nonatomic) bool hasVolumeCapabilities;
@property (nonatomic) bool hasVolumeControlAvailable;
@property (nonatomic) int volumeCapabilities;
@property (nonatomic) bool volumeControlAvailable;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVolumeCapabilities;
- (bool)hasVolumeControlAvailable;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasVolumeCapabilities:(bool)arg1;
- (void)setHasVolumeControlAvailable:(bool)arg1;
- (void)setVolumeCapabilities:(int)arg1;
- (void)setVolumeControlAvailable:(bool)arg1;
- (int)volumeCapabilities;
- (bool)volumeControlAvailable;
- (void)writeTo:(id)arg1;

@end
