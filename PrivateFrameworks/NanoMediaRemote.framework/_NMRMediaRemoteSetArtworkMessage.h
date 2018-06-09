/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMRMediaRemoteSetArtworkMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int originIdentifier : 1; 
    }  _has;
    NSData * _jpegData;
    int  _originIdentifier;
    NSData * _originalDigest;
    double  _timestamp;
}

@property (nonatomic, readonly) bool hasJpegData;
@property (nonatomic) bool hasOriginIdentifier;
@property (nonatomic, readonly) bool hasOriginalDigest;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSData *jpegData;
@property (nonatomic) int originIdentifier;
@property (nonatomic, retain) NSData *originalDigest;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasJpegData;
- (bool)hasOriginIdentifier;
- (bool)hasOriginalDigest;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jpegData;
- (void)mergeFrom:(id)arg1;
- (int)originIdentifier;
- (id)originalDigest;
- (bool)readFrom:(id)arg1;
- (void)setHasOriginIdentifier:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setJpegData:(id)arg1;
- (void)setOriginIdentifier:(int)arg1;
- (void)setOriginalDigest:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
