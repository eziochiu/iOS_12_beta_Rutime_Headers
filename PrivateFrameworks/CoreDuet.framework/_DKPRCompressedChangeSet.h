/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPRCompressedChangeSet : PBCodable <NSCopying> {
    NSData * _compressedData;
    unsigned long long  _uncompressedLength;
}

@property (nonatomic, retain) NSData *compressedData;
@property (nonatomic) unsigned long long uncompressedLength;

- (void).cxx_destruct;
- (id)compressedData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCompressedData:(id)arg1;
- (void)setUncompressedLength:(unsigned long long)arg1;
- (unsigned long long)uncompressedLength;
- (void)writeTo:(id)arg1;

@end
