/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRSetArtworkMessageProtobuf : PBCodable <NSCopying> {
    NSData * _jpegData;
}

@property (nonatomic, readonly) bool hasJpegData;
@property (nonatomic, retain) NSData *jpegData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasJpegData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jpegData;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setJpegData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
